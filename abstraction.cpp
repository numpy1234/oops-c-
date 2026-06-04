#include <iostream>

using namespace std;
/*abstraction is hiding the implementation details
and providing a simple interface
to the user*/

/*create the abstract class
*/

class smartphone{

public:
    virtual void takeaselfie()=0;//pure virtual function

    /* it has the list of functionalities and
    you can use without knowing the implementation details*/


};

///we cannot create an object of the abstract class
//smartphone s; //error: 
///cannot declare variable ‘s’ to be of abstract type 
/*because it has a pure virtual function
but we can create objects of derived classes and pointers to 
the abstract class*/

class android:public smartphone{
public:
    void takeaselfie(){
        cout<<"taking a selfie with android"<<endl;
    }
};

/* the android developer
doesnt need to know anything about the 
implementation details of the iphone class
he just needs to implement the function
for android*/


class iphone:public smartphone{
public:
    void takeaselfie(){
        cout<<"taking a selfie with iphone"<<endl;
    }
};


int main(){

    smartphone* s=new android();
    s->takeaselfie();

    smartphone* s2=new iphone();
    s2->takeaselfie();

    //the developer here only knows that smartphone has a 
    ///function called takeaselfie
    /* he doest know how is it implemented  */


}
