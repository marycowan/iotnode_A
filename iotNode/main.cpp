#include <iostream>
#include "iotDataQueue.h"
#include "sensor.h"
#include "controller.h"
using namespace std;

int main()
{
    controller mycontroller;//create instance of Machine

    mycontroller.showRdg();// run function showRdg with data from object fsm
    cout << "at last!"<< endl;



    return 0;
}
