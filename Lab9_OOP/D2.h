#pragma once
#include "D1.h"
#include <iostream>
using namespace std;

class D2 : public D1 {
protected:
    int d2;

public:
    D2(int valB1, int valB2, int valB3, int valD1, int valD2)
        : D1(valB1, valB2, valB3, valD1), d2(valD2) {}

    ~D2() {}

    void show() {
        cout << "Object of Class D2:" << endl;
        D1::show();
        cout << "D2 field: d2 = " << d2 << endl;
    }
};
