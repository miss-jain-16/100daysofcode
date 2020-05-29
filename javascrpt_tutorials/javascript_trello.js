const myTodos=[]
myTodos.push('Buy bRead')
myTodos.push('Record videos')
myTodos.push('Watch videos on coursera')

myTodos.forEach(function(todo,index){
    console.log(`your taks number ${index+1} is :${todo}`)
})


// 

for(let index=0;index<myTodos.length;index++){
    console.log(myTodos[index]);
}