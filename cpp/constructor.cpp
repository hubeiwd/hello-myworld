#include <iostream>
using namespace std;

class CBox{
    public:
        CBox (int h, int w, int l) {
            height = h;
            width = w;
            length = l;
            cout << "constructor called." <<endl;
        }
        ~CBox () {
            cout << "destructor called." << length <<endl;
        }
        int volume () {
            return height*width*length;
        }
    private:
        int height, width, length;
};

int main()
{
    CBox box1(1,2,3);
    cout << box1.volume() << endl;
    CBox box2(2,3,4);
    cout << box2.volume() << endl;
    return 0;
}
