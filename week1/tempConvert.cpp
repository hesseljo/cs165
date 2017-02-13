#include <iostream>
using namespace std;

int main()
{
    int C;
    int F;
    
    cout << "Please enter a Celsius temperature you wish to be converted" <<endl;
    cin >> C;
    
    F = (C * 9) / 5 + 32;
   
    cout << "The Fahrenheit tempreture is:  "<< F <<endl;
    
}
