// const sayHello=function(){
//     return "hey there"+name+"!"
// }
// console.log(sayHello('megha'));

// arrow_function...
const sayHello= (name)=> `hey there ${name} !`

console.log(sayHello('megha'))

// /reduce the complexity..



const todos=[{
    title:'Buy Bread',
    isDone:false,
},{
    title:'Go to gym',
    isDone:true,
},{
    title:'Record youtube videos',
    isDone:false,
}]

// pick out those which are ture

const thingsDone=todos.filter((todo)=>todo.isDone==false)
console.log(thingsDone[0].title)
console.log(thingsDone[1].title)



