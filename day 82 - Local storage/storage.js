let name1 = localStorage.getItem("playerName");

if (!name1) 
{
    name1 = prompt("hi what’s your name? : ");
    if (name1) 
    {
        localStorage.setItem("playerName", name1); 
    }
}

document.getElementById("greeting").textContent = `welcome, ${name1}!!!`;
console.log("Locally stored name :: ", localStorage.getItem("playerName"));
// localStorage.removeItem("playerName");
