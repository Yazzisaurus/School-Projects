#include <iostream>

using namespace std;

int main() {
    int n1;
    int n2;
    cin >> n1 >> n2;
    if (n1 > n2) {
        cout << "Second integer can't be less than the first." << endl;
    } else {
        for (int i = n1; i <= n2; i += 5) {
            cout << i << " ";
        }
        cout << endl;   // remove this line, if you don't want a newline at the end..
    }
    return 0;
}