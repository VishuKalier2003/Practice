/*Design a bank account to include following data members as Name of the depositor, type of the 
account, account number and balance of the account.. The methods to be included are to assign
initial values, to deposit an amount, to withdraw and to display name and balance... */
#include <iostream>
#include <string>
using namespace std;
class BankAccount       //  Class created
{
    public:       // Data members as specified
    string Name;
    string AccountType;
    string AccountNumber;
    int Balance;
    public:
    BankAccount()    //  Default Constructor
    {
        Name = ""; AccountNumber = "00000000";
        AccountType = "";Balance = 0;
    }
    public:
    BankAccount(string name, string type)   //  Parametrized Constructor
    {
        Name = name; AccountNumber = "12345678";
        AccountType = type; Balance = 0;
    }
    public:
    void Deposit(int amt)    // Depositing a Required Amount in the Bank Account
    {
        Balance = Balance + amt;    // Adding the amount to the balance
        cout << "Your Given Amount is Deposited !!" << endl;
    }
    public:
    void Withdraw(int amt)   // Withdrawing the Required Amount from the Bank
    {
        Balance = Balance - amt;   // Subracting the given amount from the Balance
        cout << "The Required Amount is Withdrawn from your Account !!" << endl;
    }
    public:
    void DisplayDetails()   // Displaying the name of the Account Holder and the Balance
    {
        cout << "The Name of the Account Holder is : " << Name << endl;
        cout << "The Balance currently in the Account is : " << Balance << endl;   
    }
};
int main()   // main function
{
    string str, str1;     // String variables
    cout << "Enter your Name (as the Account Holder ): ";
    cin >> str;
    cout << "Enter the type of Account you want, Current or Savings : ";
    cin >> str1;
    BankAccount bankaccount(str, str1);  // Object creation by Parametrized Constructor
    int x;
    bankaccount.DisplayDetails();   // Displaying Banker Details
    cout << "Enter amount to be deposited : ";
    cin >> x;
    bankaccount.Deposit(x);   // Calling Deposit function
    cout << "The Balance currently is : " << bankaccount.Balance << endl;
    cout << "Enter amount to be Withdrawn : ";
    cin >> x;
    bankaccount.Withdraw(x);   // Calling Withdraw function
    cout << "The Balance currently is : " << bankaccount.Balance << endl;
    return 0;   // End of the program
}