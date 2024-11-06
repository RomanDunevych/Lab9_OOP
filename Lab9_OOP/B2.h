#pragma once
#include <iostream>
using namespace std;

class B2 {
protected:
    int b2;

public:
    B2(int value) : b2(value) {}
    ~B2() {}

    void show() {
        cout << "Object of Class B2: b2 = " << b2 << endl;
    }
};
