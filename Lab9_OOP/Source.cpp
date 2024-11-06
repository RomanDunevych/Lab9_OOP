#include <iostream>
#include "B1.h"
#include "B2.h"
#include "B3.h"
#include "D1.h"
#include "D2.h"
using namespace std;

int main() {
    B1 b1(10);
    B2 b2(20);
    B3 b3(30);

    D1 d1(10, 20, 30, 40);
    D2 d2(10, 20, 30, 40, 50);

    cout << "Size of B1: " << sizeof(B1) << " bytes" << endl;
    b1.show();

    cout << "Size of B2: " << sizeof(B2) << " bytes" << endl;
    b2.show();

    cout << "Size of B3: " << sizeof(B3) << " bytes" << endl;
    b3.show();

    cout << "Size of D1: " << sizeof(D1) << " bytes" << endl;
    d1.show();

    cout << "Size of D2: " << sizeof(D2) << " bytes" << endl;
    d2.show();

    return 0;
}
