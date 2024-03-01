/* The below program still has many improvments to be made and this is a project in build i will work on it and deploy it by tomorrow only*/


let boxes = document.querySelectorAll(".box");
let reset_btn = document.querySelectorAll(".btn");

let turn = "O";
let playerO = [];
let playerX = [];

boxes.forEach((box, index) => {
    box.addEventListener("click", () => {
        if (turn === "O") {
            box.innerText = "O";
            playerO.push(index);
            turn = "X";
            check_win("O", playerO);
        } else {
            box.innerText = "X";
            playerX.push(index);
            turn = "O";
            check_win("X", playerX);
        }
    });
});

const win_condition = [
    [0, 1, 2],
    [0, 3, 6],
    [0, 4, 8],
    [1, 4, 7],
    [2, 5, 8],
    [2, 4, 6],
    [3, 4, 5],
    [6, 7, 8]
];

const check_win = (player, playermoves) => {
    console.log("Checking win");
    
    for (let i = 0; i < win_condition.length; i++) {
        let condition = win_condition[i];
        let win = true;

        for (let j = 0; j < condition.length; j++) {
            let index = condition[j];

            if (!playermoves.includes(index)) {
                win = false;
                break;
            }
        }

        if (win) {
            console.log(`Player ${player} wins!`);
            return true; 
        }
    }

    return false; 
};
