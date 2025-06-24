// const student={
//     name:"Suman",
//     age: 19,
//     chem: 95,
//     phy:97,
//     math:95,
//     getAvg(){
//         let avg=(this.phy+this.chem+this.math)/3;
//         console.log(avg);
//     }
// }
// console.log(student.getAvg());
// console.log(student.name);

// try{
//     console.log(a);
// }
// catch{
//     console.log("variable doesn't exist");
// }

// const sum=(a,b)=>{
//     return ("Sum: "+(a+b));
// }

// const mul=(a,b)=>(
//     a*b
// );

// console.log("hi there!");
// setTimeout(()=>{
//     console.log("Hello World");
// },4000);
// console.log("Welcome to my world");


// let id=setInterval(()=>{
//     console.log("Hello World");
// },2000);
// console.log(id);

let count=0;
let id1=setInterval(()=>{
    console.log("Hello World");
    count++;
    // if(count==5){
    //     clearInterval(id1);
    // }
},2000);
setTimeout(()=>{
    clearInterval(id1);
},10000);
