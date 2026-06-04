/*difference between struct and class in C++    

Struct

Members are public by default.

struct Student {
    string name;
    int age;
};

Student s;
s.name = "Dikshant";   // Allowed

Equivalent to:

struct Student {
public:
    string name;
    int age;
};


Class

Members are private by default.

class Student {
    string name;
    int age;
};

Student s;
// s.name = "Dikshant";   // Error

Equivalent to:

class Student {
private:
    string name;
    int age;
};






Struct

Inheritance is public by default.

struct A {
};

struct B : A {
};

Equivalent to:

struct B : public A {
};
Class

Inheritance is private by default.

class A {
};

class B : A {
};

Equivalent to:

class B : private A {
};

*/


#include<iostream>
#include <string>

using namespace std;

struct Youtubechannel{
    string Name;
    int Subscriberscount;

    Youtubechannel(string name, int subscriberscount){
        Name = name;
        Subscriberscount = subscriberscount;
    }


};

/*void operator<<(ostream &out, Youtubechannel &yt){
    out<<"Name: "<<yt.Name<<endl;
    out<<"Subscribers count: "<<yt.Subscriberscount<<endl;
}

*/

ostream& operator<<(ostream &out, Youtubechannel &yt){
    out<<"Name: "<<yt.Name<<endl;
    out<<"Subscribers count: "<<yt.Subscriberscount<<endl;
    return out;
}



int main(){
    Youtubechannel yt1= Youtubechannel("Dikshant", 1000000);
    

    /* if we have done cout<<yt1  normally 
    it wouldnt work 
    hence we have overloaded the << operator using 
    the void fucntion above
    */



    Youtubechannel yt2= Youtubechannel("mysecondchannel", 5000);
   
    


    /*cout<<yt1<<yt2 if we do this it will give error because we 
    have not 
    defined how to print the object of the class

    hence we have overloaded the << operator using 
    the ostream& function above
    */


    /* 
    
    cout<<yt1<<yt2;
    or we can also do it like

    cout<<yt1;
    operator<<(cout, yt2);  
    

    */




}

