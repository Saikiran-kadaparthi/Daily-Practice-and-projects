console.log("hello world!");


//length - gives length of string;
let s1 = "Hello world!";
console.log(s1, " -  length =", s1.length );
s1 = "Hello";
console.log(s1, " -  length =", s1.length );


//toUpperCase()- Makes everything uppercase
let s2 = "hello Bee";
console.log(s2, " to uppercase : ", s2.toUpperCase());
s2 = "Lowercase";
console.log(s2, " to uppercase : ", s2.toUpperCase());


//.toLowerCase() -  Makes everything lowercase

s2 = "UPPERCASE";
console.log(s2, " to lowercase : ", s2.toLowerCase());

//.charAt(n) - character at position n.
let s3 = "HELLOBEE";
console.log("Char at index 3 = ", s3.charAt(3));
console.log("Char at index 2 = ", s3.charAt(2));
console.log("Char at index 4 = ", s3.charAt(4));

//.indexOf("sub") - finds index of substring;
let s4 = "Bee109"
console.log("e at index = ", s4.indexOf("e"));
console.log("1 at index = ", s4.indexOf("1"));
console.log("9 at index = ", s4.indexOf("9"));
console.log("f at index = ", s4.indexOf("f"));


//.lastIndexOf("sub") - Last occurance of a substring
let s5 = "Hello";
console.log("l last index : ", s5.lastIndexOf("l"));

//.includes("sub") - checks if a substring exists
let s6 = "Welcome!";
console.log("Wel exists in ", s6, ":", s6.includes("Wel"));
console.log("Well exists in ", s6, ":", s6.includes("Well"));
console.log("come exists in ", s6, ":", s6.includes("come"));
console.log("Come exists in ", s6, ":", s6.includes("Come"));

//.slice(start, end) - extract part of string
let s7 = "JavaScript";
let first =  s7.slice(0,4);
let second = s7.slice(4,10);

console.log("JavaScript : ", first, "+", second);

//.replace(old,new) - replace first match;
let s8 = "Hello";
console.log(s8, "=", s8.replace("H","Y"));
console.log(s8, "=", s8.replace("l","Y"));
s8 = "Come";
console.log(s8, "=", s8.replace("C","S"));


//.replaceAll(old,new) - replaces all matches;
let s9 = "Apple";
console.log(s9, ":", s9.replaceAll("p","b"));
s9 = "Hello";
console.log(s9, "=", s9.replaceAll("l","Y"));

//.trim() - removes spaces from both ends
let s10 = "  APPLE   ";
let s10trim = s10.trim();
console.log(s10, "=", s10.length, " | ", s10.trim(), "=", s10trim.length);