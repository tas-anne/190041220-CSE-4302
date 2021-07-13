#include<bits/stdc++.h>
using namespace std;
class Coordinate
{
private:
    float abscissa, ordinate;
public:
    Coordinate():abscissa(0.0),ordinate(0.0)
    { }
    Coordinate(float ab, float ord):abscissa(ab),ordinate(ord)
    { }
    void display()
    {
        cout<<"Abscissa: "<<abscissa<<endl;
        cout<<"Ordinate: "<<ordinate<<endl;
    }

//sqrt(a*a+o*o)


    float getDistance( )//from origin
    {
        return sqrt(abscissa*abscissa+ordinate*ordinate);
    }


    //abs(a-c.a)


    float getDistance(Coordinate c)//from an object
    {
        float a=abs(abscissa-c.abscissa);
        float b=abs(ordinate-c.ordinate);
        return sqrt(a*a+b*b);
    }
    void move_x(float val)
    {
        abscissa=abscissa+val;
    }
    void move_y(float val)
    {
        ordinate=ordinate+val;
    }
    void move(float val)
    {
        move_x(val);
        move_y(val);
    }

//x++,y++

    Coordinate operator++ ()//move a coordinate object 1 unit in x and y direction->prefix
    {
        ++abscissa;
        ++ordinate;
        return Coordinate(abscissa,ordinate);
    }
    Coordinate operator++(int)//postfix
    {
        abscissa++;
        ordinate++;
        return Coordinate(abscissa,ordinate);
    }

    Coordinate operator-- ( )
    {
        --abscissa;
        --ordinate;
        return Coordinate(abscissa,ordinate);
    }
    Coordinate operator--(int)
    {
        abscissa--;
        ordinate--;
        return Coordinate(abscissa,ordinate);
    }

    bool operator ==(Coordinate c)
    {
        float a= getDistance();
        float b= c.getDistance();
        return a==b;
    }

    bool operator != (Coordinate c)
    {
        float a= getDistance( );
        float b= c.getDistance( );
        return a!=b;
    }

    bool operator >=(Coordinate c)
    {
        float a= getDistance();
        float b= c.getDistance();
        return a>=b;
    }

    bool operator <=(Coordinate c)
    {
        float a= getDistance();
        float b= c.getDistance();
        return a<=b;
    }

    bool operator >(Coordinate c)
    {
        float a= getDistance();
        float b= c.getDistance();
        return a>b;
    }
    bool operator <(Coordinate c)
    {
        float a= getDistance();
        float b= c.getDistance();
        return a<b;
    }

    ~Coordinate()
    {

    }
};

int main()
{
    Coordinate c;
    c.display();
    ++c;
     c.display();
    c++;
    c.display();
    c--;
    c.display();
     c--;
    c.display();
     c--;
    c.display();
    c.move(5);
    c.display();
    Coordinate c2(100,200);
    cout<< (c!=c2);
    cout<<endl;
    cout<< (c==c2);
    cout<<endl;
    cout<< (c<c2);

}
