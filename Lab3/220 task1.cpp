#include<iostream>
using namespace std;
class Counter
{
private:
    int count,steps;
public:
    Counter(): count(0),steps(0)///constructor
    {
        //cout<<"constructor"<<endl;
    }
    void setIncrementStep(int step_val)
    {
        //cout<<"step increment"<<endl;
        steps= step_val;
        //cout<<steps<<endl;
    }
    int getCount()
    {
        //cout<<"getcount"<<endl;
        return count;
    }
    void resetCount()
    {
        // cout<<"reset"<<endl;
        count=0;
    }
    void increment()
    {
//cout<<"increment"<<endl;
        count += steps;

    }
    ~Counter()
    {
         ///destrucotr
    }

};
int main()
{
    Counter cnt;

    cout << "At first using constructor value initialize : " << cnt.getCount() << endl;
    cout<<"Enter increment steps:"<<endl;
    int step;
    cin>> step;
    cnt.setIncrementStep(step);
    cnt.increment();
    cout << "After Incrementing first time: " << cnt.getCount() << endl;
    cnt.increment();
    cout << "After Incrementing second time: " << cnt.getCount() << endl;
    cnt.resetCount();
    cout<<"resetting :"<<cnt.getCount() << endl;

    return 0;

}
