#include <iostream>

using namespace std;

//class is syntactically similar to a structure.
//The class is C++'s basic unit of encapsulation
class iotDataQueue{
    int q[10];
    int sloc, rloc;

public:
    //these are memeber functions
    //An object forms a bond between code and data
    //A memeber function has access to the private parts of the class of which it is a memeber
    //To create a memeber fucntion, we specify it's prototype within the class declaration
    void init();
    void qput(int i);
    int qget();
};

void iotDataQueue::init()
{
    rloc = sloc = 0;
}

//initialise the queue
void iotDataQueue::qput(int i)
{
    if(sloc==100){
        cout << "queue is full. \n";
        return;
    }
    sloc++;
    q[sloc] = i;
}

//get an integer from the queue
int iotDataQueue::qget()
{
    if(rloc == sloc){
        cout << "queue underflow. \n";
        return 0;
    }
    rloc++;
    return q[rloc];
}

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
