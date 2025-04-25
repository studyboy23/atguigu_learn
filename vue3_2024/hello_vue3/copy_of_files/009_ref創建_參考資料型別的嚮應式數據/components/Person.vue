<template>
  <div class="person">
    <h2>汽車信息：一輛{{ car.brand }}，價值{{ car.price }}萬</h2>
    <button @click="changePrice">修改價格</button>
    <hr />
    <h2>遊戲列表：</h2>
    <ul>
      <li v-for="g in games" :key="g.id">{{ g.name }}</li>
    </ul>
    <button @click="changeFirstGame">修改第一個遊戲名字</button>

  </div>
</template>

<script lang="ts" setup name="Person">
import { ref } from 'vue'

let car = ref({ brand: '賓士', price: 100 })

let games = ref([
  {
    id: 'asdsadasd01',
    name: 'aaa',
  },
  {
    id: 'asdsadasd02',
    name: 'bbb',
  },
  {
    id: 'asdsadasd03',
    name: 'ccc',
  },
])



function changePrice() {
  car.value.price += 10
  console.log(car.value)
}

function changeFirstGame() {
  games.value[0].name = 'AAA'
  console.log(games.value[0].name)
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
