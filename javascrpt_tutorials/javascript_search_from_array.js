// trellov4.0

// const myTodos=['Buy Bread','Go to gym','Record youtube videos']
// console.log(myTodos.indexOf('Buy Bread'));

const newTodos=[{
    title:'Buy Bread',
    isDone:false,
},{
    title:'Go to gym',
    isDone:false,
},{
    title:'Record youtube videos',
    isDone:true,
}]


// const index=newTodos.findIndex(function(todo,index){
//    console.log(todo);
//     return todo.title=='Go to gym'
// })
// console.log(index)

const findTodo=function(myTodos,title){
    const index=myTodos.findIndex(function(todo,index)
    {
        return todo.title.toLowerCase()==title.toLowerCase()
    })
    return myTodos[index]
}

let print=findTodo(newTodos,'Go to gym')
console.log(print)
