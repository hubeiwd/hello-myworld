#include <iostream>
using namespace std;

class Time{
    public:
        // Time();
        Time(int hour, int minutes, int second);
        // set_time();
        // get_time();
    private:
        int hour,minute,second;
};

// Time::Time(){
    // hour=0;
    // minute=0;
    // second=0;
// }

Time::Time(int hour, int minutes, int second):hour(hour),minute(minute),second(second) {}

int main()
{
    Time test;
    Time test2(5, 5, 5);
    return 0;
}