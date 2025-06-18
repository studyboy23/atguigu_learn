<template>
  <div class="person">
  </div>
</template>

<script lang="ts" setup name="Person">
import { type PersonInter, type Persons } from '@/type';
// let person: PersonInter = { id: 'asdjkl', name: '張三', age: 60 }

let personList: Persons = [
  { id: 'asdjkl01', name: '張三', age: 60 },
  { id: 'asdjkl02', name: '李四', age: 61 },
  { id: 'asdjkl03', name: '王五', age: 62 }
]
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
