#pragma once
#include "B1.h"
#include "B2.h"
#include "B3.h"
#include <iostream>
using namespace std;

class D1 : public B1, public B2, private B3 {
protected:
    int d1;

public:
    D1(int valB1, int valB2, int valB3, int valD1)
        : B1(valB1), B2(valB2), B3(valB3), d1(valD1) {}

    ~D1() {}

    void show() {
        cout << "Object of Class D1:" << endl;
        B1::show();
        B2::show();
        cout << "Private inheritance from B3: b3 = " << b3 << endl;
        cout << "D1 field: d1 = " << d1 << endl;
    }
};
