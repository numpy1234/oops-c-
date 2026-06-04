#include <bits/stdc++.h>

using namespace std;

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

    ///making it friends
    
    friend void printresult(equilateralTriangle &triangle); 

};
/*
we will make a friend function
which will have access to private members
and protected members
*/

void printresult(equilateralTriangle &triangle) {
    cout << "Circumference: " << triangle.circumference << endl;
    cout << "Area: " << triangle.area << endl;
}

int main() {
    equilateralTriangle et;
    et.setA(5.0);
    printresult(et);
    return 0;

    /* The above code will not compile because 
    circumference and area are private members of the 
    equilateralTriangle class. To access them, 
    we need to either make them public or provide getter 
    functions*/






}

