#include <iostream>
using namespace std;

int main() {
   
// array of size 3.
int arr[3];


// input from user
for (int i = 0; i < 3; i++)
{
std::cin >>arr[i];
}
// stored first element in answer
int ans = arr[0];
for (int i = 1; i < 3; i++)
{

// Comparision with smallest element
if(arr[i] < ans){
ans = arr[i];
}
}
std::cout << ans;

cout << endl;

   return 0;
}