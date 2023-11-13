//NOW THAT THE BOXES ARE READY LET'S LEARN DOMS 
//DOM MEANS DOCUMENT OBJECT MODEL

//Basically we're trying to learn the manipulation of the html content 


//Finding the html element

//document is the first node of the DOM tree
// document.getElementById() //this enables us to access any id based element


//for eg to get the content of the body we can get it by:
// const myBody = document.body;
// console.log(myBody);
// console.log(typeof(myBody));

// //Accessing by id
// const box2 = document.getElementById('box-2');
// console.log(box2);

// //Also we can access by tag name

// const divs = document.getElementsByTagName('div') //you can name any tag and since there are more than one div, so multiple divs are loaded!
// console.log(divs)

// //Classname() can be used to get the element by classname
// //Now let's understand queryselector

// const random = document.querySelector('.container.random')
// console.log(random)

//NOW LET'S LEARN TO MODIFY ELEMENTS
//Let's say we access box-1 and want to edit the inner-html! we can do so!

const box1 = document.getElementById('box-1')
// box1.innerHTML = "<p> This is a really nice way to interact </p>";
//you can use any html code there!

//you can change the attribute of the html code
box1.style.backgroundColor = '#ABC123'   //THIS CAMELCASE actually enables us to edit attribute, so style.background-color becomes style.backgrounColor ....edits css basically

//You can also play with classes 
box1.classList.add('round-border') //this adds the round border class to the box1
//same can be done using a for-loop
const boxes = document.getElementsByClassName('box')
for(let i = 0; i<boxes.length; i++){
    boxes[i].classList.add('round-border');
}

//we can also remove things
//using, box1.classList.remove('class-name')
//toggle does add when its removed and removes if class is added


//Creating the elements
const newPara = document.createElement('p');
newPara.innerText = "This is a brand new box!"; //adds only text

//now we need to attach the paragraph with one of DOM NODE
//access the node, container ko access krke chalo waha daal dete hai!

const container = document.getElementById('container');
container.appendChild(newPara);
newPara.classList.add('box');
newPara.classList.add('round-border');
