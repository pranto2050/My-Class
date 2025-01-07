

#include<iostream>
using namespace std;
class account
{
protected:
    string customer_name;
    int account_number;
    string account_type;
    double blance;

public:
    account(string name , int number , string type ):customer_name(name),account_number(number),account_type(type){}
    void deposit(double ammount)
    {
        blance+=ammount;
        cout<<"Deposit: "<<ammount<<"current blance: "<<blance<<endl;

    }
    void display()
    {
        cout<<"Account blance: "<<blance<<endl;
    }
    void withdraw(double amount)
    {
        if(amount<=blance)
        {
            blance-=amount;
            cout<<"withdraw"<<amount<<"current blance: "<<blance<<endl;

        }
        else
        {
            cout<<"Insuficiante blance "<<endl;
        }
    }
};
class saving : public account
{
    protected:
        double interest_rate;
    public:
        saving(string name,int accnum):account(name,accnum,"saving account")
        void compute()
        {
            double interest=blance*interestrate;
            blance+=interest;
            cout<<"Interest"<<interest<<"new blance: "<<blance<<endl;

        }

};
class current : public account
{
private:
    double mainblance;
    double servicecharge;
public:
    current(string name,string accnumber , double minbal):account(name,number,"current amount"){};
    void withdraw(double amount)
    {

    }
};