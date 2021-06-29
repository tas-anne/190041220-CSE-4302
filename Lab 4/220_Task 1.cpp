#include<iostream>
#include<string.h>
using namespace std;

class BankAccount
{
private:
    int account_number;
    char holder_name[100];
    char account_type[100];
    float current_balance;
    float minimum_balance;
public:
    BankAccount(int no, char *name, char *type, float balance,float minBalance)
    {
        account_number=no;
        strcpy(holder_name, name);
        strcpy(account_type, type);
        current_balance=balance;
        minimum_balance=minBalance;
    }
    void deposit(float deposit)
    {
       // int deposit;
       // cout<<"\n Enter Deposit Amount = ";
       // cin>>deposit;
        current_balance=current_balance+deposit;
    }
    void withdraw()
    {
        int withdraw;
        cout<<"\n Enter Withdraw Amount = ";
        cin>>withdraw;
        if(withdraw>minimum_balance)
        {
            cout<<"\n Cannot Withdraw Amount";
        }
        current_balance= current_balance-withdraw;
    }
    void display()
    {
        cout<<"\n Account No. : "<<account_number;
        cout<<"\n Holder Name : "<<holder_name;
        cout<<"\n Account Type : "<<account_type;
        cout<<"\n CurrentBalance : "<<current_balance;
        cout<<"\n Minimum Balance : "<<minimum_balance;

    }
    float giveInterest()
    {
        float interest=current_balance*(0.03);
        interest=interest-interest*0.1;
        deposit(interest);
    }
    ~BankAccount()
    {
        cout<<"\nAccount of Mr. "<<holder_name<<" "<<" with account no "<<account_number<<" is destroyed with a balance BDT "<<current_balance<<endl;

    }
};


int main()
{
    int accountno;
    char name[100];
    char acc_type[100];
    float currentbalance;
    float minbalance=50.0;
    cout<<"\n Account No. ";
    cin>>accountno;
    cout<<"\n Name : ";
    cin>>name;
    cout<<"\n Account Type : ";
    cin>>acc_type;
    cout<<"\nCurrent Balance : ";
    cin>>currentbalance;
    BankAccount b(accountno, name, acc_type,currentbalance,minbalance);
    int depos;
    cout<<"Deposit: "<<endl;
    cin>>depos;
    b.deposit(depos);
    b.withdraw();
    b.display();
    return 0;
}

