#include <iostream>
using namespace std;

int main() {

   /* Type your code here. */
   int userNum, x;
       scanf("%d",&userNum);
       scanf("%d",&x);
       
       printf("%d ",userNum/x);
       
       userNum = userNum/x;
       printf("%d ",userNum/x);
       
       userNum = userNum/x;
       printf("%d\n",userNum/x);

   return 0;
}
