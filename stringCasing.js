// Prompt to store name in variable name

var name = prompt("What is your name?");

// To slice the first letter to a variable firstLetter

var firstLetter = name.slice(0,1);

//Turning the first letter to upper case

firstLetter = firstLetter.toUpperCase();

// Seperating the rest of the name to another variable restOfIt

var restOfIt = name.slice(1,name.length);

// Creating an alert and concatenating firstLetter and restOfIt

alert("Hello " + firstLetter + restOfIt.toLowerCase() + "!" );