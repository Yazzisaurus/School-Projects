import java.util.Scanner;

public class LabProgram {
   public static void main(String[] args) {
      /* Type your code here. */
       Scanner scr=new Scanner(System.in);
   int num1,num2;
       num1=scr.nextInt();
       num2=scr.nextInt();
       if(num2>=num1){
       while(num2>=num1){
       System.out.print(num1+" ");
       num1=num1+10;
       }
       }
       else{
       System.out.println("Second integer can't be less than the first.");
       }
      
   }
}
