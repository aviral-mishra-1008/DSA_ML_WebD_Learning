//one of the best ways to handle async operation in the js
//introduced in 2015
//used to find out whether an async func got executed properly or not


function getCheese(){
    setTimeout(()=>{
        const cheese = "🧀";
        //we can't return cheese here, but we can send a promise that the cheese will be there
    }, 2000);

}

// we use a promise pbject constructor to make promise
//eg

// let promise = new Promise(function(resolve, reject){
//     //do smth
// }); //that's how we make a promise

//Understanding the function play

const ticket = new Promise(function(reolve, reject){
    const isBoarded = false;
    if(isBoarded){
        resolve('You are now in the flight')
    } else{
        reject('Your flight has been canceled')
    }
});

//promise has following states: i) Pending (awaiting response) ii)Fulfilled (revoled promise)  iii) Rejected (removed promise)

//methods to use promise
//then() method  -> Used with the callback when the promise is successfully fulfilled or resolved
//catch() method -> Used with the callback when the promise is rejected or if error occurs
//finally() method -> This is executed when the promise has either been resolved or rejected 

ticket
    .then((data)=>{
        console.log('Welcome to flight ', data)
    })  // never place a semicolon here its one line only 
    .catch((data)=>{
        console.log('Oh NO! ',data);
    }) //THIS DATA THINGY IS BASICALLY WHATEVER WE PLACE IN THE RESOLVE(___DATA___) AND REJECT(___DATA____)
    .finally(()=>{
        console.log('Mei to har case mei chalunga!');
    });

    //THE FORMAT IS DIFFERENT FOR ASYNC CODE 

    