const superheros= ['iron man','spider man','thor','super man']
console.log(superheros[0]);
console.log(superheros);
console.log(superheros.length);
console.log([superheros[superheros.length-1]]);
console.log('we have 3 super heroes');
// but now i have changed 3 to 4, for that:
console.log(`we have ${superheros.length} super heroes`)
// this is for replacement









// 3 methos of arrays
const numbers=['one','two','thrree','four','five','six']
numbers.shift()
// remove the first elemnt of an array
console.log(numbers);

numbers.unshift('something')
console.log(numbers);
// add something at the front of array

numbers.pop()
console.log(numbers)




numbers.push("seven")
console.log(numbers)



numbers.splice(2,1,'Something')
// start from 2 and then next number is deleted and something is inserted

console.log(numbers)
numbers.splice(2,2,'Something')
// 2 numbers are delted and that place one something is added
console.log(numbers)


