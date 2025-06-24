let arr=[1,2,3,4,5];
function print(el){
    console.log(el);
}
arr.forEach(print);

let num=arr.map(function(el){
    return el*2;
})
console.log(num);

let students=[
    {
        name:"Suman",
        marks:90
    },
    {
        name:"Kisna",
        marks: 85
    },
    {
        name:"Paras",
        marks: 85
    }
]

let cgpa=students.map((el)=>{
    return el.marks/10;
})
console.log(cgpa);

let nums=[2,4,1,5,6,12,7,8,9];
// let even=nums.filter((num)=>(num%2==0));
// console.log(even);

let num1=[2,4,5,8];
let flag=num1.every((ele)=>(ele%2==0));
console.log(flag);

// let sum=num1.reduce((res,ele)=>(res+ele));
// console.log(sum);

let max=nums.reduce((res,ele)=>((ele>res)?ele:res))
console.log(max);

let num2=[10,20,35,40];
let flag1=num2.every((ele)=>(ele%10==0));
console.log(flag1);


let min=nums.reduce((res,ele)=>(ele<res)?ele:res);
console.log(min);

console.log(..."helloWorld");

let even=[2,4,6,8,10];
let odd=[1,3,5,7,9];
let num3=[...odd,...even];
console.log(num3);

const data={
    email:"suman27574@gmail.com",
    password:"abcd"
}
let dataCopy={...data,id:23};
console.log(dataCopy);

function sum(...args){
    return args.reduce((res,ele)=>(res+ele));
}

let names=["tony","bruce","steve","peter"];
let [winner,runnerup]=names;
console.log(winner,runnerup);

const student={
    name:"suman",
    class: 12,
    age:17,
    subjects:["phy","chem","math","eng","comp"],
    username:"sumon22",
    password:1234
};
let{username:user,password:pass}=student;
console.log(user);
console.log(pass);