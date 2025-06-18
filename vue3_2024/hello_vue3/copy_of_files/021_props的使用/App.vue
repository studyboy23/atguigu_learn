<template>
    <Person a='haha' :list="personList"></Person>

</template>

<script lang='ts' setup name="App">
import { reactive } from 'vue';
import Person from './components/Person.vue'
import { type Persons } from './type';


let personList = reactive<Persons>([
    { id: 'asdjkl01', name: '張三', age: 18 },
    { id: 'asdjkl02', name: '李四', age: 20 },
    { id: 'asdjkl03', name: '王五', age: 22 }
])

</script>