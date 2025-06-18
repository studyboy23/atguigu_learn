<template>
    <button @click="showLog">點我輸出h2這個元素</button>
    <Person ref="ren"></Person>

</template>

<script lang='ts' setup name="App">
import { ref } from 'vue';
import Person from './components/Person.vue'

let ren = ref()
function showLog() {
    console.log(ren.value);

}

</script>