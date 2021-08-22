#include <iostream>
#include <string>
using namespace std;
enum class Material {Wood,Board,Steel,foam};

class Furniture
{
protected:
    double price;
    double discount;
    string productname;
    Material madeof;
public:

    Furniture(double p,double d,Material m):price(0),discount(0),madeof(Material::Wood)
    {
        setPrice(p);
        setDiscount(d);
        setMadeof(m);
    }
    void setPrice(double val)
    {
        if(val>0)
            price=val;
    }
    void setDiscount(double val)
    {
        if(val<=price)
            discount=val;
    }
    void setMadeof(Material val)
    {
        madeof=val;
    }
    string getMadeof()
    {
        if(madeof==Material::Wood)
            return string("Wood");
        else if(madeof==Material::Board)
            return string("Board");
        else if(madeof==Material::Steel)
            return string("Steel");
        else
            return string("");
    }

    void get_details()
    {
        cout<<"##################"<<endl;
        cout<<"------------------------------"<<endl;
        cout << "Regular Price :" <<price << "\n";
        cout << "Discounted Price :" <<price-discount << "\n";
        cout << "Material :" <<getMadeof()<< "\n";
    }
    int getDP()
    {
        return price-discount;
    }
    double setDiscountPercentage(double s)
    {
        discount=s;
    }

    virtual void productDetails()=0;

};



enum class BedSize {Single,SemiDouble,Double};
class Bed:public Furniture
{
protected:
    BedSize bed_size;
public:
    Bed(double p,double d,Material m,BedSize bs) : Furniture(p,d,m)
    {
        bed_size=bs;
    }

    string getSize()
    {


        if(bed_size==BedSize::Single)
            return string("Single");
        else if(bed_size==BedSize::SemiDouble)
            return string("SemiDouble");
        else if(bed_size==BedSize::Double)
            return string("Double");
        else
            return string("");

    }
    void productDetails()
    {

        get_details();
        cout<<"Bed Size: "<<getSize()<<endl;
        cout<<"Product Name: Bed"<<endl;
    }

};

enum class SofaSize {One, Two, Three, Four, Five};
class Sofa:public Furniture
{
    Furniture *f;
//    void a()
//    {
//        f = new Bed();
//    }
protected:
    SofaSize seat;
public:
    Sofa(double p,double d,Material m,SofaSize st) : Furniture(p,d,m)
    {
        seat=st;
    }

    string getSize()
    {


        if(seat==SofaSize::One)
            return string("One");
        else if(seat==SofaSize::Two)
            return string("Two");
        else if(seat==SofaSize::Three)
            return string("Three");
        else if(seat==SofaSize::Four)
            return string("Four");
        else if(seat==SofaSize::Five)
            return string("Five");
        else
            return string("");

    }
    void productDetails()
    {
        get_details();
        cout<<"Seat number: "<<getSize()<<endl;
        cout<<"Product Name: Sofa"<<endl;
    }

    ~Sofa()
    {
        delete f;
    }
};

enum class DiningSize {Two,Four,Six};

class DiningTable:public Furniture
{

protected:
    DiningSize din;

public:
    DiningTable(double p,double d,Material m,DiningSize ds) : Furniture(p,d,m)
    {
        din=ds;
    }

    string getSize()
    {



        if(din==DiningSize::Two)
            return string("Two");
        else if(din==DiningSize::Four)
            return string("Four");
        else if(din==DiningSize::Six)
            return string("Six");
        else
            return string("");

    }
    void productDetails()
    {
        get_details();
        cout<<"Dining SIze: "<<getSize()<<endl;
        cout<<"Product Name: Dining Table"<<endl;
    }

};




/**task 4
sort_furniture_discount will sort the array in descending order based on their discount price.
You may need to add some member functions
**/
void order(Furniture *furnitures[ ], Furniture* furnitures2[ ])///array of pointers/double pointer **b,to pass a pointer
{
    if ((*furnitures)->getDP() < (*furnitures2)->getDP())
    {
        Furniture* temp = *furnitures;
        *furnitures = *furnitures2;
        *furnitures2 = temp;
    }
}

//void sort_furniture_discount(Furniture *furnitures[],int no_of_furnitures);
void sort_furniture_discount(Furniture *furnitures[], int no_of_furnitures)
{
    for (int i = 0; i < no_of_furnitures - 1; ++i)
    {
        for (int j = i + 1; j < no_of_furnitures; ++j)
        {
            order(furnitures + i, furnitures + j);
        }
    }
}



int main()
{
    Furniture* f_list[100];

    /**
        task 1
        So that following lines can be executed without error
    */
    f_list[0] = new Bed(10000,123,Material::Wood,BedSize::Single);
    f_list[1] = new Sofa(11000,234,Material::Steel,SofaSize::Five);
    f_list[2] = new DiningTable(13000,345,Material::Wood,DiningSize::Six);
    f_list[3] = new Bed(10090,123,Material::Wood,BedSize::Single);

    /**task 1 ends here*/

    /**
        task 2
        So that following lines can be executed without error

        task 3 (Modify productDetails)
    */
    f_list[2]->setDiscountPercentage(30);
    for(int i=0; i<4; i++)
    {
        f_list[i]->productDetails();
    }

    /**task 2 ends here*/
    /**task 3 ends here*/

    /**task 4
    So that following lines can be executed without error
    */
    sort_furniture_discount(f_list,4);
    cout<<endl;
    cout<<endl;
    cout<<"=============="<<endl;
    cout<<"------X-----"<<endl;
    cout<<"After sorting"<<endl;
    cout<<"=============="<<endl;
    cout<<"------X-----"<<endl;
    cout<<endl;
    cout<<endl;
    for(int i=0; i<4; i++)
    {
        f_list[i]->productDetails();
    }
    /**task 4 ends here*/

}

