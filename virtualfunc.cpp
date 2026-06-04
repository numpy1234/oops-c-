#include <iostream>

using namespace std;

/*virtual function is defined in 
base class and then defined in derived class
main purpose is to give runtime polymorphism*
if the base class has a virtual function, then 
the derived class   
can override it. the most derived class will 
have the final implementation. if the derived clsss doesnt
have that function, it will use the base class implementation */


class instrument{
public:
    virtual void makeSound(){
        cout<<"instrument playing...."<<endl;
    }
};


class accordion: public instrument{
    void makeSound(){
        cout<<"accordion playing...."<<endl;
    }

    ///if I delete this then output would be instrument playing.... because it will use the base class implementation

};

int main() {
    ///this is pointer to base class but it is pointing 
    ///to derived class object

    instrument* i1 = new accordion();
    
    i1->makeSound(); 
    
    ///without virtual function, it will call the base 
    ///class function

    ///with virtual function, it will call the derived class 
    ///function
    return 0;
}
