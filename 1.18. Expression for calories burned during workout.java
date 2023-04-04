import java.util.Scanner;

public class LabProgram {
   public static void main(String[] args) {
      
      Scanner in = new Scanner(System.in);
        double age = in.nextDouble();
        double weight = in.nextDouble();
        double rate = in.nextDouble();
        double time = in.nextDouble();
        double women = (age * 0.074 - weight * 0.05741 + rate * 0.4472 - 20.4022) * time / 4.184;
        double men = (age * 0.2017 + weight * 0.09036 + rate * 0.6309 - 55.0969) * time / 4.184;
        System.out.printf("Women: %.2f calories\n", women);
        System.out.printf("Men: %.2f calories\n", men);
   }
} 
