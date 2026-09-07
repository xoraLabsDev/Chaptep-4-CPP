// Introductory11.cpp
// Displays the ending balance of a savings account.

#include <iostream>
using namespace std;

int main()
{
    double beginningBalance = 0.0;
    double totalDeposits = 0.0;
    double totalWithdrawals = 0.0;
    double endingBalance = 0.0;

    cout << "Enter the beginning balance: ";
    cin >> beginningBalance;

    cout << "Enter the total deposits: ";
    cin >> totalDeposits;

    cout << "Enter the total withdrawals: ";
    cin >> totalWithdrawals;

    endingBalance = beginningBalance + totalDeposits - totalWithdrawals;

    cout << "Ending balance: $" << endingBalance << endl;

    return 0;
}
