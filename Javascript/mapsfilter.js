//filter method is used to filter elements based on desired condition/ test

//filter() returns a new array with all elements that passes a test 


//syntax:
/*
let newArray = oldArray.filter((currentValue, index, array){
    //code test
    //must return true or false
};)
*/

//Example
let Students = [
    {id: "001", name:"Aviral", sports:"Basketball"},
    {id: "002", name:"Ayushman", sports:"Cricket"},
    {id: "003", name:"Anshul", sports: "Chess"}
];

// Students.filter((curValue, index, array)=>{
//     console.log("Yes I am in!");
// })

const newArray = Students.filter((curvalue)=>{
    if(curvalue.id%2==0) return true;
    else return false
})

console.log("here's a new Array")
console.log(newArray)


// UNDERSTANDING MAPS

//creates a new array with results of calling a particular function over all elements of an array 
/*
let newArr = oldArr.map((current_value, Index, Array)=>{

})
*/

const newArr = Students
    .filter((currValue)=>{
           currValue.sports === 'Cricket';
                  })
    .map((currValue)=>{
           return `<li> ${currValue.name} </li>`;  //Remember using this: `<li> smtjrjen <\li>`  //this returns a list element!
        })

const div = document.getElementById('container');
div.innerHTML = `<ul>${newArr.join('')}</ul>`//this makes the array/ list into a string!