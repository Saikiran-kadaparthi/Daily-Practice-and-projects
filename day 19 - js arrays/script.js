//push

let arr = [1,2,3,4,5,6];
arr.push(5);
arr.push(55);
console.log(arr);

let arr1 = [1,2,3,4,5,6,7,8,9,10];
let arr2 = arr1.push(12);
console.log(arr1);
console.log(arr2);

let arr3 = [1,2,3,4,5,6];
let arr3copy = [...arr3, 50];
console.log(arr3);
console.log(arr3copy);

//pop()

let arr4 = [1,2,3,4,5];
arr4.pop();
console.log(arr4);

arr4.pop();
console.log(arr4);

//unshift

let arr5 = ["hello1", "World1"];
arr5.unshift("Hello2", "world2");
console.log(arr5);

arr5.unshift("Hello3", "world3");
console.log(arr5);


//shift

let arr6 = [1,5,10,15,20];
arr6.shift();

console.log(arr6);


//slice

let arr7 = [1,2,3,4,5];
let arr7copy = arr7.slice(0, 3);

console.log(arr7);
console.log(arr7copy);

//indexOf

let arr8 = [1,2,3,2,4,5,2,3,4,5,3,1,6];
console.log("array8 = ", arr8)
console.log("first 2 is at the index",arr8.indexOf(2));
console.log("first 5 is at the index",arr8.indexOf(5));

//lastIndexOf

console.log("Last 2 is at the index",arr8.lastIndexOf(2));
console.log("Last 5 is at the index",arr8.lastIndexOf(5));


//includes

let arr9 = [1,2,3,4,5,6,7,8,9,0];
console.log("array 9 = ", arr9);
console.log("includes 5 = ", arr9.includes(5));
console.log("includes 7 = ", arr9.includes(7));
console.log("includes 6 = ", arr9.includes(6));
console.log("includes 16 = ", arr9.includes(16));
console.log("includes 18 = ", arr9.includes(18));

//find

let arr10 = [2,4,6,8,10,12,15,16];
console.log("array 10 = ",arr10)
console.log("first number greater than 10 is = ", arr10.find(el => el > 10));
console.log("first number greater than 15 is = ", arr10.find(el => el > 15));

//findIndex

console.log("first number greater than 15 is Index = ", arr10.findIndex(el => el > 10));
console.log("first number greater than 15 is at the Index = ", arr10.findIndex(el => el > 15));


//sort
let arr11 = [2,1,5,7,7,1,4,6,8,9];
arr11.sort();
console.log(arr11);

//reverse
arr11.reverse();
console.log(arr11);