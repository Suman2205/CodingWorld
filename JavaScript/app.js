// let smallImages=document.getElementsByClassName("oldImg");
// console.dir(smallImages[0].src);
// smallImages[0].src="spiderman_img.png";

// let anchor=document.querySelectorAll('.box a');
// for(let i=0;i<anchor.length;i++){
//     anchor[i].style.color="purple";
// }


// let box=document.querySelector('.box');
// box.classList.add("yellowBg");
// let body=document.querySelector('body');
// let newPara=document.createElement('p');
// newPara.innerHTML="<b>Hello</b>";
// body.appendChild(newPara);
let body=document.querySelector('body');
let redP=document.createElement('p');
redP.innerText="Hi, I am red";
redP.style.color="red";
// document.querySelector('body').append(redP);
let blueH=document.createElement('h3');
blueH.innerText="I am blue h3";
blueH.classList.add("blue");
let divEle=document.createElement('div');
divEle.classList.add("divStyle");
let divH=document.createElement('h1');
divH.innerText="I'm a div";
let divP=document.createElement('p');
divP.innerText="ME TOO";
body.append(redP);
body.append(blueH);
body.append(divEle);
divEle.append(divH);
divEle.append(divP);