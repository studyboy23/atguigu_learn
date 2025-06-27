import { computed, onMounted, ref } from 'vue';

export default function () {
    //數據
    let sum = ref(0)
    let bigSum = computed(()=>{
      return sum.value*10
    })
    //方法
    function add() {
      sum.value += 1
    }
    onMounted(()=>{
      add()
    })
    //向外部提供東西
    return{sum,add,bigSum}
}

