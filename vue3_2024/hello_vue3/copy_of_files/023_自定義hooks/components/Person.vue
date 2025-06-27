<template>
  <div class="person">
    <h2>當前求和為：{{ sum }}，放大10倍為{{ bigSum }}</h2>
    <button type="button" @click="add">點我sum+1</button>
    <hr>
    <img v-for="(dog, index) in dogList" :key="index" :src="dog" :alt="dog">
    <br>
    <button type="button" @click="getDog">點我再加一隻狗</button>
  </div>
</template>

<script lang="ts" setup name="Person">
import useSum from '../hooks/useSum.ts'
import useDog from '../hooks/useDog.ts'
const { dogList, getDog } = useDog()
const { sum, add, bigSum } = useSum()
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

img {
  height: 100px;
  margin-right: 10px;
}
</style>
