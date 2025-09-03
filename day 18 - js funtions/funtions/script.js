//a function that takes a number and returns its square.
/*function square(n)
{
    let s = userinput*userinput;
    return s;
}

let userinput = prompt("Enter a number : ");
console.log("sqaure of", userinput, " : ", square(userinput));*/







//a function that takes two numbers and returns the larger one.
/*function largest (n1, n2){
    if(n1 > n2)
    {
        console.log("Largest number : ", n1);
    }
    else if(n1 == n2)
    {
        console.log("Both numbers are equal!");
    }
    else
    {
        console.log("Largest number : ", n2);
    }
}

let n1 = prompt("Enter first number : ");
let n2 = prompt("Enter second number : ");
largest(n1, n2);*/









//a function that checks if a number is positive, negative, or zero.
/*function int1(n)
{
    if(n > 0)
    {
        console.log("Given number is a Positive number!");
    }
    else if(n < 0)
    {
        console.log("Given number is a Negative number!");
    }
    else
    {
        console.log("Given number is Zero!")
    }
}

n = prompt("Enter a number : ");

int1(n)*/









//a function that takes a string and returns its length.

/*function len(s)
{
    o = `Lenght of the given string is ${s.length}`;
    console.log(o);
}

s = prompt("Enter a string!");

len(s)*/










//funtions with arrays/strings

//a function that returns the first element of an array.
/*function f_arr(arr)
{
    console.log("First Element of the array is : ", arr[0]);
}

let Arr = [];

let size = prompt("Give size of the array");

for(let i=1;i<=size;i++ )
{
    let temp = prompt("Enter element " + i);
    Arr.push(temp);

}

f_arr(Arr);*/


//a function that returns the last element of an array.


//factorial of a number.
function fact(n)
{
    let temp =1 ;
    if(n < 0)
    {
        temp = "Undefined";
    }
    else
    {
        for(let i = 2; i <= n; i++)
        {
            temp = temp * i;
        }
    }

    return temp;
}

let m = prompt("Enter a number : ");
console.log("factorial of", m, ":", fact(m));