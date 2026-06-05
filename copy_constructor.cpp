#include <bits/stdc++.h>
using namespace std;

class Book{
public:
    string title;
    string author;

    int* rates;
    int ratescounter;

    Book(string t, string a){
        title = t;
        author = a;
        ratescounter = 2;
        rates = new int[ratescounter];
        rates[0] = 4;
        rates[1] = 5;
        
    }

  



    ~Book(){

       

        delete [] rates;
        rates=nullptr;



        cout << "Destructor called for book: " << title << endl;
    }


    /*copy constructor*/

    Book(const Book& original){
        title=original.title;
        author=original.author;
        ratescounter=original.ratescounter;
        rates=new int[ratescounter];
        for(int i=0; i<ratescounter; i++){
            rates[i]=original.rates[i];
        }
    }


};


void printbook(Book b){
    cout<<"title: "<<b.title<<endl;
    cout<<"author: "<<b.author<<endl;
    cout<<"rates: ";
    for(int i=0; i<b.ratescounter; i++){
        cout<<b.rates[i]<<" ";
    }
    cout<<endl;

    float sum=0;

    for(int i=0; i<b.ratescounter; i++){
        sum+=b.rates[i];
    } 

    cout<<"Avg rate: "<<sum/b.ratescounter<<endl;

}



int main(){
    Book book1("millionare", "m.j");
    Book book2("c++", "bartek");

    Book book3(book1); ///copy constructor invoked
    
    /*we have default copy constructor
    but if we use pointers
    we have to make our own
    */

    /*Bookk book3=book1
    this uses copy constructor
    
    book3=book1
    here its assignment operator*/

    printbook(book1);
    printbook(book2);
    


    printbook(book3);


 

    return 0;
}
