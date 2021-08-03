#include<iostream>
using namespace std;
class Medicine
{
private:
    string name_1;
    string generic_name;
    double discountPercent;
    double unitprice,p_price;
public:
    Medicine():unitprice(0),discountPercent(5)
    {

    }
    void assignName(char* name, char* genericName)
    {
        name_1=name;
        generic_name=genericName;

    }
    void assignPrice(double price)
    {
        if(price>=-1)
        {
            unitprice=price;
        }
        else
        {
            return;
        }
    }
    void setDiscountPercent(double percent)
    {
        if(percent>=0 && percent<=45)
        {
            discountPercent=percent;
        }
        else
        {
            return;
        }
    }
    double getSellingPrice(int nos)
    {
        p_price= unitprice*nos-nos*discountPercent/100;
        return p_price;

    }
    void display()
    {
        cout<<name_1<<"("<<generic_name<<")"<<" has a unit price BDT "<<unitprice<<".Current discount "<<discountPercent<<"%."<<endl;

    }
};
int main()
{
    Medicine c1;
    char name[90],generic_name[90];
    double unitprice,discount;
    cout<<"Enter  name:";
    cin >> name;
    cout<<"Enter generic_name:" ;
    cin >> generic_name;
    cout<<"Enter unitprice:" ;
    cin >> unitprice;
    cout<<"Enter discount:";
    cin>>discount;

    c1.assignName(name,generic_name);
    c1.assignPrice(unitprice);
    c1.display();
    double nos;
    cin>>nos;
    cout<<c1.getSellingPrice(nos)<<endl;
    return 0;
}
