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

// constructor
Distance::Distance(Feet x, Inches y) : d_inches(netDistanceInInches(x, y)) {
}

// converts (feet, inches) into (inches)
Inches Distance::netDistanceInInches(Feet x, Inches y) {
    return (x * 12) + y;
}

// gets  pound value of object
Feet Distance::getFeet() {
    return d_inches / 12;
}

// gets ounce value of object
Inches Distance::getInches() {
    return d_inches % 12;
}

// converts net distance in inches back to feet and inches
Distance Distance::convertToObjectDistance(Inches y) const {
    Feet ft = y / 12;
    Inches in = y % 12;
    Distance modDistance(ft, in);
    return modDistance;
}

// operator over load for output stream
ostream &operator<<(ostream &output, Distance d) {
    if (d.getFeet() == 0 && d.getInches() == 0) {
        output << d.getInches() << " inches";
    } else if (d.getFeet() == 0 && (d.getInches() == 1 || d.getInches() == -1)) {
        output << d.getInches() << " inch";
    }else if (d.getFeet() == 0 && (d.getInches() > 1 || d.getInches() < -1)) {
        output << d.getInches() << " inches";
    }else if ((d.getFeet() == 1 || d.getFeet() == -1) && d.getInches() == 0) {
        output << d.getFeet() << " foot";
    }else if ((d.getFeet() > 1 || d.getFeet() < -1) & d.getInches() == 0) {
        output << d.getFeet() << " feet";
    }else if ((d.getFeet() == 1 && d.getInches() == 1) || (d.getFeet() == -1 && d.getInches() == -1)) {
        output << d.getFeet() << " foot " << d.getInches() << " inch";
    }else if (d.getFeet() > 1 && d.getInches() == 1) {
        output << d.getFeet() << " feet " << d.getInches() << " inch";
    }else if (d.getFeet() < -1 && d.getInches() == -1) {
        output << d.getFeet() << " feet " << d.getInches() << " inch";
    }else {
        output << d.getFeet() << " feet " << d.getInches() << " inches";
    }
    return output;
}

// operator overload for input stream
istream &operator>>(istream &input, Distance &d) {
    Feet x = 0;
    Inches y = 0;
    input >> x;
    input >> y;
    d.d_inches = (x * 12) + y;

    return input;
}

// operator overload for +
Distance Distance::operator+(const Distance &d) {
    Inches distance1 = d.d_inches;
    Inches distance2 = this->d_inches;
    return convertToObjectDistance(distance1 + distance2);
}

// operator overload for -
Distance Distance::operator-(const Distance &d) {
    Inches distance1 = this->d_inches;
    Inches distance2 = d.d_inches;
    return convertToObjectDistance(distance1 - distance2);
}

// operator overload for * (object * object)
double Distance::operator*(const Distance &d) const {
    double left_Operand = this->d_inches / 12;
    double right_Operand = d.d_inches / 12;
    double answer = (left_Operand * right_Operand)  ;
    return  answer;
}

// operator overload for / (object / object)
double Distance::operator/(const Distance &d) const {
    double left_Operand = this->d_inches;
    double right_Operand = d.d_inches;
    if (right_Operand == 0) {
        cout << "Error, you cannot divide by zero." << endl;
    }
    return left_Operand / right_Operand;
}

// operator overload for / (object / double)
Distance Distance::operator/(const double &d) const {
    Inches y = this->d_inches;
    if (d == 0) {
        cout << "Error, you cannot divide by zero." << endl;
    }
    y /= d;
    return convertToObjectDistance(y);
}

// operator overload for unary negation (converts object (lb,in) to negative values)
Distance Distance::operator-() const {
    return convertToObjectDistance(-d_inches);
}

// operator overload for ==
bool Distance::operator==(const Distance &d) const {
    return this->d_inches == d.d_inches;
}

// operator overload for !=
bool Distance::operator!=(const Distance &d) const {
    return this->d_inches != d.d_inches;
}

// operator overload for >
bool Distance::operator>(const Distance &d) const {
    return this->d_inches > d.d_inches;
}

// operator overload for <
bool Distance::operator<(const Distance &d) const {
    return this->d_inches < d.d_inches;
}

// operator overload for >=
bool Distance::operator>=(const Distance &d) const {
    return this->d_inches >= d.d_inches;
}

// operator overload for <=
bool Distance::operator<=(const Distance &d) const {
    return this->d_inches <= d.d_inches;
}

// operator overload for +=
Distance& Distance::operator+=(const Distance &d) {
    d_inches += d.d_inches;
    return *this;
}

// operator overload for -=
Distance &Distance::operator-=(const Distance &d) {
    d_inches -= d.d_inches;
    return *this;
}

