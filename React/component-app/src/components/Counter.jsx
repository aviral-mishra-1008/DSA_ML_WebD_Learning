import {useState} from "react";

function Counter(){
    const [count,setCount] = useState(0);  //Basically we specify the initial value of the state (variable) in useState(val) then it returns 2 things in an array: variable initialized to given value and a function to set the value of varible
    //Now using these we can actually define the increament operation function which can be used on click with buttons!!

    //I initialize another variable:
    const [step, setStep] = useState(1);

    const increament = ()=>{
        setCount(count+step);
    }

    const increamentTwice = ()=>{
        setCount(count+1);
        setCount(count+1);
    }

    const increamentTwice_Updater = ()=>{
        setCount(prevCount => prevCount+1); //its a convention to use prevSTATEVARIABLENAME
        setCount(prevCount => prevCount+1); //always define with the arrow function!
    }

    return (
        <div className="Counter">
            <h1> Counter </h1>
            <input
                type="number"
                value={step}
                onChange={(e)=>{
                    setStep(parseInt(e.target.value));  //Basically this thing is taking in the element i.e input into the onChange function as variable e, then e.target.value is basically, e.target is the wrapper and it has the value field which we have defined a line above it as value={step}
                }}
            />
            <button onClick={() => increament()}>
                Current Count is: {count}
            </button>

            <button onClick={() => increamentTwice_Updater()}>
                +2
            </button>
        </div>
    )
}

export default Counter;
// State updates are always Asynchronous, so when we do the state updates we actually do batched updates, where React performs the updates multiple state together in a batch
// So, we define something called an Updater Function which is passed along to update a component
// Look at the update twice method, we call setCount(count+1) twice but we expect that first it updates as count+1 then count+1+1 ie say count is 0 so 0+1 then 1+1
//But React has async updates so in this case both the count+1 are supplied same value of count
// thus its like 0+1, 0+1 which increments by 1 only
//Thus, multiple state updates need updater function for accurate results