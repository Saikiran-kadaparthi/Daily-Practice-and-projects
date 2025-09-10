let boxes = document.querySelectorAll(".box");
let reset = document.querySelector(".reset");
let Turn_temp = true;

const win = [
    [0,1,2],
    [3,4,5],
    [6,7,8],
    [0,3,6],
    [1,4,7],
    [2,5,8],
    [0,4,8],
    [6,4,2]
];

boxes.forEach((box) =>{
    box.addEventListener("click", () => {
    if(Turn_temp === true){
        box.innerText= "X";
        Turn_temp = false;
        box.disabled = true;
    }
    else{
        box.innerText = "O";
        Turn_temp = true;
        box.disabled = true;

    }
    winner();
    });
});

const winner = () => {
    for (patterns of win)
    {
        let one = boxes[patterns[0]].innerHTML;
        let two = boxes[patterns[1]].innerHTML;
        let three = boxes[patterns[2]].innerHTML;
        
        if (one != "" && two != "" && three != ""){
        if(one === two && two === three)
        {
            console.log("Win", one);
        }
    }
    }
}