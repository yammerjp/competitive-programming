

function Main(input) {
	input = input.split("\n");
	tmp = input[0];
  if( tmp[2] === tmp[3] && tmp[4] === tmp[5] ){
    console.log("Yes");
  } else {
    console.log("No");
  }
}
Main(require("fs").readFileSync("/dev/stdin", "utf8"));
