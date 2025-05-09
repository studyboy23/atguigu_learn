<template>
  <div class="person">
    <h1>情況四：監視【reactive】定義的【物件類型】數據</h1>
    <h2>姓名：{{ person.name }}</h2>
    <h2>年齡：{{ person.age }}</h2>
    <h2>汽車：{{ person.car.c1 }}、{{ person.car.c2 }}</h2>
    <button @click="changeName">修改名字</button>
    <button @click="changeAge">修改年齡</button>
    <button @click="changeC1">修改第一台車</button>
    <button @click="changeC2">修改第二台車</button>
    <button @click="changeCar">修改所有車</button>
  </div>
</template>

<script lang="ts" setup name="Person">
import { reactive, watch } from 'vue';

//數據
let person = reactive({
  name: '張三',
  age: 18,
  car: {
    c1: '賓士',
    c2: 'BMW'
  }
})
//方法
function changeName() {
  person.name += '~'
}
function changeAge() {
  person.age += 1
}
function changeC1() {
  person.car.c1 = 'Honda'
}
function changeC2() {
  person.car.c2 = 'Ford'
}
function changeCar() {
  person.car = { c1: 'Tesla', c2: 'Poche' }
}

//監視,情況四：監視嚮應式物件中的某個屬性,且該屬性為基本類型,要寫成函數式
watch(() => person.name, (newValue, oldValue) => {
  console.log('person.name change', newValue, oldValue);
})
//監視,情況四：監視嚮應式物件中的某個屬性,且該屬性為物件類型,可以直接寫,也能寫函數式,更推薦函數
watch(() => person.car, (newValue, oldValue) => {
  console.log('person.car change', newValue, oldValue);
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
