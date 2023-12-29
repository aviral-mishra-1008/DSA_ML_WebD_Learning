import java.io.*;
import java.util.*;
public class Bin {
    public void array(String filename){
            Scanner sc = new Scanner(System.in);
            System.out.println("Please enter number of numbers: ");
            int num = sc.nextInt();
            int[] arr = new int[num];
            for(int i=0; i<num; i++){
                System.out.println("Please enter number"+i+" : ");
                arr[i] = sc.nextInt();
            }

            sc.close();
            try{ 
            BufferedWriter output = new BufferedWriter(new FileWriter("inputs.txt"));
            for(int i:arr){
                output.write(Integer.toString(i));
                output.newLine();
            }
            output.flush();
            output.close();
        }
            catch(IOException e){
                e.printStackTrace();
            }
    }

    public String int2bin(int n){
        String str = "";
        while(n!=0){
            int x = n%2;
            n = n/2;
            str = str + Integer.toString(x);
        }
        return str;
    }

    public void output(String filename){
        try{
        Scanner s = new Scanner(new File("inputs.txt"));
        BufferedWriter bf = new BufferedWriter(new FileWriter(filename));
        while(s.hasNext()){
            String str = s.nextLine();
            int n =  Integer.parseInt(str);
            String result =  int2bin(n);
            bf.write(result);
            bf.newLine();
        }
        bf.flush();
        bf.close();
        s.close();
    }

    catch(IOException e){
        e.printStackTrace();
    }
    }
    public void display(String filename){
        try{
            Scanner s = new Scanner(new File(filename));
            while(s.hasNext()){
                System.out.println(s.nextLine());
            }
        }

        catch(IOException e){
            e.printStackTrace();
        }
    }
    }
    

