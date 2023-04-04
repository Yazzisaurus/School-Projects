import java.util.Scanner;

public class LabProgram {
   public static void main(String[] args) {
      Scanner scan = new Scanner(System.in);
        int num1, num2, num3;

        // reading three inputs from user
        num1 = scan.nextInt();
        num2 = scan.nextInt();
        num3 = scan.nextInt();

        // calculating min
        int min = num1;

        // checking user_num2 is min
        if(min > num2){
            min = num2;
        }

        // checking user_num3 is min
        if(min > num3){
            min = num3;
        }

        // printing min
        System.out.println(min);
   }
}
