#include <iostream>
using namespace std;

int main() {

int amount;
    cin>>amount;

    //if amount is 0 or less than 0 then print message
    if(amount <= 0)
        cout<<"No change"<<endl;

    //calculate dollar
    int dollars = amount / 100;
    amount = amount % 100;

    //calculate Quarter
    int quarters = amount / 25;
    amount = amount % 25;

    //Calculate Dimes
    int dimes = amount / 10;
    amount = amount % 10;

    //Calculate Nickels
    int nickels = amount / 5;
    amount = amount % 5;

    //Calculate pennies
    int pennies = amount;

    //Display results and using singular and plural coin names
    if(dollars > 0) {
        cout<<dollars;
        (dollars == 1)?cout<<" Dollar"<<endl:cout<<" Dollars"<<endl;
    }

    if(quarters > 0) {
        cout<<quarters;
        (quarters == 1)?cout<<" Quarter"<<endl:cout<<" Quarters"<<endl;
    }

    if(dimes > 0) {
        cout<<dimes;
        (dimes == 1)?cout<<" Dime"<<endl:cout<<" Dimes"<<endl;
    }

    if(nickels > 0) {
        cout<<nickels;
        (nickels == 1)?cout<<" Nickel"<<endl:cout<<" Nickels"<<endl;
    }

    if(pennies > 0) {
        cout<<pennies;
        (pennies == 1)?cout<<" Penny"<<endl:cout<<" Pennies"<<endl;
    }

   return 0;
}