#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double interestRate;
    double numberPayments;
    double loanAmount;
    
    double interestPaid;
    double amountBack;
    double monthlyPayment;
    
    cout << "What Interest Rate do you want?" <<std::endl;
    cin >>interestRate;
    cout << "How many payments do you wish to have?" <<std::endl;
    cin >>numberPayments;
    cout << "What is the total loan amount that you wish to have?" <<std::endl;
    cin >>loanAmount;
    
    cout << "Loan Amount:" << setw(20) << "$" << " " << loanAmount << endl;
    cout << "Monthly Interest Rate:" << setw(20) << interestRate << "%" <<endl;
    cout << "Number of Payments:" << setw(20) << "$" << " " <<numberPayments << endl;
    
    interestPaid = interestRate * loanAmount;
    amountBack = interestPaid + loanAmount;
    monthlyPayment = amountBack / numberPayments;
    
    cout << left << setw(12) << "Monthly Payment:" << right << setw(20) << "$"  <<  " " << monthlyPayment << endl;
    cout << left << setw(12) << "Amount Paid Back:" << right << setw(20) << "$" << " " << amountBack << endl;
    cout << left << setw(12) << "InterestPaid:" << right << setw(20) << "$" << " " << interestPaid << endl;
    
}
