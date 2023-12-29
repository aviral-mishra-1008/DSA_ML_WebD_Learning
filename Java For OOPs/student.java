import java.util.Scanner;

public class student{
    public static String GradeEval(int a){
        String grade = " ";
        if(a>=85){
            grade = "A+";
        }

        else if(a>=75 & a<85){
            grade = "A";
        }

        else if(a>=65 & a<75){
            grade = "B+";
        }

        else{
            grade = "F";
        }
        return grade;
    }

    public static Integer gradePoint(String s){
        Integer Point = 0;
        switch(s){
            case "A+":
                Point = 10;
                break;
            
            case "A":
                Point = 9;
                break;
            
            case "B+":
                Point = 8;
                break;
            
            default:
                Point = 0;
                break;
        }
        return Point;
    }

    public static Double Cpi(Integer Score, Double cg, Integer n){
        double CPI = cg;
        String grade = GradeEval(Score);
        Integer Point = gradePoint(grade);
        CPI = (CPI*(n-1)+Point)/n;
        return CPI;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        // System.out.println("Enter your name: ");
        // String name  = sc.nextLine(); 
        // String Father  = sc.nextLine();
        // String address = sc.nextLine();
        // Integer DOB = sc.nextInt();

        // //Printing record
        // System.out.println("Name: "+name);
        // System.out.println("Father: "+Father);
        // System.out.println("address: "+address);
        // System.out.println("DOB: "+DOB);
        Double CPI = 0.0;
        for(Integer i=0; i<4; i++){
            System.out.println("Enter Your Grade: ");
            Integer Number = sc.nextInt();
            CPI = Cpi(Number, CPI, i+1);
        }
        System.out.println(CPI);
        sc.close();   
    }
}