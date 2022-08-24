const prompt = require("prompt-sync")();

console.log("Think of a number between 1 and 1000");

let top = 1000;
let bottom = 0;

let count = 0;
wl: while (true) {
  let guess = Math.round((top + bottom) / 2);
  count += 1;

  console.log(`My guess is ${guess}`);
  let correct = prompt(
    "Was I correct? (h if your number is higher, l if its lower, and c if it is correct)\n"
  );

  switch (correct) {
    case "h":
      bottom = guess;
      break;
    case "l":
      top = guess;
      break;
    case "c":
      console.log(`I guessed your number in ${count} guesses!`);
      break wl;
    default:
      console.log("I didn't understand, please try again!");
      count -= 1;
  }
}
