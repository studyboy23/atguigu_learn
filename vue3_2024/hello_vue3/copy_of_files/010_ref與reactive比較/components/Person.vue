<template>
  <div class="person">
    <h2>汽車信息：一輛{{ car.brand }}，價值{{ car.price }}萬</h2>
    <button @click="changeBrand">修改品牌</button>
    <button @click="changePrice">修改價格</button>
    <button @click="changeCar">修改汽車</button>
    <hr>
    <h2>當前求和：{{ sum }}</h2>
    <button @click="changeSum">點我sum+1</button>
  </div>
</template>

<script lang="ts" setup name="Person">
import { reactive, ref } from 'vue'

let car = reactive({ brand: '賓士', price: 100 })
let sum = ref(0)

function changePrice() {
  car.price += 10
}
function changeBrand() {
  car.brand = "BMW"
}
function changeCar() {
  // car = { brand: "福斯", price: 1 } //這樣寫頁面不更新
  // car = reactive({ brand: "福斯", price: 1 }) //這樣寫頁面不更新

  //下面的寫法，頁面會更新
  // Object.assign(car, { brand: "福斯", price: 1 })


}
function changeSum() {
  sum.value++
}


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
