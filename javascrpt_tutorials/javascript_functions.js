let sayHello=function(){
    console.log("greeting message for user")
    console.log("hey user")
}
sayHello()


let sayName=function(name){
    console.log(`greeting message for ${name} `)
    console.log(`hey ${name}`)
}
sayName('john')





let fullmaker=function(firstname,lastname){
    console.log("welcome to github")
    console.log(`happy to have u ,${firstname} ${lastname}`)

    
}
fullmaker('megha','garg')


//DEFAULT PARAMETERS
let mymultiplier=function(num1,num2){
    return num1*num2
}
console.log(mymultiplier(1,2))