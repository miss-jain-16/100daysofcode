// &&-AND (BOTH SIDES NEED TO BE TRUE)
// ||-OR (BOTH SIDES NEED NOT TO BE TRUE,ONE SIDE NEED TO BE TRUE)

let isVerifies=false
let isLoggedIn =true
let HaspaymentToken=true
let isguest=true

if(isLoggedIn&&isVerifies&&HaspaymentToken){
    console.log("greet and allowed")
}
else if(isVerifies || isguest){
    console.log("allowed")
}
else{
    console.log("messae:warning")
}