#include <bits/stdc++.h>
using namespace std;

/*constructors invoked at the beginning of object creation*/
/*destructors invoked at the end of object destruction  */


///both should be in public

class Book{
public:
    string title;
    string author;

    int* rates;
    int ratescounter;

    Book(string t, string a){
        title = t;
        author = a;
        ratescounter=2;
        rates= new int[ratescounter];
        rates[0]=4;
        rates[1]=5;
        cout<<"constructor involved: "<< title<<endl;
    }

    ///no return type for destructor
    ///no parameters for destructor
    ///destructor name is same as class name but 
    ///with a tilde ~ at the beginning
    ///needs to be placed in public
    ///only one destructor per class
    ///it needs to be the member of the classs




    ~Book(){
        ///delete rates;
        /*this would still cause memory leaks as compiler has
        just deleted the pointer to the rates*/

        rates=nullptr;

        delete [] rates;



        cout << "Destructor called for book: " << title << endl;
    }


};

/*destructors invoked in the reverse order*/
/*we need to use destructors when using pointers
*/


int main(){
    Book book1("millionare", "m.j");
    Book book2("c++", "bartek");

 

    return 0;
}
