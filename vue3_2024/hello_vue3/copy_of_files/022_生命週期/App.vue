<template>
    <Person v-if="isShow"></Person>

</template>

<script lang='ts' setup name="App">
import { onMounted, ref } from 'vue';
import Person from './components/Person.vue';

let isShow = ref(true);

onMounted(() => {
    console.log("父------掛載完畢");
})
</script>