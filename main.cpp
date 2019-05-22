//University of Washington Bothell - CSSE
// CSS342C : Proffesor Munehiro Fukuda
// Created by Eyas Rashid on 1/21/2019
//
// Purpose: this program overloads Math, Comparison, Assignment
// Stream I/O operators to work with Distance objects (ft , in).
// *** this program assumes that negative distances are valid***

#include <iostream>
#include "Distance.h"
using namespace std;

int main() {
    Distance d1(1, 1), d2(3, 3), d3(3, 3), d4(1), d5, d6, d7 (1.1 , 2.2), d8(1.1, 2) ,d9(1, 2.2) ,d10(1.22);

    cout << "type two integers for d6: ";
    cin >> d6;
    cout << endl;

    cout << "d1 = " << d1 << endl;
    cout << "d2 = " << d2 << endl;
    cout << "d3 = " << d3 << endl;
    cout << "d4 = " << d4 << endl;
    cout << "d5 = " << d5 << endl;
    cout << "d6 = " << d6 << endl;
    cout << endl;

    cout << "(Constructed with doubles for feet and inches ) d7 = " << d7 << endl;
    cout << "(Constructed with doubles for feet )            d8 = " << d8 << endl;
    cout << "(Constructed with doubles for inches only)           d9 = " << d9 << endl;
    cout << "(Constructed with doubles for feet only )       d10 = " << d10 << endl;
    cout << endl;

    cout << "Test: d7.getFeet() = " << d7.getFeet() << endl;
    cout << "Test: d7.getInches() = " << d7.getInches() << endl;
    cout << endl;

    cout << "-d4 = " << -d4 << endl;
    cout << "d1 + d2 + d3 = " << (d1 + d2 + d3) << endl;
    cout << "d1 - d2 - d3 = " << d1 - d2 - d3 << endl;
    cout << "SqFeet( d1 * d2 ) = " << d1 * d2 << endl;
    cout << "Ratio ( d1 / d2 ) = " << d1 / d2 << endl;
    cout << "d1 / 2.5 = " << d1 / 2.5 << endl;
    cout << endl;

    cout << "d1 <= d2 is " << ((d1 <= d2) ? "true" : "false") << endl;
    cout << "d2 >= d3 is " << ((d2 >= d3) ? "true" : "false") << endl;
    cout << "d3 > d4 is " << ((d3 > d4) ? "true" : "false") << endl;
    cout << "d4 < d5 is " << ((d4 < d5) ? "true" : "false") << endl;
    cout << "d1 == d1 is " << ((d1 == d1) ? "true" : "false") << endl;
    cout << "d1 != d1 is " << ((d1 != d1) ? "true" : "false") << endl;
    cout << endl;

    cout << "(d1 += d2) += d3 is " << ((d1 += d2) += d3) << endl;
    cout << "d1 = " << d1 << endl;
    cout << "(d5 = 0) is " << (d5 = 0) << endl;
    cout << "(d5 -= d1) -= d2 is " << ((d5 -= d1) -= d2) << endl;
    cout << " d1 / d5 = " << d1 / d5 << endl;
}
