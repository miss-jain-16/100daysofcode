let myTodos={
    day:'Monday',
    meetings:0,
    meetDone:0,

}

let addMeeting=function(todo,meet=0){
    todo.meetings=todo.meetings+meet
}
// addMeeting(myTodos,2)
// console.log(addMeeting)


let meetDone=function(todo,meet=0){
    todo.meetDone=todo.meetDone-meet
}

let resetDay=function(todo){
    todo.meetings=0
    todo.meetDone=0
}

let getSummaryofDay=function(todo){
    let meetLeft=todo.meetings+todo.meetDone
    return `You have ${meetLeft} meetings for today`
}

addMeeting(myTodos,4)
addMeeting(myTodos,7)
meetDone(myTodos,3)
getSummaryofDay(myTodos)
console.log(getSummaryofDay(myTodos))