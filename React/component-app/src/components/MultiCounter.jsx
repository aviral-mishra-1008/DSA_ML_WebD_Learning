// So, we can store arrays, objects and more things in the state
// More complex data can be stored!
//

import {useState} from "react";

function MultiCounter(){
    const [counters, setCounters] = useState([{id:1, value:0}]);
    //An array of counters, basically each counter is an object with two things: id and value!

    const addCounters = () => {
      setCounters([...counters,{id:counters.length+1,value:0}]);
      //updating the array with a new array by spreading all existing element with ...counters then add third one
    };

    const incrementCounter = (id) => {
       setCounters(counters.map(counter =>
            counter.id === id ? {...counter,value:counter.value+1} : counter
        ))
    }
    return (
        <div className="MultiCounter">
            <h1> Add Your Own Counter </h1>
            <button onClick={addCounters}>Add Counter</button>
            <ul>
                {counters.map(counter=>(
                    <li key={counter.id}>
                        Counter {counter.id}: {counter.value}
                        <button onClick={()=>incrementCounter(counter.id)}> increment </button>
                    </li>
                ))}
            </ul>
        </div>
    )
}

export default MultiCounter;