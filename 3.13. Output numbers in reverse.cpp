#include <iostream>
#include <vector>   // Must include vector library to use vectors
using namespace std;

int main() {
   vector<int> userInts; // A vector to hold the user's input integers

   /* Type your code here. */
 int n, value;
        
        cin>>n;
        
        for(int i = 0;i<n;i++){
                cin>>value;
                userInts.push_back(value);
        }       
        
        for(int i = 0;i<n;i++){
                cout<<userInts[n-i-1]<<",";
        }     
        cout<<endl;
   return 0;
}
