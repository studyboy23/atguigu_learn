<template>
  <div class="person">
    <h2>姓名：{{ name }}</h2>
    <h2>年齡：{{ age }}</h2>
    <button type="button" @click="changeName">修改名字</button>
    <button type="button" @click="changeAge">修改年齡</button>
    <button type="button" @click="showTel">查看聯繫方式</button>
  </div>
</template>

<script lang="ts">
export default {
  name: 'Person',

  setup() {
    // console.log(this); //setup函數中的this是undefinded, Vue3中已經弱化了this
    //data，原本是寫在data裡的，此時的name,age,tel不是嚮應式的數據 //響應式是指data與網頁模板變數做資料雙向綁定
    let name = 'aaa' //
    let age = 18
    let tel = '000000000'

    function changeName() {
      name = 'AAA' //注意!這樣修改name，頁面沒有變化
      console.log(name) //name確實修改了，但name不是嚮應式的
    }
    function changeAge() {
      age = 19 //注意!這樣修改age，頁面沒有變化
      console.log(age) //age確實修改了，但age不是嚮應式的
    }
    function showTel() {
      alert(tel)
    }

    //將數據、方法交出去，模板中才能使用
    return { name, age, tel, changeName, changeAge, showTel }
  },
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
</style>
