// async function greet(){
//     // throw "some error";
//     return "hello world";
// }
// greet()
// .then((result)=>{
//     console.log("Promise was resolved");
//     console.log("Promise result: "+result)
// })
// .catch((err)=>{
//     console.log("promise was rejected and the error is "+err);
// })

// let h1=document.querySelector("h1");
// function colorChange(color,delay){
//     return new Promise((resolve,reject)=>{
//         setTimeout(()=>{
//             let num=Math.floor(Math.random()*5)+1;
//             if(num>3){
//                 reject("color was not changed");
//             }
//             h1.style.color=color;
//             console.log('Color was changed');
//             resolve("Color changed");
//         },delay);
//     })
    
// };


// async function show(){
//     try{
//         await colorChange("violet",1000);
//         await colorChange("indigo",1000);
//         await colorChange("red",1000);
//         await colorChange("orange",1000);
//         await colorChange("yellow",1000);
//         await colorChange("green",1000);
//     }
//     catch(err){
//         console.log('error caught');
//         console.log(err);
//     }
// }
// function getNum(){
//     return new Promise((resolve,reject)=>{
//         setTimeout(()=>{
//             let num=Math.floor(Math.random()*10)+1;
//             console.log(num);
//             resolve();
//         },1000)
        
//     })
// }
// async function demo(){
//     await getNum();
//     await getNum();
//     getNum();
// }

// let url="https://catfact.ninja/fact";
// fetch(url)
//     .then((res)=>{
//         console.log(res);
//         res.json().then((data)=>{
//             console.log(data);
//         });
//     })
//     .catch((err)=>{
//         console.log("Error- "+err);
//     });

// async function getFacts(){
//     try{
//         let res1=await fetch(url);
//         let data1=await res1.json();
//         console.log("data1- "+data1.fact);

//         let res2=await fetch(url);
//         let data2=await res2.json();
//         console.log('data2- '+data2.fact);
//     }
//     catch(e){
//         console.log("error- "+e);
//     }
// }
// getFacts(url);


// let url2="https://dog.ceo/api/breeds/image/random"
// let btn=document.querySelector('button');
// btn.addEventListener("click",async ()=>{
//     let link=await getImage();
//     // console.log(fact);
//     let img=document.querySelector("#result");
//     img.setAttribute("src",link);
// });
// async function getImage(){
//     try{
//         let res=await axios.get(url2);
//         console.log(res);
//         return res.data.message;
//     }
//     catch(e){
//         console.log("Error- ",e);
//         return "No  Fact";
//     }
// }
// btn.addEventListener("click",async ()=>{
//     let fact=await getFacts();
//     console.log(fact);
//     let p=document.querySelector("#result");
//     p.innerText=fact;
// });
// async function getFacts(){
//     try{
//         let res=await axios.get(url);
//         return res.data.fact;
//     }
//     catch(e){
//         console.log("Error- ",e);
//         return "No  Fact";
//     }
// }


// let url="https://icanhazdadjoke.com/";
// async function getJokes(){
//     try{
//         const config={headers: {Accept:"application/json"}};
//         let res=await axios.get(url,config);
//         console.log(res.data);
//     }
//     catch(e){
//         console.log('Error',e);
//     }
// };


let url="http://universities.hipolabs.com/search?name=";
let btn=document.querySelector("button");
let inp=document.querySelector("input");
let p=document.querySelector("p");
let list=document.querySelector("#result");
let country;
async function getColleges(){
    try{
        let res= await axios.get(url+country);
        return res.data;
    }
    catch(e){
        console.log("error- "+e);
        return [];
    }
}
function show(colleges){
    list.innerText="";
    for(col of colleges){
        let li=document.createElement("li");
        li.innerText=col.name;
        list.appendChild(li);
        console.log(col.name);
    }
}
btn.addEventListener("click",async()=>{
    country=inp.value;
    let colleges=await getColleges();
    show(colleges);
});
