<template>
  <div class="person">
    <h1>情況二：監視【ref】定義的【物件類型】數據</h1>
    <h2>姓名：{{ person.name }}</h2>
    <h2>年齡：{{ person.age }}</h2>
    <button @click="changeName">修改名字</button>
    <button @click="changeAge">修改年齡</button>
    <button @click="changePerson">修改整個人</button>
  </div>
</template>

<script lang="ts" setup name="Person">
import { ref, watch } from 'vue';

//數據
let person = ref({
  name: '張三',
  age: 18,
})
//方法
function changeName() {
  person.value.name += '~'
}
function changeAge() {
  person.value.age += 1
}
function changePerson() {
  person.value = { name: '李四', age: 19 }
}
/*
  監視,情況二：監視【ref】定義的【物件類型】數據,監視物件的地址值,若想監視物件內部屬性的變化,需手動開啟深度監視
  watch的第一個參數是：被監視的數據
  watch的第二個參數是：觸發的回呼函數
  watch的第一個參數是：配置物件(deep,immediate等等...)
*/
const stopWatch = watch(person, (newValue, oldValue) => {
  console.log('person change', newValue, oldValue);
}, { deep: true })
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
