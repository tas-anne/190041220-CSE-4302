#include<iostream>
using namespace std;

class Seat
{
private:
    string comfortability;
    string seat_warmer;
public:
    void set_seatdetails()
    {
        cout<<"Enter  Comfortability: ";
        cin>>comfortability;
        cout<<"Enter Presence of Warm Seat:(Yes/No)";
        cin>>seat_warmer;

    }
    void get_seat_info()
    {
        cout<<"Comfortability : "<<comfortability<<endl;
        cout<<"Presence of Warm Seat: "<<seat_warmer<<endl;
    }
};
class Wheel
{
private:
    float radius;
public:
    Wheel():radius(0)
    {
    }
    void set_radius( )
    {
        cout<<"Enter Radius: ";
        cin>>radius;
    }
    float get_radius()
    {
        return radius;
    }

};
class Engine
{
private:
    float maximum_Fuel_Consumption_Rate;
    float maximum_Energy_Production_Rate;
    float average_RPM;
public:
    Engine( ):maximum_Fuel_Consumption_Rate(0),maximum_Energy_Production_Rate(0),average_RPM(0)
    {
        cout << "Engine constructor" << endl;
    }
    void set_engine_details()
    {
        float max_rate;
        float max_eng;
        float avg_rpm;
        cout<<"Enter info For Maximum Fuel Consumption Rate: ";
        cin>>max_rate;
        cout<<"Enter info For Maximum Energy Production Rate: ";
        cin>>max_eng;
        cout<<"Enter info For Average RPM ";
        cin>>avg_rpm;
        maximum_Fuel_Consumption_Rate=max_rate;
        maximum_Energy_Production_Rate=max_eng;
        average_RPM=avg_rpm;
    }
    void get_Engine_info()
    {
        cout<<"Maximum Fuel Consumption Rate: "<<maximum_Fuel_Consumption_Rate<<endl;
        cout<<"Maximum Energy Production Rate: "<<maximum_Energy_Production_Rate<<endl;
        cout<<"Average RPM: "<<average_RPM<<endl;
    }

};
class Door
{
private:
    string opening_mode;
public:
    Door()
    {
        cout << "Door constructor" << endl;
    }
    void set_mode()
    {
        string m;
        cout<<"Enter mode:";
        cin>>m;
        opening_mode=m;
    }
    string get_mode()
    {
        return opening_mode;
    }
};
///using composition which is stronger form of aggregation->consist of relationship/composed of
///avoiding inheritance
class Truck
{
private:
    float maximum_acceleration;
    float fuel_capacity;
    float Load_Capacity;
    Seat s[2]; //seat class
    Wheel w[6];//wheel class
    Engine eng;
    Door d[2];
public:
    Truck():maximum_acceleration(0),fuel_capacity(0),Load_Capacity(0)
    {
    }
    void set_details( )
    {
        cout<<"seat1 details input-----";
        cout<<endl;
        s[0].set_seatdetails();
          cout<<"seat2 details input-----";
        cout<<endl;
        s[1].set_seatdetails();
        cout<<endl;
        cout<<"set radius input----";
        cout<<endl;
        w[0].set_radius( );
        cout<<endl;
        cout<<"set engine details input----";
        cout<<endl;
        eng.set_engine_details( );
        cout<<endl;
        cout<<"set mode of doors input----";
        cout<<endl;
        d[0].set_mode( );
        cout<<endl;
        cout<<"Enter Maximum Acceleration: ";
        cin>>maximum_acceleration;
        cout<<"Enter Fuel Capacity: ";
        cin>>fuel_capacity;
        cout<<"Load Capacity: ";
        cin>>Load_Capacity;
    }
    void display()
    {
        cout<<endl;
        cout<<"Details-------------"<<endl;
        cout<<"Seat1--"<<endl;
        s[0].get_seat_info();
         cout<<"Seat2--"<<endl;
         s[1].get_seat_info();
        cout<<"Radis is ="<<w[0].get_radius();
        cout<<endl;
        eng.get_Engine_info();
        cout<<"door mode:"<<d[0].get_mode();
        cout<<endl;
        cout<<"Maximum Acceleration: "<<maximum_acceleration<<endl;
        cout<<"Fuel Capacity: "<<fuel_capacity<<endl;
        cout<<"Load Capacity: "<<Load_Capacity<<endl;
    }
};


int main()
{
    Truck t;
    t.set_details();
    t.display();
}

