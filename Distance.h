//University of Washington Bothell - CSSE
// CSS342C : Proffesor Munehiro Fukuda
// Created by Eyas Rashid on 1/21/2019
//
// Purpose: this program overloads Math, Comparison, Assignment
// Stream I/O operators to work with Distance objects (ft , in).
// *** this program assumes that negative distances are valid***

#ifndef LAB1_EYASRASHID_DISTANCE_H
#define LAB1_EYASRASHID_DISTANCE_H
#include <iostream>
using namespace std;

typedef int Feet;
typedef int Inches;

class Distance {

    // input/output operators overload
    friend ostream &operator << (ostream &output, Distance w);
    friend istream &operator >> (istream &input, Distance &w);

private:

    Inches d_inches;
    // converts (feet , inches) into (inches)
    Inches netDistanceInInches(Feet x, Inches y);

    // converts (inches) back to (feet , inches)
    Distance convertToObjectDistance(Inches y) const;

public:
    // constructor
    Distance(Feet x = 0, Inches y = 0);

   // member functions
   Feet getFeet();
   Inches getInches();

   // math operators overload
   Distance operator+( const Distance& );
   Distance operator-( const Distance& );
   double operator*( const Distance& ) const;
   double operator/( const Distance& ) const;
   Distance operator/( const double& ) const;
   Distance operator-( ) const;

   // assignment operators overload
   bool operator==( const Distance& ) const;
   bool operator!=( const Distance& ) const;
   bool operator>( const Distance& ) const;
   bool operator<( const Distance& ) const;
   bool operator>=( const Distance& ) const;
   bool operator<=( const Distance& ) const;

   // comparison operators overload
   Distance& operator+=( const Distance& );
   Distance& operator-=( const Distance& );

};


#endif //LAB1_EYASRASHID_WEIGHT_H
