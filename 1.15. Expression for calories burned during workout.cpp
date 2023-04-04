#include <iostream>
#include <iomanip>
using namespace std;

int main() {

   /* Type your code here. */
   int age;
    double weight;
    double heartRate;
    double time;

    scanf("%d", &age);
    scanf("%lf", &weight);
    scanf("%lf", &heartRate);
    scanf("%lf", &time);

    double womenCalories = ((age * 0.074) - (weight * 0.05741) + (heartRate * 0.4472) - 20.4022) * time / 4.184;
    double menCalories = ((age * 0.2017) + (weight * 0.09036) + (heartRate * 0.6309) - 55.0969) * time / 4.184;

    printf("Women: %0.2lf calories\n", womenCalories);
    printf("Men: %0.2lf calories\n", menCalories);

   return 0;
}
