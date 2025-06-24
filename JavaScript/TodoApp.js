let todo=[];
let req=prompt("Please enter your request: ");
while(true){
    if(req=="quit"){
        console.log("Quitting the app");
        break;
    }
    else if(req=="list"){
        console.log("-----------");
        let i=0;
        for(task of todo){
            console.log(i,task);
            i++;
        }
        console.log("-----------");
    }
    else if(req=="add"){
        let task=prompt("Enter task which want to add: ");
        todo.push(task);
    }
    else if(req=="delete"){
        let index=prompt("Enter the task index");
        console.log(todo[index]+" is deleted");
        todo.splice(index,1);
      
    }
    else{
        console.log("Not a valid request");
    }
    req=prompt("Please enter your request");
}