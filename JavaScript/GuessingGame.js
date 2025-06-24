let range=prompt("Enter range upto you can guess a number: ");
let random=Math.floor(Math.random()*range)+1;
let guess=prompt("Guess a number: ");
while(true){
    if(guess=="quit"){
        console.log("You quit the game!");
        break;
    }
    else if(guess==random){
        console.log("You correctly guessed the number that is "+random);
        break;
    }
    else if(guess<random){
        guess=prompt("Guess a higher one: ");
    }
    else{
        guess=prompt("Guess a lower one: ");
    }
}