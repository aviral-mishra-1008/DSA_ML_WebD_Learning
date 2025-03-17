import {useState} from "react";

function ColorPicker() {
    const [backgroundColor, setColor] = useState('#FFFFFF');

    const colors = ["#ff0000","#000000","#1cccc4","#faac33"];

    const handleColorChange = (color) => {
        setColor(color);
    }

    return (
        <div style={{backgroundColor}} className="colorPicker">
            <h1> Colors Picker </h1>
            <div className="colors-palette">
                {colors.map((color, index) => (
                    <div key={index}
                         className="color-box"
                         onClick={()=>handleColorChange(color)}
                         style={{backgroundColor: color}}
                    > </div>
                ))}

                <div className='custom-color'>
                    <input
                        type="color"
                        value={backgroundColor}
                        onChange={(e)=>handleColorChange(e.target.value)}
                    > </input>
                </div>
            </div>
        </div>
    )
}

export default ColorPicker;