#include <iostream>
#include"iotDataQueue.h"

using namespace std;

//class is syntactically similar to a structure.
//The class is C++'s basic unit of encapsulation




int main()
{
    iotDataQueue temperature, humidity; //create two queue objects

    temperature.init();
    humidity.init();

    temperature.qput(10);
    humidity.qput(19);

    temperature.qput(20);
    humidity.qput(1);

    cout << "Contents of Temperature queue: ";

    cout << temperature.qget() << " ";
    cout << temperature.qget() << "\n";

    cout << "Contents of Humidity queue: ";
    cout << humidity.qget() << " ";
    cout << humidity.qget() << "\n";

    return 0;
}
