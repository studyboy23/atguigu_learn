<template>
  <div class="person">
    <ul>
      <li v-for="item in list" :key="item.id">{{ item.name }} -- {{ item.age }}</li>
    </ul>
  </div>
</template>

<script lang="ts" setup name="Person">
import { type Persons } from '@/type';


//只接收list
defineProps(['list'])

//接收list + 限制類型
// defineProps<{ list: Persons }>()

//接收list + 限制類型 + 限制必要性(TS) + 指定預設值(withDefaults)
// withDefaults(defineProps<{ list?: Persons }>(), {
//   list: () => [{ id: 'asdjkl01', name: '西西哈哈', age: 19 }]
// })



//接收list，同時將props保存起來
// let props = defineProps(['list'])

// console.log(props.a);

</script>

<style scoped>
.person {
  background-color: skyblue;
  box-shadow: 0 0 10px;
  border-radius: 10px;
  padding: 20px;
}

button {
  margin: 0 5px;
}

li {
  font-size: 20px;
}
</style>
