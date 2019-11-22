#include <iostream>
using namespace std;

class Time{
    public:
        Time();
        // set_time();
        // get_time();
    private:
        int hour,minute,second;
};

Time::Time(){
    hour=0;
    minute=0;
    second=0;
}

int main()
{
    Time test;
    return 0;
}