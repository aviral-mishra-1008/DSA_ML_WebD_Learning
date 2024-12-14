/*  Enums are used to define the values that are meant to stay constant throughout the
program, like custom datastructure so syntax us as given below:
enum Name{
    VARIABLES(args**)
    Constructor (for the enum to initialize some value for the variable)
    **optional** getter methods
}
*/

enum Color{

    //VARIABLES
    RED("red"), GREEN("green"), BLUE("blue");
    
    //Constructor
    private String value;
    Color(String value){
        this.value = value;
    }

    //Getter methods
    public String getValue(){
        return value;
    }

    /*
    
    We can refer to the enums like this: enumName.VariableName i.e Color.RED
    however if we want to get the value of the enum, we define a private member variable and then 
    we define the value as private and define setter and getter methods 

     */
}

public class Main{
    public static void main(String[] args){
        Color c1 = Color.RED; //declare an enum variable and NAME.VARIABLE is how we define it
        System.out.println("Red Enum name: "+c1.name()); //.name gives RED which is variable name
        System.out.println("Red enum val: "+c1.getValue()); //.getValue was defined by us because we had placed some value inside enum VARS and that's being called here 

        //we can also iterate over all enum values
        for(Color color:Color.values()){
            System.out.println("Enum Value: "+color.getValue());
        }
    }
}