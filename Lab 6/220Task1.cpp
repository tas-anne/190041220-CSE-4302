#include<iostream>
using namespace std;

class Counter
{
private:
    int count,step;
public:
    Counter( ):count(0),step(1)
    { }
    Counter(int cnt,int st):count(cnt),step(st)
    { }

    ///steps increment if 0 not allowed else step=value


    void setIncrementStep(int step_val)
    {
        ///if neg
        if(step_val<0)
        {
            cout<<"Please Enter positive value!\n";
            return;
        }
        else
        {
            step=step_val;
        }
    }

//displaystep

 int displaystep()
    {
        return step;
    }

    //get count

    int getCount( )
    {
        return count;
    }

   //increment count+step

    void increment( )
    {
        count+=step;
    }

    //reset

    void resetCount( )
    {
        count=0;
        step=1;
    }

    //+operator (Counter a)

    Counter operator +(Counter a)
    {
        return Counter(count+a.count,min(step,a.step));
    }

    //count+var


    Counter operator +(int var)
    {
        return Counter(count+var,step);
    }

    //++->count+=step

    Counter operator ++( )
    {
        count+=step;
        return Counter(count,step);
    }


    //postfix  store count at x and then increment,return x


    Counter operator ++(int)
    {
        int x;
        x=count;
        count+=step;
        return Counter(x,step);
    }

//+=


    Counter operator +=(Counter a)
    {
        count+=a.count;
        return Counter(count,step);
    }

    friend Counter operator+(int lop,Counter rop);

};

//left+r.count

Counter operator+(int lop,Counter rop)
{
    return Counter(lop+rop.count,rop.step);
}
int main( )
{
    //int c,s;
    Counter c1;
    cout<<"Default:\n";
    cout<<c1.getCount( )<<" "<<c1.displaystep( )<<endl;
    c1.setIncrementStep(2);
    c1.increment( );

    cout<<"After Increasing by given increment step: ";
    cout<<c1.getCount()<<"   "<<c1.displaystep( )<<endl;

    c1.resetCount( );
cout<<"After Resetting count is : ";
    cout<<c1.getCount( )<<"   "<<c1.displaystep( )<<endl;

     int x,y;
     cout<<"Enter value and steps for object c2: ";
     cin>>x>>y;
    Counter c2(x,y);
     int x1,y1;
     cout<<"Enter value and steps for object c3: ";
     cin>>x1>>y1;
    Counter c3(x1,y1);
    c1=c2+c3;//4+5=9
    cout<<"After c1=c2+c3:\n";
    cout<<c1.getCount( )<<" "<<c1.displaystep( )<<endl;//9

    cout<<"After c1=c2+10:\n";//4+10=14
    c1=c2+10;
    cout<<c1.getCount( )<<" "<<c1.displaystep( )<<endl;//14

    c1=5+c2;
    cout<<"After c1=var+c2:\n";
    cout<<c1.getCount( )<<" "<<c1.displaystep( )<<endl;//9
    cout<<c2.getCount( )<<" "<<c2.displaystep( )<<endl;

    cout<<"After c1=c2++:\n";
    c1=c2++;
    cout<<c1.getCount( )<<" "<<c1.displaystep( )<<endl;
    cout<<c2.getCount( )<<" "<<c2.displaystep( )<<endl;

    cout<<"After c1=++c2:\n";
    c1=++c2;
    cout<<c1.getCount( )<<" "<<c1.displaystep( )<<endl;
    cout<<c2.getCount( )<<" "<<c2.displaystep( )<<endl;

    cout<<"After c1+=c2:\n";
    c1+=c2;
    cout<<c1.getCount( )<<" "<<c1.displaystep( )<<endl;
 cout<<c2.getCount( )<<" "<<c2.displaystep( )<<endl;
 cout<<"so c2 is unchanged"<<endl;

}
