let arr=[1,2,3,4,15,6,2,3];
let maxNum=arr[0];
let num=2;
for(let i=1;i<arr.length;i++){
    if(arr[i]>maxNum){
        maxNum=arr[i];
    }
}
console.log("Maximum number in array: "+maxNum);
for(let i=0;i<arr.length;i++){
    if(arr[i]==2){
        arr.splice(i,1);
    }
}
console.log(arr);


let number=287152;
let copy=number;
let count=0;
while(number>0){
    count++;
    number=Math.floor(number/10);
}
console.log("No. of digits: "+count);
let sum=0;
while(copy>0){
    sum+=copy%10;
    copy=Math.floor(copy/10);
}
console.log("Sum of digits: "+sum);

let n=5;
let fact=1;
for(let i=2;i<=n;i++){
    fact*=i;
}
console.log("Factorial of "+num+": "+fact);
