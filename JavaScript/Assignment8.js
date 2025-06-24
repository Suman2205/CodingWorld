arr=[1,2,3,4,5];
let ans=arr.reduce((res,el)=>(res+(el**2)));
console.log(ans);

let newArr=arr.map((el)=>(el+5));
console.log(newArr);

let strings=["adam","bob","catlyn","donald","eve"];
let newString=strings.map((str)=>str.toUpperCase());
console.log(newString);

const doubleAndReturnArgs=(arr,...args)=>[
    ...arr,
    ...args
];
console.log(doubleAndReturnArgs([1,2,3,4],5,6,7));

const mergeObjects=(obj1,obj2)=>({
    ...obj1,
    ...obj2
});
console.log(mergeObjects({a:2,b:3},{c:4,d:5}));
