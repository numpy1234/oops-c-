#include <iostream>

using namespace std;

/*pure virtual function
each type of instrument has their own sound
our main class should provoke 
all derived classes to implement their own version */

/*the task of the base class is to make sure
every derived class must implement their o
wn makesound function*/

/*thid is an abstract class(has at least one 
pure virtual function) because it has a 
pure virtual function

*/


class instrument{
public:
    virtual void makeSound()=0; ///pure virtual function

    /*this forces all the derived classes to 
    implement their own version
    if we make the derived class without implementing 
    the pure virtual function, then that   
    derived class will also become an abstract class   
    and we cannot create objects of that class

    but in case of virtual function, if we dont 
    implement the 
    function in the derived class, then it will use the 
    base class implementation
    */
};


/*every derived class would have 
to provide their own implementation 
of makesound function*/

class accordion: public instrument{
    void makeSound(){
        cout<<"accordion playing...."<<endl;
    }

   
};


class piano: public instrument{
    void makeSound(){
        cout<<"piano playing...."<<endl;
    }

   
};

int main() {
    ///this is pointer to base class but it is pointing 
    ///to derived class object

    instrument* i1 = new accordion();
    
    ///i1->makeSound(); 

    instrument* i2 = new piano();
    ///i2->makeSound();


    instrument* instrumentArray[2]={i1, i2};
    for (int i = 0; i < 2; i++)
    {
        instrumentArray[i]->makeSound();
    }
    

    return 0;
}
