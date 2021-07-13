#include<iostream>
#include<conio.h>
using namespace std;
class FLOAT
{
private:
    float number;
public:
    FLOAT( ):number(0)
    { }
    void getdata( )
    {
        cout<<"\n Enter an Floating Number :";
        cin>>number;
    }
    void display( )
    {
        cout<<number;
    }
    FLOAT operator+(FLOAT f1)
    {
        FLOAT temp; ///temporary variable
        temp.number=number+f1.number;
        return temp;
    }
    FLOAT operator*(FLOAT f1)
    {
        FLOAT temp;
        temp.number=number*f1.number;
        return temp;
    }
    FLOAT operator-(FLOAT f1)
    {
        FLOAT temp;
        temp.number=number-f1.number;
        return temp;
    }
    FLOAT operator/(FLOAT f1)
    {
        FLOAT temp;
        temp.number=number/f1.number;
        return temp;
    }
    operator int()
    {
        return (int) number;
    }


};

int main()
{
    FLOAT f1,f2,f3,f4;
    f1.getdata();
    f2.getdata();

     f3=f1+f2;
     cout<<"\n\nF1+F2 = ";
     f3.display();

    cout<<"\n\nF1-F2 = ";
    f3=f1-f2;
    f3.display();

    cout<<"\n\nF1*F2 = ";
    f3=f1*f2;
    f3.display();

    cout<<"\n\nF1/F2 = ";
    f3=f1/f2;
    f3.display();

    cout<<endl;

    int i = (int) f1;
    cout<<i;

}
