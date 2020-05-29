let youtubeVideo1={
    title :'Loops in javascript',
    videoLength : 15,
    videoCreator:"hitesh chaudhary",
    videoDescription :'This is video description'
}

let youtubeVideo2={
    title :'Functions in javascript',
    videoLength : 12,
    videoCreator:"hitesh chaudhary",
    videoDescription :'This is video description'
}
console.log(youtubeVideo1)

console.log(`hey new video on title ${youtubeVideo1.title} by ${youtubeVideo1.videoCreator}`)


// for changing the object

let changeVideoLength=function(myObject){
console.log(`Time of the video is : ${myObject.videoLength+2}`);



}
changeVideoLength(youtubeVideo1)
changeVideoLength(youtubeVideo2)



// we want to return multiple videos

