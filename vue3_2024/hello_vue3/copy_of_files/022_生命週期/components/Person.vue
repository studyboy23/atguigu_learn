<template>
  <div class="person">
    <h2>當前求和為：{{ sum }}</h2>
    <button type="button" @click="add">點我sum+1</button>
  </div>
</template>

<script lang="ts" setup name="Person">
import { onBeforeMount, onBeforeUnmount, onBeforeUpdate, onMounted, onUnmounted, onUpdated, ref } from 'vue';

//數據
let sum = ref(0);

//方法
function add() {
  sum.value += 1;
}

//創建
console.log("創建");

//掛載前
onBeforeMount(() => {
  console.log("掛載前");
})
//掛載完畢
onMounted(() => {
  console.log("子------掛載完畢");
})
//更新前
onBeforeUpdate(() => {
  console.log("更新前");
})
//更新完畢
onUpdated(() => {
  console.log("更新完畢");
})
//卸載
onBeforeUnmount(() => {
  console.log("卸載");
})
//卸載完畢
onUnmounted(() => {
  console.log("卸載完畢");
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
