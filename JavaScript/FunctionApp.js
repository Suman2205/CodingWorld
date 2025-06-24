// function hello(){
//     console.log("Hello World");
// }
// hello();
// hello();
// hello();

// function diceRoll(){
//     console.log(Math.floor(Math.random()*6)+1);
// }
// diceRoll();
// diceRoll();

// function printInfo(name,age){
//     console.log(`${name}'s age is ${age}`);
// }
// printInfo("Suman",19);
// printInfo();

// function avg(a,b,c){
//     console.log((a+b+c)/3);
// }
// avg(3,4,5);
// let sum=0;    //Global Scope
// function sum1ToN(n){
//     let sum=0;   //Function Scope
//     for(let i=1;i<=n;i++){    //Block Scope
//         sum+=i;
//     }
//     return sum;
// }

// console.log(sum1ToN(15));

// function concatString(arr){
//     let str="";
//     for(let i=0;i<arr.length;i++){
//         str+=arr[i];
//     }
//     return str;
// }

function oddEvenTest(request){
    if(request=="odd"){
        return function(n){
            console.log(!(n%2==0));
        }
    }
    else if(request=="even"){
        return function(n){
            console.log(n%2==0);
        }
    }
    else{
        console.log("Wrong request");
    }

}

let odd=oddEvenTest("odd");
odd(6);

const calculator={
    add: function(a,b){
        return a+b;
    },
    sub: function(a,b){
        return a-b;
    },
    mul: function(a,b){
        return a*b;
    }
};

