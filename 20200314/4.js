const abc = "abcdefghij";

function func(len, str){
  if(len === str.length){
    console.log(str);
    return;
  }
  var usedMax = str.split("").sort().reverse()[0];
  var index = abc.split("").findIndex(c => c === usedMax);

  for(var i=0; i <= index+1 && i < len; i++){
    func(len, str+abc[i]);
  }
}

function Main(input) {
	input = input.split("\n");
	tmp = input[1].split(" ");
	var k = parseInt(input[0], 10);
        func(k, "a");
}
Main(require("fs").readFileSync("/dev/stdin", "utf8"));
