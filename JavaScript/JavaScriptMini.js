let gameSeq=[];
let userSeq=[];
let btns=["red","green","yellow","purple"];
let started=false;
let level=0;
let h2=document.querySelector('h2');
document.addEventListener("keypress",function(){
    if(started==false){
        console.log("Game Started");
        started=true;
        levelUp();
    }
    

})

function btnFlash(btn){
    btn.classList.add("flash");
    setTimeout(function(){
        btn.classList.remove("flash");
    },300);
}
function levelUp(){
    userSeq=[];
    level++;
    h2.innerText=`Level ${level}`;
    let randIdx=Math.floor(Math.random()*4);
    let randCol=btns[randIdx];
    gameSeq.push(randCol);
    console.log(gameSeq);
    let randBtn=document.querySelector(`.${randCol}`);
    btnFlash(randBtn);
}
function checkAns(idx){
    if(userSeq[idx]==gameSeq[idx]){
        if(userSeq.length==gameSeq.length){
            setTimeout(levelUp,1000);
        }
    }
    else{
        h2.innerHTML=`Game Over! Your score: ${level}.<br> Press any key to start again`;
        document.querySelector("body").style.backgroundColor='red';
        setTimeout(function(){
            document.querySelector("body").style.backgroundColor='white';
        },150);
        reset();
    }
}

function btnPress(){
    let btn=this;
    userSeq.push(btn.id);
    // console.log(userSeq);
    btnFlash(btn);
    checkAns(userSeq.length-1);
}
let allBtns=document.querySelectorAll(".btn");
for(btn of allBtns){
    btn.addEventListener("click",btnPress);
}
function reset(){
    gameSeq=[];
    userSeq=[];
    started=false;
    level=0;
}