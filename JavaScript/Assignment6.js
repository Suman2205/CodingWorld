// let str="abcdabcdefgggh";
// let ans="";
// for(ch of str){
//     if(!ans.includes(ch)){
//         ans+=ch;
//     }
// }
// console.log(ans);

// let country=[];
// let n=prompt("Enter no. of countries: ");

// for(let i=0;i<n;i++){
//     let str=prompt("Enter country name: ");
//     country.push(str);
// }
// let max=0;
// for(let i=1;i<country.length;i++){
//     if(country[max].length<country[i].length){
//         max=i;
//     }
// }
// console.log(country[max]);

let arr=[8,9,10,1,2,3,4,5,6,7];
let num=5;
function getElements(arr,num){
    for(let i=0;i<arr.length;i++){
        if(arr[i]>num){
            console.log(arr[i]);
        }
    }
}
getElements(arr,num);

function isVowel(ch){
    return ch=='a'||ch=='i'||ch=='e'||ch=='o'||ch=='u';
}
let str="aieouffgh";
let count=0;
for(ch of str){
    if(isVowel(ch)){
        count++;
    }
}
console.log("No. of vowels: "+count);

let start=20;
let end=40;
let diff=end-start;
console.log(diff);
console.log(Math.floor(Math.random()*diff)+1);
