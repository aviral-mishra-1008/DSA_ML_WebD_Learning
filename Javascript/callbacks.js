//when we pass a function inside a function as parameter we call is callback function

//function
function greet(name, callback){  //so callback is basically a function 
    console.log('Hi' + ' ' + name);
    callback();
} 

//callback function
function callMe(){
    console.log('I am callbacking today');
}

//passing 
greet('Aviral', callMe);


//ANOTHER WAY
const calculate = (a,b, operation) => {
    return operation(operation(a,b));
}

const result = calculate(3,4, function(a,b){
    return a+b;
}) //so basically, calculate function ke andar we've defined the operation function!


console.log(result);

//another way!!
const subtraction = (a,b) => a-b;
const result2 = calculate(8,3, subtraction);

//array callback function ##IMPORTANT
//find() : returns first value of array that passes a test

//eg
const a = [1,2,3,4,45,-2,-1,3,2,1]

const firstNegative = num=> {
    return num<0;       //this is a test that tests a negative number
}


const result3 = a.find(firstNegative);
//so basically it tests and runs it iteratively, test is smth we define

//Find index method returns the index of the first occurence of the value that passes the test 
//BOTH FIND INDEX AND FIND() expect a function that returns a boolean value

//FOR EACH IS OFTEN USED
// WE USE THIS TO PERFORM A FUNCTION ON EACH ELEMENT OF THE ARRAY

a.forEach((num) => {
    console.log('array num', num);
}); //Mind the brackets!

//so basically it is like array.forEach((parameters)=>{function conditions}) ) where in the function iterates over each element of the array

//Other functions
//map() is used to create a new array with results of calling a function for every array element
// filter() returns a new array filte