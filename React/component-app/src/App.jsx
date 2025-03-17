import './App.css'
import Header from "./components/Header.jsx";
import About from "./components/About.jsx";
import ProjectList from "./components/ProjectList.jsx";
import Contact from "./components/Contact.jsx";
import Footer from "./components/Footer.jsx";
import PropTest from "./components/PropTest.jsx";
import Counter from "./components/Counter.jsx";
import MultiCounter from "./components/MultiCounter.jsx";
import Form from "./components/Form.jsx";
import ColorPicker from "./components/ColorPicker.jsx";

function App() {
  const hobby1 = ["Singing", "Basketball"];
  const OnHobbyClick = (hobby)=>{
      alert(`You have clicked on ${hobby}!!`);
  };

  const AyushmanProfile = {
      name: "Ayushman",
      age: "20",
      isMember: false,
      hobbies: ["Gaming","Bathing"],
      onHobbyClick: OnHobbyClick
  };

  return (
    <>
        <div className="App">
            <Header />
            <About name="Aviral"/>
            <ProjectList />
            <Contact />
            <h1> Profile Card </h1>
            <PropTest name="Aviral" age="20" isMember={true} hobbies={hobby1} onHobbyClick={OnHobbyClick}/>
            {/*Another way to send data is defined all the props as an object and send it using the spread feature*/}
            {/*This is how spread works three dot then object name*/}
            {/*Useful to send data received from API directly to the child component*/}
            <PropTest {...AyushmanProfile}/>
            {/*<Counter/>*/}
            {/*<MultiCounter/>*/}
            <section className="Form_Section">
                <Form/>
            </section>

            <section className="colorPicker">
                <ColorPicker/>
            </section>
            <Footer />
        </div>
    </>
  )
}

export default App
//always pass these things like number, boolean and all in the {}