#include "controller.h"
#include <iostream>
#include "iotDataQueue.h"
#include "sensor.h"
using namespace std;
controller::controller()//abstract class controller
{
    //ctor
}

controller::~controller()
{
    //dtor
}
int controller::showRdg()//showRdg is a function in class controller
{
    iotDataQueue temperature, humidity; //create two queue objects
    sensor tempSens,humSens;// create two sensor objects
    temperature.init();//initiialise temp q
    humidity.init();    //initiialise hum q
    for(int num=0; num<10; num++)//loop to get 10 readings from teh two sensors and put into queues.
    {
        int latestTemp = tempSens.getrdg();// get reading from temp sensor and assign to latestTemp
        int latestHum = humSens.getrdg();
        temperature.qput(latestTemp);//put latestTemp into  Q
        humidity.qput(latestHum);// latest humidity reading into queue
    }

    cout << "Do you want to see temperature (1) readings or Humidity (2) readings? Type 1 or 2:\n";
    cin >> choice;
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
        cout << "incorrect input...\n";//error message if incorrect choice.
    }
    return 0;
}

