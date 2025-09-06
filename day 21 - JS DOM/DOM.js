// const head = document.getElementById("title");
// const btn1 = document.getElementById("btn1");
// const subhead = document.getElementById("subtitle");
// const btn2 = document.getElementById("btn2");
// const nameInput = document.getElementById("nameInput");

// btn1.addEventListener("click", () => {
//     // head.textContent = "you clicked";
//     // subhead.textContent = "Modified Sub text by js";
//     // head.style.color = "red";
//     // subhead.style.color = "red";
// });

// btn2.addEventListener("click", () => {
//     // head.textContent = "HI";
//     // subhead.textContent = "BACK";
//     // head.style.color = "black";
//     // subhead.style.color = "black";
//     // head.classList.toggle("big1");
//     const value = nameInput.value;
//     head.textContent = "hello," + value;



// });

// nameInput.addEventListener("input", () => {
//     head.textContent = "Hello, " + nameInput.value;
// })


// const text = document.getElementById("text1");
// const btn = document.getElementById("btn1");
// const input = document.getElementById("input");
// btn.addEventListener("click", () =>{
//     const value = input.value;
//     text.textContent = value;
// });


const input = document.getElementById("iteminput");
const add = document.getElementById("additem");
const list = document.getElementById("mylist");

add.addEventListener("click", () => {
    const li = document.createElement("li");
    li.textContent = input.value;
    list.appendChild(li);
    input.value = "";

});






