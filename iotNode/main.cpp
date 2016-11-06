#include <iostream>
#include "iotDataQueue.h"
#include "sensor.h"
#include "controller.h"//didn't use in the end
using namespace std;

int main()
{
    iotDataQueue temperature, humidity; //create two queue objects
    sensor tempSens,humSens; //create two instances of sensor
    temperature.init();//initiialise temp q
    humidity.init(); //initiialise hum q
    int choice;
        for(int num=0; num<10; num++)//loop to get 10 readings from sensors and put into Qs.
    {
        int latestTemp = tempSens.getrdg();// get reading from temp sensor and assign to latestTemp
        int latestHum = humSens.getrdg();
        temperature.qput(latestTemp);//put latestTemp into  Q
        humidity.qput(latestHum);
    }

    cout << "Do you want to see temperature (1) readings or Humidity (2) readings? Type 1 or 2:\n";
    cin >> choice;
//mycontroller.showrdg(choice);
    if (choice ==1)
    {
        cout << "Contents of Temperature queue: \n";
        for(int num=0; num<10; num++)//loop to cout 10 times
        {
                        cout << temperature.qget() << " degrees C\n";
        }
    }
    else if (choice==2)
    {
        cout << "Contents of Humidity queue: \n";
        for(int num=0; num<10; num++) //loop to cout 10 times
        {
                        cout << humidity.qget() << " %\n";
        }
    }
    else
    {
        cout << "incorrect input...\n";//error message
    }
    return 0;
}
