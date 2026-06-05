#include <bits/stdc++.h>    
using namespace std;

class user{

public:
    string firstname;
    string lastname;
    int age; ///this has been intialized by default constructor
    string email;

    /// empty constructor
    ///user(){}

    ///default constructor
    ///constructor name has name of the class
    ///it has no return type
    ///needs to be placed in public section of the class
    ///default constuctor has no parameter
    ///if you dont make a default constructor c++ does it own its own
    ///a default constructor is invoked every time an 
    ///object is created


    /// our own default constructor
    user(){
        firstname = "Default";
        lastname = "User";
        age = 0;
        email = "nm@gmail,com"; 

        ///these values will be assigned to the 
        ///data members of the class when 
        ///an object is created using the 
        ///default constructor

    }






    ///parameterized constructor
    ///a constructor that takes parameters is called a parameterized constructor
    ///it is used to initialize the data members of the class with specific values when an object is created
    ///it has the same name as the class and no return type
    ///it can be overloaded to have multiple constructors with different parameters


    user(string fname, string lname, int a, string e){
        firstname = fname;
        lastname = lname;
        age = a;
        email = e;

    }   



};


void getuserinfo(user &u){
    cout << "User 1: " << u.firstname<<" "<<u.lastname <<endl;
    cout<< "Age: " << u.age <<endl;
    cout<< "Email: " << u.email << endl;

}


int main() {
    ///user u1;


    user u1("John", "Doe", 30, "john.doe@example.com");
    user u2; ///this will call the default constructor and 
    ///assign the default values to the data members
    /// of the class
    

/*

    cout << "User 1: " << u1.firstname<<" "<<u1.lastname <<endl;
    cout<< "Age: " << u1.age <<endl;
    cout<< "Email: " << u1.email << endl;
                                           
*/
    getuserinfo(u1);
    getuserinfo(u2);
    return 0;

}
                 
    

    ///we can print as either making function outside
    ///or inside class
    ///or operator overloading

    ///if we make a default then we lose the default by c++

    ///cant use two default constructors at the same time
    ///we can use both default and parameterized constructor at the same time
    
