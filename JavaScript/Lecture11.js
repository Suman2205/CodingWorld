let h1=document.querySelector("h1");
function colorChange(color,delay){
    return new Promise((resolve,reject)=>{
        setTimeout(()=>{
            h1.style.color=color;
            resolve("Color changed");
        },delay);
    })
    
};
colorChange("red",1000)
.then(()=>{
    console.log("red color was completed");
    return colorChange("orange",1000);
})
.then(()=>{
    console.log("orange color was completed");
    return colorChange("blue",1000);
})
.then(()=>{
    console.log("blue color was completed");
    return colorChange("green",1000);
})
.then(()=>{
    console.log("green color was completed");
    return colorChange("purple",1000);
})
.then(()=>{
    console.log("purple color was completed");
})
.catch(()=>{
    console.log("color was not changed");
})

// colorChange("red",1000,()=>{
//     colorChange("orange",1000,()=>{
//         colorChange("green",1000);
//     });
// });

// function savetoDb(data){
    
//     return new Promise((resolve,reject)=>{
//         let internetSpeed=Math.floor(Math.random()*10)+1;
//         if(internetSpeed>4){
//             resolve("success: data was saved");
//         }
//         else{
//             reject("failure: weak connection");
//         }
//     })
// }
// let request=savetoDb("apna college");
// request
//     .then((result)=>{
//         console.log("data1 saved");
//         console.log(result);
//         return savetoDb("Hello World")
        
//     })
//     .then((result)=>{
//         console.log("data2 saved");
//         console.log(result);
//     })
//     .catch((error)=>{
//         console.log("promise was rejected");
//         console.log(error);
//     })