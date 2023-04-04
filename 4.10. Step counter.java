import java.util.Scanner;

public class LabProgram {
   
    public static int feetToSteps(double userFeet){

        return (int) (userFeet/2.5);
    }

    public static void main(String[] args) {

        Scanner scnr = new Scanner(System.in);

        double userFeet = scnr.nextDouble();

        int steps = feetToSteps(userFeet);

        System.out.println(steps);
    }
}