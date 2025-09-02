//even or odd

function check(i1) {
    if (i1 % 2 === 0) {
        console.log("Given number is an Even number");
    } else {
        console.log("Given number is an Odd number!");
    }
}

let n = prompt("Enter a number: ");
check(n);
