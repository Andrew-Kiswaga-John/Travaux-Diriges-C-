#include <iostream>

using namespace std;

class Test {
public:
    static int callCount;

    void call() {
        callCount++; 
    }
};


int Test::callCount = 0;

int main() {
    Test testObject;

    testObject.call(); 
    testObject.call(); 
    testObject.call(); 

    cout << "La fonction 'call' a été appelée " << Test::callCount << " fois." << endl;

    return 0;
}
