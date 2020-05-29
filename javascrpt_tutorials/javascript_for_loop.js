const days=['monday','tue','wed','thur','fri','sat','sun']

console.log(days[0])

let sayName=function(name){
    console.log(`greeting message for ${name} `)
    console.log(`hey ${name}`)
}

days.forEach(sayName)


days.forEach(function(tiger){
    console.log(tiger)
})


days.forEach(function(days,index){
    console.log(`starts with ${index+1}--${days}`)
})



// for loop
// syntax for loop:-
for(let index=0;index<=days.length;index++){
    const element=days[index];
    console.log(element);

    // or

    console.log(days[index]);
}

// it will print reverse

for(index=days.length;index=>0;index--){
    console.log(days[index]);
}

