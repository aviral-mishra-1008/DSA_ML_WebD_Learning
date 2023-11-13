function getCheese(){
    return new Promise((resolve, reject)=>{
        setTimeout(()=>{
            const cheese = "🧀";
            resolve(cheese);
            // reject("Cheese not available!");
        }, 2000)
    });
}


function getDough(cheese){
    return new Promise((resolve, reject)=>{
        setTimeout(()=>{
            const dough = cheese + "🍩";
            resolve(dough);
            // reject("Cheese not available!");
        }, 2000)
    });
}


function getPizza(dough){
    return new Promise((resolve, reject)=>{
        setTimeout(()=>{
            const pizza = dough + "🍕";
            resolve(pizza);
            // reject("Cheese not available!");
        }, 2000)
    });
}


// getCheese().then((cheese)=>{
//     console.log('Here is the cheese! ', cheese);
//     return getDough(cheese);
// })
//   .then((dough)=>{
//     console.log('here is the dough: ', dough);
//     return getPizza(dough);  
// })
//   .then((pizza)=>{
//     console.log('here is the freshly baked pizza: ', pizza);
//   })
//     .catch((data)=>{
//         console.log('ERROR OCCURED!')
//     })
//        .finally(()=>{
//         console.log('Visit again!');
//        });



//__________THERE'S AN EVEN BETTER METHOD___________

//async

async function orderPizza(){
    try{
    const cheese = await getCheese(); //where you need to put async code you need to write await and putting that here will wait till you get cheese and not the promise
    const dough = await getDough(cheese);
    const pizza = await getPizza(dough);

    console.log("Here is your freshly baked pizza: ", pizza);
   } 
   catch(err){
    console.log("Following error occured: ", err) //err is basically what reject returns!
   }
    //That's how you make life easy and so does asyncs!

}

//prefer using the try catch block with async await!


orderPizza()