<template>
  <div class="person">
    姓：<input type="text" v-model="firstName"> <br>
    名：<input type="text" v-model="lastName"> <br>
    <button @click="changeFullName">將全名改為li-si</button>
    全名：<span>{{ fullName }}</span><br>
  </div>
</template>

<script lang="ts" setup name="Person">
import { computed, ref } from 'vue';


let firstName = ref("zhang")
let lastName = ref("san")

//這樣定義的fullName是一個計算屬性，且是唯讀的
// let fullName = computed(() => {
//   console.log(1)
//   return firstName.value.slice(0, 1).toUpperCase() + firstName.value.slice(1) + '-' + lastName.value
// })
//這樣定義的fullName是一個計算屬性，且是可讀可寫的
let fullName = computed({
  get() {
    return firstName.value.slice(0, 1).toUpperCase() + firstName.value.slice(1) + '-' + lastName.value
  },
  set(val) {
    const [str1, str2] = val.split('-')
    firstName.value = str1
    lastName.value = str2
    console.log('hi', val);

  }
})

function changeFullName() {
  fullName.value = 'li-si'

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
