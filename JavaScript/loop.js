// for(let i=1;i<=5;i++){
//     console.log(i);
// }
// for(let i=1;i<=15;i+=2){
//     console.log(i);
// }
// for(let i=2;i<=10;i+=2){
//     console.log(i);
// }

// for(let i=1;i<=10;i++){
//     console.log(5*i);
// }
// for(let i=1;i<=3;i++){
//     for(let j=1;j<=3;j++){
//         console.log(j);
//     }
// }

// let i=1;
// while(i<=5){
//     console.log(i);
//     i++;
// }

// let favourite="Your Name";
// let guess=prompt("Guess my favourite movie: ");
// while((guess!=favourite)){
//     if(guess=="quit"){
//         console.log("You Quit!");
//         break;
//     }
//     guess=prompt("Wrong Guess, Please Try Again! ");
// }
// if (guess!="quit") {
//     console.log("You correctly guess my favourite movie that is "+favourite);
// }


// let fruits=["mango","apple","banana","litchi","orange"];
// for(let i=0;i<fruits.length;i++){
//     console.log(i,fruits[i]);
// }

// let heroes=[["ironman","spiderman","thor"],["superman","wonder woman","flash"]];
// for(let i=0;i<heroes.length;i++){
//     console.log(`List #${i}`);
//     for(let j=0;j<heroes[i].length;j++){
//         console.log(heroes[i][j]);
//     }
// }

// let fruits=["mango","apple","banana","litchi","orange"];
// for(fruit of fruits){
//     console.log(fruit);
// }
// let str="HelloWorld";
// for(c of str){
//     console.log(c);
// }

let heroes=[["ironman","spiderman","thor"],["superman","wonder woman","flash"]];
for(list of heroes){
    for(hero of list){
        console.log(hero);
    }
}