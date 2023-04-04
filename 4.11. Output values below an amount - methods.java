import java.util.Scanner;

public class LabProgram {

   /* Define your methods here */
   public static void getUserValues(int[] myArr, int arrSize, Scanner scnr) {
        for (int i = 0; i < arrSize; i++) {
            myArr[i] = scnr.nextInt();
        }
    }

    public static void outputIntsLessThanOrEqualToThreshold(int[] userValues, int userValsSize, int upperThreshold) {
        for (int i = 0; i < userValsSize; ++i) {
            if (userValues[i] <= upperThreshold) {
                System.out.print(userValues[i] + " ");
            }
        }
        System.out.println();
    }

   
   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in);
      int[] userValues = new int[20];
      int upperThreshold;
      int numVals;

      numVals = scnr.nextInt();
      getUserValues(userValues, numVals, scnr);

      upperThreshold = scnr.nextInt();
      outputIntsLessThanOrEqualToThreshold(userValues, numVals, upperThreshold);
   }
}