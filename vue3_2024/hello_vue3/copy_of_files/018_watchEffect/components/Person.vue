<template>
  <div class="person">
    <h2>需求：當水溫達到60度時，或水位達到80cm時，給Server發送請求</h2>
    <h2>當前水溫：{{ temp }}度</h2>
    <h2>當前水位：{{ height }}cm</h2>
    <button @click="changeTemp">水溫+10</button>
    <button @click="changeHeight">水位+10</button>
  </div>
</template>

<script lang="ts" setup name="Person">
import { h, ref, watch, watchEffect } from 'vue';

//數據
let temp = ref(10)
let height = ref(0)
//方法
function changeTemp() {
  temp.value += 10
}
function changeHeight() {
  height.value += 10
}
//監視 -- watch實現
/* watch([temp, height], (value) => {
  //從value中獲取最新水溫水位
  let [newTemp, newHeight] = value

  //邏輯
  if (newTemp >= 60 || newHeight >= 80) {
    console.log('發請求')
  }
}) */

//監視 -- watchEffect實現
watchEffect(() => {
  if (temp.value >= 60 || height.value >= 80) {
    console.log('@');

  }
})
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
