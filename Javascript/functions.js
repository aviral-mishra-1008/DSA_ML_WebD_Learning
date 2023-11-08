//format samajh lo pehle
function sumOfTwo(a,b){
    const sum = a+b;
    console.log("Result: ",a+b);
}

//You can define fucntion anywhere and call anywhere not like c++ ki use se pehle define krna hai program mei!!

sumOfTwo(63,19);


//Another fucntionality of the js is that we can add entire function into a variable
const Var = function name(a){
    for(let i = 0; i<a; i++){
        console.log(i);
    }
}


//You can form nested function, which is function inside a function, so basically define function within a function within a function, everything above return statement works!

function addSq(a, b){
    function sq(e){
        return e**2;
    }
    c = sq(a);
    d = sq(b);

    return c+d;
}

console.log(addSq(3,4));