// SCOPE
let iAmglobal="somevalue"
if(true){
    let iamlocal="some more value"
    iAmglobal="changes"
    console.log(iAmglobal);
    console.log(iamlocal);
}
// console.log(iamlocal);
// gives error because it is local

console.log(iAmglobal);
// no problem

// if i reassign the global in if_else block,what happen??
// still no problem

// if i change this let to var

let iAmglobal1="somevalue"
if(true){
    var iamlocal1="some more value"
    iAmglobal1="changes"
    console.log(iAmglobal1);
    console.log(iamlocal1);
}
console.log(iamlocal1);