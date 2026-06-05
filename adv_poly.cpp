#include <bits/stdc++.h>

using namespace std;

class student{

public:
    string name;
    int age;
    char gender;

    virtual void study()=0;

};


class programmingstudent: public student{
public:
    void study(){
        cout<<"Learning programming"<<endl;
    }




};


class artstudent: public student{

public:
    void study(){
        cout<<"Learning art"<<endl;
    }

    


};



class musicstudent: public student{
public:
    void study(){
        cout<<"Learning music"<<endl;
    }



    


};

int main(){


    ///polymorphism



    student* students[3];

    ///array pointer which can store pointers
    ///pointing to students type or any type derived from students class

    students[0]=new programmingstudent();
    students[1]=new artstudent();
    students[2]=new musicstudent();

    for(int i=0; i<=2; i++){
        students[i]->study();
    }

    /*deallocate the spaces
    
    for(int i=0; i<=2; i++){
        delete students[i];

        
    }*/




}
