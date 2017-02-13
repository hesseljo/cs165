#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    
    const double CLASS_A = 15;
    const double CLASS_B = 12;
    const double CLASS_C = 9;
    
    int A;
    int B;
    int C;
    
    double sum;
    
    double tempA;
    double tempB;
    double tempC;
    
    cout << "Please enter number of Class A seats purchased" <<std::endl;
    cin >> A;
    cout << "Please enter number of Class B seats purchased" <<std::endl;
    cin >> B;
    cout << "Please enter number of Class C seats purchased" <<std::endl;
    cin >> C;
    
    tempA = A * CLASS_A;
    tempB = B * CLASS_B;
    tempC = C * CLASS_C;
    
    sum = tempA + tempB + tempC;
    
    cout << fixed << showpoint << setprecision(2);
    cout << "The total amount in sales/income from your input is: $" << sum <<std::endl;
    
}

