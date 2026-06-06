#include <bits/stdc++.h>

using namespace std;


class movie{

public:

    string name;
    string genre;
    float rating;

    int actorscounter;
    string* actors;



    movie(string n, string g, float r){
        name=n;
        genre=g;
        rating=r;
        actorscounter=0;
        actors= new string[actorscounter];
    }

    ///destructor


    ~movie(){
        delete [] actors;
        actors=nullptr;

    }

    ///default constructor


    movie(){
        name="";
        genre="";
        rating=0;


        actorscounter=0;
        actors=nullptr;
    }


    ///copy constructor

    ///passed by reference
    ///if we remove the & then it would not neec const but need
    ///the copy constructor since it would be pass by value
    ///but we are making the copy constructor
    ///hence this creates a cyclic loop



    movie(const movie& original){
        name=original.name;
        genre=original.genre;
        rating=original.rating;

        actorscounter=original.actorscounter;

        actors=new string[actorscounter];
        for(int i=0; i<actorscounter; i++){
            actors[i]=original.actors[i];
        }

      



    }


    ///assignment operator

 


    movie& operator=(const movie& original){

        if(&original !=this){
            name=original.name;
            genre=original.genre;
            rating=original.rating;
            actorscounter=original.actorscounter;

            delete[] actors;
            actors=new string[actorscounter];
            for(int i=0; i<actorscounter; i++){
                actors[i]=original.actors[i];
            }

      

            

            
            

        }
        return *this;
        



    }


    /*difference
    copy constructor is invoked when you want to create 
    a new object and wanna intialise it with already existing
    object


    assignment operator is invoked when you want to change 
    the values of already existing object 
    and replace them with values of some
    other object


    */




    void addactor(string newactorname){
        string* newactors =new string[actorscounter+1];
        for(int i=0; i<actorscounter; i++){
            newactors[i]=actors[i];
        }

        newactors[actorscounter]=newactorname;

        delete [] actors;

        actors=newactors;
        actorscounter++;
    }

    void printinfo(){
        cout<<name<<endl;
        cout<<genre<<endl;
        cout<<rating<<endl;
        cout<<"actors: "<<endl;

        for(int i=0; i<actorscounter; i++){
            cout<<actors[i]<<endl;
        }

        cout<<endl;


    }





};

int main(){
    movie movie1("The dark knight", "action", 9.5); ///paramterised const
    movie movie2("The lion king", "Animated", 8);

    movie1.addactor("Christian");
    movie1.addactor("health");


    movie movie3;  ///default constructor
    movie movie4(movie1); ///copy constructor

    movie4=movie2;///assignment operator
    movie4.operator=(movie2);



    movie movie5= movie1; ///copy constructor
    movie5=movie2; ///assignment


    movie1.printinfo();
    movie2.printinfo();
    movie3.printinfo();
    movie4.printinfo();
    movie5.printinfo();






}
