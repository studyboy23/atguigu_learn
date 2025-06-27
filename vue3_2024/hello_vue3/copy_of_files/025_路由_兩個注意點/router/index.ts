//創建一個路由器，並暴露出去

//第一步：引入createRouter
import { createRouter, createWebHistory } from "vue-router";

//引入一個個可能呈現的組件
import Home from '@/pages/Home.vue'    
import News from '@/pages/News.vue'    
import About from '@/pages/About.vue'    


//第二步：創建路由器

const router = createRouter({
    history:createWebHistory(),  //路由器的工作模式(稍後講解)
    routes:[  //一個個的路由規則
        {
            path:'/home',
            component:Home
        },
        {
            path:'/news',
            component:News
        },
        {
            path:'/about',
            component:About
        },
    ],
})

//暴露出去router
export default router