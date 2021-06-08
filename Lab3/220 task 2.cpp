#include<iostream>
using namespace std;
int flag=0,flag2=0;
class RationalNumber
{
private:
    int numerator;
    int denominator;
public:
    RationalNumber()
    {
        numerator=0;
        denominator=1;
    }
    void assign(int num,int denom)
    {
        if (denom == 0)
        {
            cout << "Error!Can't be equal to 0!!!!!" << endl;
            flag2=1;
            return;
        }

        numerator = num;
        denominator = denom;
    }
    double convert()
    {
        double converting= (double) numerator /  denominator;
        return converting;

    }
    void invert()
    {
        if(numerator==0)
        {
            cout<<"Error!Denominator is becoming 0!!!!"<<endl;
            flag=1;
            return;
        }
        swap( numerator,  denominator);

    }
    void print()
    {
        cout << "Rational Number is " <<  numerator << "/" <<  denominator << endl;
    }
};
int main()
{
    RationalNumber rational;

    int numerator, denominator;
    cout<<"Enter the numerator:"<<endl;
    cin>>numerator;
    cout<<"Enter the denominator:"<<endl;
    cin>>denominator;

    rational.assign(numerator, denominator);
    if(flag2==1)
    {
        return 0;
    }
    else
    {
        cout << "Before inversion : ";
        rational.print();

        cout << "Converted value : " << rational.convert() << endl;

        rational.invert();
        if(flag==1)
        {
            return 0;
        }
        else
        {
            cout << "After inversion : ";
            rational.print();

            cout << "Converted value : " << rational.convert() << endl;

            return 0;
        }
    }
}
