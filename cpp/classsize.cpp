#include <iostream>
using namespace std;
template<class T>

class Operation {
    public:
    Operation(T a, T b):x(a), y(b) {}
    T add(){
        return x + y;
    }
    T subtract();
    private:
    T x, y;
};

template<class T>
T Operation<T>::subtract(){
    return x - y;
}

class Type{
};

int main()
{
    Operation<int> im(2,3);
    Operation<double> dm(2.0,3.0);
    Type a;
    cout << im.add() << endl;
    cout << dm.subtract() << endl;
    cout << sizeof(a) << endl;
    return 0;
}
