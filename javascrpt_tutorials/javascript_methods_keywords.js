let myTodos ={
    day:'monday',
    meetimgs:0,
    
    addMeeting:function(){
        console.log(this)
    }

}
let myTodos2 ={
    day:'tuesday',
    meetimgs:0,
    
    addMeeting:function(){
        console.log(this)
    }

}

let myTodos3 ={
    day:'tuesday',
    meetimgs:0,
    
    addMeeting1 : function(numm){
        this.meetimgs=this.meetimgs+numm
    },
    summary: function(){
        return `You have ${ this.meetimgs} today`
    }

}
myTodos3.addMeeting1(6)
console.log(myTodos3.summary())


// this is reference point

// myTodos.addMeeting()

// myTodos2.addMeeting()

