// let btn=document.querySelector('button');
// btn.onclick=function(){
//     console.log("Button was clicked");
// }
// btn.onmouseenter=function(){
//     btn.style.backgroundColor="blue";
// }

// function sayHello(){
//     alert("Hello");
// }
// function sayName(){
//     alert("Suman");
// }
// btn.addEventListener("click",sayHello);
// btn.addEventListener("click",sayName);

// let btn=document.querySelector('button');
// let divEle=document.querySelector('div');
// btn.addEventListener("click",function(){
//     let h3=document.querySelector('h3');
//     let randomcolor=randomColor();
//     h3.innerText=randomcolor;
//     divEle.style.backgroundColor=randomcolor;
// })
// function randomColor(){
//     let r=Math.floor(Math.random()*255);
//     let g=Math.floor(Math.random()*255);
//     let b=Math.floor(Math.random()*255);
//     let color=`rgb(${r},${g},${b})`;
//     return color;
// };

// let inp=document.querySelector('input');
// inp.addEventListener("keydown",function(event){
//     console.log("key was pressed");
//     console.log(event.code);
//     console.log(event.key);
// })

let form=document.querySelector('form');
form.addEventListener("submit",function(event){
    event.preventDefault();
    // let user=document.querySelector("#user");
    // let pass=document.querySelector("#pass");
    let user=this.elements[0];
    let pass=this.elements[1];
    console.log(user.value);
    console.log(pass.value);
})