#pragma once
#include <iostream>
using namespace std;

class B3 {
protected:
    int b3;

public:
    B3(int value) : b3(value) {}
    ~B3() {}

    void show() {
        cout << "Object of Class B3: b3 = " << b3 << endl;
    }
};
