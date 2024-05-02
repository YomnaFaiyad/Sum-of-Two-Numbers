//Mathematical Calculations
#include <iostream >  

using namespace std;

int main()

{

    float num1;

    float num2;

    float num3;

    cout<<"Please enter your 2 numbers:";

    cin >> num1 >> num2;  //  get input

    cout <<"\nThe calculated values :\n";

    num3 = (num1 + num2)/2; // assign the average of num2 and num1

    cout << num1 << "  " << num2 <<"  " << num3 << "\n\n"; //display all values

   

    cout << "Your numbers reversed:\n";

     cout << num3 << "  " << num2 << "  " << num1 << "\n\n"; // display in reversed order

    return 0;

}

