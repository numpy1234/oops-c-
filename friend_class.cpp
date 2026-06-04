#include <bits/stdc++.h>

using namespace std;
/// we use friend classes and friend functions 
///to access private members of a class


///its not mutual, homework class can access all pvt and protected
///but eqtriangle class cant access homework class

/*friendship is not inherited 
friend function of a base class wont be friend function
of base class by default
no need to use friend function in struct as members
are public by default
*/

class equilateralTriangle {
private:
    float a;
    float circumference;
    float area;
public:
    void setA(float length) {
    this->a = length;
    this->circumference = 3 * length;
    this->area = (sqrt(3) / 4) * length * length;

    }

    ///making it friends as function
    
    ///friend void printresult(equilateralTriangle &triangle); 


    ///making it friends as class
    friend class homework;  


};
/*
we will make a friend function
which will have access to private members
and protected members
*/


class homework{
public:
    void printresult(equilateralTriangle &triangle) {
        cout << "Circumference: " << triangle.circumference << endl;
        cout << "Area: " << triangle.area << endl;
    }

};


int main() {
    equilateralTriangle et;
    et.setA(5.0);
    homework hw;
    hw.printresult(et);
    return 0;

    /* The above code will not compile because 
    circumference and area are private members of the 
    equilateralTriangle class. To access them, 
    we need to either make them public or provide getter 
    functions*/




}

