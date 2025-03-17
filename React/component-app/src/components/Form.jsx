import {useState} from "react";

function Form(){
    //using useState
    const [formData, setFormData] = useState({
        text: "",
        checkbox: false,
        radio: '',
        select: ''
    });

    const handleChange = (e) => {
        //means e is event
        const {name, value, type, checked} = e.target;
        setFormData({
            ...formData,
            [name]: type === 'checkbox' ? checked : value
        })
    };

    return (
        <div className="form">
            <h1> Contact Form </h1>
            <form>
                {/* TEXT INPUT*/}
                <div className="form-field">
                    <label>Name</label>
                    <input
                        type="text"
                        name="text"
                        value={formData.text}
                        onChange={handleChange}
                    />
                </div>

                {/* Checkbox */}
                    <div className="form-field">
                        <label> Checkbox </label>
                            <input
                               type="checkbox"
                               name="checkbox"
                               checked={formData.checkbox}
                               onChange={handleChange}>
                            </input>
                    </div>

                {/*Radio Buttons*/}
                <div className="form-field">
                    <label> Radio:
                        <input
                            type="radio"
                            name="radio"
                            value = "Option1"
                            checked={formData.radio === 'Option1'}
                            onChange={handleChange}>
                        </input>
                        Option1
                    </label>

                    <label>
                        <input
                            type="radio"
                            name="radio"
                            value = "Option2"
                            checked={formData.radio === "Option2"}
                            onChange={handleChange}>
                        </input>
                        Option2
                    </label>
                </div>

                {/*Select Option*/}
                <div className="form-field">
                    <label> Select: </label>
                    <select
                        name="select"
                        value={formData.select}
                        onChange={handleChange}
                    >
                        <option value=""> -- Choose an Option -- </option>
                        <option value="option1"> option1 </option>
                        <option value="option2"> option2 </option>
                        <option value="option2"> option3 </option>
                    </select>

                    <div className="form-data">
                        <h3> Form Data </h3>
                        <p><strong>Text:</strong> {formData.text || 'N/A'}</p>
                        <p><strong>Checkbox:</strong> {formData.checkbox ? "checked" : "unchecked"}</p>
                        <p><strong>Radio:</strong> {formData.radio || 'N/A'}</p>
                        <p><strong>Select:</strong> {formData.select || 'N/A'}</p>


                    </div>
                </div>

            </form>
        </div>
    )
}
export default Form;