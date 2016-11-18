#include <iostream>
#include "iotDataQueue.h"
#include "sensor.h"
#include "controller.h"//didn't use in the end
using namespace std;

int main()
{
    controller mycontroller;//create instance of controller

    mycontroller.showRdg();// run function showRdg with data from object mycontoller
    cout << "at last!"<< endl;



    return 0;
}
