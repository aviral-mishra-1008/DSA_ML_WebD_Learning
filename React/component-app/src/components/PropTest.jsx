import PropTypes from "prop-types";
import About from "./About.jsx";

function PropTest({name,age,isMember, hobbies, onHobbyClick}){
    return (
        <div className="profile-card">
            <h3>
                Name: {name}
                <br/>
                Age: {age}
                <br/>
                Status: {isMember ? "Active" : "Inactive"}
                <br/>
                Hobbies:
                <ul>
                    {
                        hobbies.map((hobby, index) => {
                            return <li key={index} onClick={()=>onHobbyClick(hobby)}> {hobby} </li>;
                        })
                    }
                </ul>

            </h3>
        </div>
    );
}

PropTest.propTypes = {
    name: PropTypes.string,
    age: PropTypes.number,
    isMember: PropTypes.bool.isRequired,
};
export default PropTest;

// Important Learnings Are:
// -> The name of all react component files must start with a capital letter as this is convention used to distinguish between html tags and names of React Component
// -> The props are used to transfer data between components, majorly transfer the data from a parent component to the child component
// -> Props are read-only and inherited to the child nodes
// -> They are very useful because they help achieve loose coupling, now consider a case where we need an API call to some server, so we fetch data add as prop and send to
// -> The component for rendering, all call logic in one place and all rendering logic in another and this also makes the component not specific to a single api call rather
// -> Reusable
// -> If APP.JSX called PropTest in itself <PropTest/> so, the App.jsx is parent and PropTest.jsx is child and chaining happens here, also only parent can decide what data to send
// -> Boolean values are used for decision-making like we did in the Status Section!
// -> Status: {props.isMember ? "Active" : "Inactive"}, so this is a not so good way of using the JS
// -> In JS we can use Destructuring where-in  instead of props in function, we pass {__list_of_parameter_variables__} as used here, and using this we can actually write better code
// -> We can add validation to Props just by using the PropTypes function
// -> We can use the propTypes just like we have Pydantic in Python