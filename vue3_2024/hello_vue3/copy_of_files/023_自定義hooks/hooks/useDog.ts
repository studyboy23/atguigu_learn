import { onMounted, reactive} from 'vue';
import axios from 'axios';

//https://dog.ceo/api/breed/pembroke/images/random

export default function() {
    //數據
let dogList = reactive([
  'https://images.dog.ceo/breeds/pembroke/n02113023_209.jpg'
])
let url = 'https://dog.ceo/api/breed/pembroke/images/random'
//方法
function getDog() {
  axios.get(url).then((response) => {
    if (response.data.status == 'success') {
      dogList.push(response.data.message)
    }
  }).catch((e) => {
    alert(e);
  })
}
//鉤子
onMounted(()=>{
    getDog();
})
//向外部提供東西
return {dogList,getDog}
}

