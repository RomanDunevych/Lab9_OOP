#pragma once
#include <iostream>
using namespace std;

class B1 {
protected:
    int b1;

public:
    B1(int value) : b1(value) {}
    ~B1() {}

    void show() {
        cout << "Object of Class B1: b1 = " << b1 << endl;
    }
};
