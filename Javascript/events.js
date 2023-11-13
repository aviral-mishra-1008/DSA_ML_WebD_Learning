//Events allow us to write JavaScript code that handles the events
//Events examples:
//PageLoad
//Hover-over
//Click
//Mouse
//Form Input
//etc

/*
By Using :
Event Handler
Event Listner 
We can handle and use event cases
*/


//Learn Using Event Handler
//Javascript provides event handlers

//These attributes include:
/*
1. onclick //trick is just write on and then look at some general examples!

*/

let array = []
function myFunc1(){
    const box1 = document.getElementById('box-1');
    box1.style.backgroundColor = "red";
    array.push('box-1')
}

function myFunc2(){
    const box2 = document.getElementById('box-2');
    box2.style.backgroundColor = "red";
    array.push('box-2')
}

function myFunc3(){
    const box3 = document.getElementById('box-3');
    box3.style.backgroundColor = "red";
    array.push('box-3')
}

function myFunc4(){
    
    for(let i=array.length-1; i>=0; i--){
        console.log(array[i]);
        setTimeout(()=>{
            let ele = array[i];
            let box = document.getElementById(ele);
            box.style.backgroundColor = "White"
            array.pop();
        },1000 *(array.length-i));
    }
    console.log(array.length);
}

// EVENT LISTENERS 

//Firstly we'll try to capture the element we wish to apply event to 

const box1 = document.getElementById('box-1');
box1.addEventListener('click', ()=>{   //here usually there's no need to write on, mosty learn as you use, here you don't need to write much code 
    console.log('clicked');
})

const cont = document.getElementById('container');
box1.addEventListener('click', ()=>{   //here usually there's no need to write on, mosty learn as you use, here you don't need to write much code 
    console.log('clicked on container!');
}, true)

//so basically the event when it happens, the eventlistener is able to detect and thus exescute the function specified. 
//We don't actually need to place this explicitly in the HTML file rather it can be placed in the js file itself
//Mostly we try to use the eventlistener method, you can also actually use the event object, it will have all attributes of the event, so you can get all about location and other stuff about the event 
//Using ('click',(e)) so e is the event, e.clientX .... e.clientY
//When using keyboard input, you can use 'keydown' instead of 'keyclicked' to take all keys input from your keyboard
//we can always search for focus event

//Bubling and Capture

/* 1. Bubling event involvess the fact that the event is first taken by the innermost child, then its successor and so....  
   Say, there's a body then inside that we have a child component called container inside that we have the child called box-1
   So as you can see, first the clicked gets executed then the outer parent : container get's executed, this is bubling


   2. In Capture event 
   In capture event, the exact opposite occurs, to change the execution to capture, by passing the parameter, true in third place in events!
*/
