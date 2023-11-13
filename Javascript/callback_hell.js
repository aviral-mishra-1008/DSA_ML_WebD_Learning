//Let's understand asynchronous function
//so the code in which we know in which order the lines of code will be executed is general code and called synchronous code
//the code that runs at a lag parallel to other codeset is called asynchronous code and it executes after a time lag defined 


///setTimeout Function is called the same
//setTimeout(function, miliseconds);


//Thus, it is executed after x miliseconds
console.log("Hellow dusht");
setTimeout(function (){
    console.log("This will execute later")
}, 3000);


//mostly in websites some animation comes then content comes and then somewhere there's a waittime and that's where the this function finds usecase


//Callback
//suppose we are on a website and enter details and then a laoder runs and then a confirmation comes, and we are able to access our dashboard
//basically a call goes to backend and the data is brought to frontend




function getCheese(callback){
    console.log("Going to get some cheese!")
    setTimeout(()=> {
        const cheese = "🧀";
        callback(cheese);
    }, 4000);
};


function makeDough(cheese, callback){  //callback could be any name not only callback 
    setTimeout(()=>{
        const dough = cheese + "🍩";
        callback(dough);
    }
    
    ,2000);
}

function bakePizza(dough, callback){
    console.log("Baking your pizza!")
    setTimeout(() => {
        const pizza  = dough + "🍕";
        callback(pizza);
    }, 2000);
}

getCheese((cheese)=>{
    makeDough(cheese, (dough)=>{
        bakePizza(dough, (pizza)=>{
            console.log("Here is your pizza: ", pizza);
        });
    });
});


//So, we called a function within a function and then another callback
//This is not desirable quality as it gets hard to debug, thus this is called callback hell 
//We have promises to change this status quo




//let's say want to make pizza and for that we need dough=> and to make dough we need cheese

