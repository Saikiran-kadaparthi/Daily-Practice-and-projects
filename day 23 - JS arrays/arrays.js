let animals1 = ["chick", "chicken", "goat", "chick", "sheep", "chick"]
let count = 0;

for(const temp of animals1)
{
    if(temp === "chick")
    {
        ++count;
    }

}

console.log("Number of times chick appeared in the array : ", count);