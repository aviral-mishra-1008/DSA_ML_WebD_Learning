public class token {
    public void Tokeniser(String s){
        String[] arr = new String[s.length()-1];
        int k = 0;
        for(int i=0; i<s.length(); i++){
            String str = "";
            if(s.charAt(i)!=" "){
                str = str+s.charAt(i);
            }
            else if(s.charAt(i)==" " & s.charAt(i+1)!=" "){
                arr[k] = str;
                k++;
            }
            else{
                continue;
            }
        }

        for(int i=0; i<arr.length;i++){
            System.out.print(i);
            System.out.print(",");
        }

    }
    public static void main(String[] args){
        String s = "I am a nice boy";
        
        }
}
