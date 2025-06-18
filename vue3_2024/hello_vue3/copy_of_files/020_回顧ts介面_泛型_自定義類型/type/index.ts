//定義一個介面，用於限制person物件的具體屬性
export interface PersonInter {
    id:string,
    name:string,
    age:number
}

//一個自定義類型 
// export type Persons = Array<PersonInter>
export type Persons = PersonInter[]