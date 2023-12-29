import java.io.*;
import java.util.*;
public class File_Handling {
    public static void main(String[] args){
        String file = "BufferedWriter.txt";
        int[] num = {1,11,2,7,64,5,33};
        write(file,num);
        read(file);
        System.out.println("DONE!");
    }
    //writing to file an array all at once, file must exist!
    public static void write_array(String filename, int[] x){
        try{
        BufferedWriter outputWriter = new BufferedWriter(new FileWriter(filename));
        outputWriter.write(Arrays.toString(x));//We use Arrays.toString functionality to convert nums to string
        outputWriter.flush();
        outputWriter.close();
        }
        catch(IOException e){
            e.printStackTrace();
        }
        }

    //another method, write each number in each line
    public static void write(String filename, int[]x){
        try{
        BufferedWriter writer = new BufferedWriter(new FileWriter(filename));
        for(int i:x){
            writer.write(Integer.toString(i));
            writer.newLine();
        }
        writer.flush();
        writer.close();
        }
        catch(Exception e){
            e.printStackTrace();
        }
    }
    
    //The method to first check if file exists() then if found delete it
    public void write_new(String filename, int[] x){
        BufferedWriter outputWriter = null;
        try{
            File f = new File(filename); //Basicalle we will initialise the File
            if(f.exists()){
                System.out.println("Hello");
                f.delete();
            }
            outputWriter = new BufferedWriter(new FileWriter(filename));
            for(int i=0; i<x.length;i++){
                outputWriter.write(Integer.toString(i)+" "); //Now, we see, " " means a spacing and things come in one line, when we use writer.newLine() then a new line is added for each element
                // outputWriter.newLine();
            }
            outputWriter.flush();
            outputWriter.close();
        }
        catch(IOException e){
            e.printStackTrace();
        }
    }

    //reading from an array to the file
    public static void read(String filename){
        try{
        Scanner s = new Scanner(new File(filename));
        int[] arr = new int[100];
        int i = 0;
        while(s.hasNext()){
            arr[i] = s.nextInt();
            i++;
            System.out.println(arr[i]);
        }
     }

     catch(IOException e){
        e.printStackTrace();
     }
    }
    }

