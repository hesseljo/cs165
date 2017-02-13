#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int min;
    int max;
    
    cout << "Please enter the first number which needs to be the lower bound number" <<std::endl;
    cin >> min;
    
    cout << "Please enter the second number, which needs to be the upper bound number" <<std::endl;
    cin >> max;
    
    
    int first = rand() % max + min;
    int sec = rand() % max + min;
    int third = rand() % max + min;
    int fourth = rand() % max + min;
    int fifth = rand() % max + min;
    
    cout << first <<std::endl;
    cout << sec <<std::endl;
    cout << third <<std::endl;
    cout << fourth <<std::endl;
    cout << fifth <<std::endl;
}
