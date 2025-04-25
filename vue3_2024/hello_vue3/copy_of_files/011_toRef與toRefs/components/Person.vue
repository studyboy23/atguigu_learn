<template>
  <div class="person">
    <h2>姓名：{{ person.name }}</h2>
    <h2>年齡：{{ person.age }}, {{ nl }}</h2>
    <button @click="changeName">修改姓名</button>
    <button @click="changeAge">修改年齡</button>
  </div>
</template>

<script lang="ts" setup name="Person">
import { reactive, toRef, toRefs } from 'vue';

//數據
let person = reactive({
  name: "Amy",
  age: 18
})

let { name, age } = toRefs(person)
let nl = toRef(person, "age")

//方法
function changeName() {
  name.value += "~"
}

function changeAge() {
  age.value += 1
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
