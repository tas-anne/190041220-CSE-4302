#include <iostream>
#include<math.h>
using namespace std;

class Rectangle
{
private:
    float length;
    float width;
public:
    Rectangle():length(1.0),width(1.0)
    {

    }
    Rectangle(float len,float wid):length(len),width(wid)
    {

    }
    void setLength( float l )
    {
        if(l >= 1.0 && l < 20.0)
        {
            length=l;
        }
    }
    void setWidth( int w )
    {
        if(w>=1.0 && w < 20.0 ? w: 1.0)
        {
            width =w;
        }
    }
    float area()
    {
        return length * width;
    }
    float perimeter()
    {
        return 2*(length+width);
    }
    float diagonal()
    {
        return sqrt(pow(width,2)+pow(length,2));
    }
    float anglebetween()
    {
        return acos(length/diagonal());
    }
    void display()
    {
        cout<<"Length="<<length<<endl;
        cout<<"Width="<<width<<endl;
        cout<<"area="<<area( )<<endl;
        cout<<"perimeter="<<perimeter( )<<endl;
        cout<<"diagonal="<<diagonal( )<<endl;
        cout<<"Angle between diagonal and length="<<anglebetween()<<endl;

    }

};

int main()
{
    float wid,len;
    cin>>len>>wid;
    Rectangle rec;
    rec.setLength(len);
    rec.setWidth(wid);
    rec.display();
    return 0;
}
