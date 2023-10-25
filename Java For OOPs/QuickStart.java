import java.util.Arrays;
import java.util.Scanner;

public class QuickStart { //hey java thisnis project/file names
    public static void main (String[] args) { //execute this code! //
        int myInt = 12;
        System.out.println(myInt);// println means it adds a \n to end of line
        System.out.println(myInt);// println means it doesn't add \n

        //Variables
        String Name = "Aviral"; //datatype batana padta then we can place the value, so var holds pointer to Name and value that resides in it

        // int age = 19;
        // String friend = "Ayushman";
        // String teammate = friend; //assignement is possible!

        //Datatypes: i)Primitive ii)Non Primitive
        //Primitive types
            //byte - 1 [-128 to 127]
            //short - 2 bytes 
            //int - 4 bytes
            // long - 8 byte
            //float - 4 byte
            //double - 8 byte
            //char - 2  byte
            //boolean - 1 bit
            //We must never exceed limit
        // byte age2 = 30;
        // int phone = 1234567890;
        // long phone2 = 12345678900L; //L implies the long number!
        // float pi = 3.14F; //so we need to write such letters to tell java its which type float/double/long/short etc

        //NON PRIMITIVE DATA-TYPE
            //Strings
            //We can perform operations 
        //Strings
        String name1 = "Mishra";
        System.out.println(name1.length());
        String name3 = Name + " " + name1;
        System.out.println(name3);

        //to find index of the variable we use charAt

        System.out.println(name3.charAt(1));

        //replace is used to replace a character of string with another character

        String wow = name3.replace('a', 'A');

        System.out.println(wow); //all a get replaced by A and also remember that strings here are also immutable

        String third = wow.substring(0,4); //same as python 0->3
        System.out.println((third));

        //Arrays! 
        int[] marks = new int[3]; // new format
        marks[0] = 99;
        marks[1] = 99;
        marks[2] = 97;

        System.out.println(marks[0]);
        //like this!

        //Initialisation
        //So, unlike c++ there's no garbage value that get's stored in non initialised variable
        //Rather it gets initialised with 0

        //functions of arrays
        //length

        System.out.println(marks.length);

        //sort

        //Arrays is class and sort is the method in this class

        Arrays.sort(marks);
        System.out.println(marks[0]);

        //another way
        // int[] marks2 = {32,44,21};

        //CASTING
        //When we try to convert a small space datatype to a larger one it gets converted easily as there's no sign of an information loss. 
        //Same isn't true for the case of the large casting into smaller as we use explicit casting there

        double price = 100.00;
        double finalprice  = price + 18;
        System.out.println(finalprice);

        int p = 100;
        int fp = p+ (int)18.9; //won't work if we remove ()
        System.out.println(fp); //prints 118 as its a floor operation


        //establishing constants
        int afe = 18;
        System.out.println(afe);
        afe = 11;
        afe = 15; //value can change

        //but if we use final keyword so its a final
        
        final int CR = 4;  //its a convention to write constants with capital letters
        System.out.println(CR);


        //Operators

        //Under mathematical operators, the ground is clear, if you divde int by int answer is floor int and if double then answer is accurate

        //NUM++ increaments value by 1 also works here and so does ++NUM and NUM-- or --NUM


        //Input of elements!
        Scanner sc = new Scanner(System.in); //we initialise a scanner element now this can be used to take inputs

        //like this
        int varName = sc.nextInt(); //next ke baad lagate jao nextInt, nextChar, nextFloat etc.....
        System.out.println(varName);

        //String input
        String name = sc.next(); //we use next to input only string but only one word and it breaks at " ", /t, /b

        //we also use nextLine to overcome this
        String name2 = sc.nextLine();
        System.out.println(name); 
        System.out.println(name2); 
        //operators work same as everywhere like ==,<=,>=


        //CONDITIONAL STATEMENTS
        boolean isSunUp = true;
        if(isSunUp==true)
            System.out.println("day");
        else 
            System.out.println("night");

        //Thus it is a really nice similar to python method 

        //logical operator symbols: &&, ||, ~ so  basically same pattern

        //else if clause is also possible 


        //SWITCH CASES
        sc.close();
        int day  = 1;
        switch(day){
            case 1 : 
                System.out.println("monday");
                break; //never forget to use break otherwise it will perform all tasks below this case

            case 2 : 
                System.out.println("Tuesday");
                break;

            default : 
                System.out.println("Wednesday");
                break;
            }


        //lOOPS!
        //for loop is like the c++ loop
        //FOR
        for(int i=0; i<=5; i++){
            System.out.println(i);
        }
        //EXACTLY LIKE C++


        //WHILE LOOP WORKS SAME AS C++

        int i =0;
        while(i<4){
            System.out.println(i);
            i++;
        }

        //EXCEPTION HANDLING  i.e TRY-EXCEPT OF PYTHON 
        //CALLED TRY AND CATCH

        // int[] marks = {11,22,113,21};
        try{
            System.out.println(marks[5]);
        }

        catch(Exception exception){
            System.out.println("Index out of range buddy!");
        }


        //FUNCTIONS IN JAVA
        //Every class has methods which are basically functions
        //example


    }
}
