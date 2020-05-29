console.log(2==2);
// true

console.log(2==2.0)
// true

console.log(" "==" ")
// true

let myvar=" "
let myvar2=" "
console.log(myvar===myvar2)
// true


let myvar1={ }
let myvar3={ }
console.log(myvar1==myvar3)
console.log(myvar1===myvar3)
// false ,this is object,return false in case of == and ===


// == checks for equality
//  === checks for identity


let myvar11={ }
let myvar31=myvar11
console.log(myvar11==myvar31)


let my='A'
let mr='A'
console.log(my==mr)
// true
console.log(my===mr)
// true



let megha=9
let megh1="9"
console.log(megh1==megha)
// true
console.log(megh1===megha)
// fasle
