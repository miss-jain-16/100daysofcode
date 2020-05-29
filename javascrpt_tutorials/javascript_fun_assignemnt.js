let getMygarde=function(currentmarks,totalmarks){
let mypercent=(currentmarks/totalmarks)*100

let mygrad=' '
if(mypercent>=90){
    mygrad='A'
    }
else if(mypercent>=80){
    mygrad='B'
    }
else if(mypercent>=70){
    mygrad='C' }
else{
    mygrad='D'
}
return `Your grade is ${mygrad} and percentage is ${mypercent}`

}
let yourResult= getMygarde(78,100)
console.log(yourResult);

// Your grade is C and percentage is 78

