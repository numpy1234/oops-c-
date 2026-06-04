#include <bits/stdc++.h>

using namespace std;

struct Youtubechannel{
    string Name;
    int Subscriberscount;

    Youtubechannel(string name, int subscriberscount){
        Name = name;
        Subscriberscount = subscriberscount;
    }
    ///overloading the == operator to compare the 
    ///objects of the class for -= operator to work

    ///have to make it a const function because
    /// we are not modifying the object

    bool operator==(const Youtubechannel& yt) const{
        return Name == yt.Name && Subscriberscount == yt.Subscriberscount;
    }


};

struct Mycollection{
    list <Youtubechannel> mychannels;

    void operator+=(Youtubechannel& yt){
        mychannels.push_back(yt);
    }

    void operator-=(Youtubechannel& yt){
        mychannels.remove(yt);
    }



};


ostream& operator<<(ostream& out, Mycollection& mycollection){
    for(Youtubechannel yt: mycollection.mychannels){
        out<<"Name: "<<yt.Name<<endl;
        out<<"Subscribers count: "<<yt.Subscriberscount<<endl;
    }
    return out;
}

int main(){

    Youtubechannel yt1= Youtubechannel("Dikshant", 1000000);
    Youtubechannel yt2= Youtubechannel("Codebeauty", 1100);
    Mycollection mycollection;
   /*


    mycollection.mychannels.push_back(yt1);
    mycollection.mychannels.push_back(yt2);
    
    for(Youtubechannel yt: mycollection.mychannels){
        cout<<"Name: "<<yt.Name<<endl;
        cout<<"Subscribers count: "<<yt.Subscriberscount<<endl;
    }

    this is the normal method to print 
    the details of the youtube channel but we 
    can also do it by operator overloading

    */


    mycollection += yt1;
    mycollection += yt2;
    mycollection -= yt2;
    
    /*this will give an error 
    even though we have defined the operator-= function 
    because we have not defined how to compare the objects
    of the class

    the reason for this is because in the original -= operator 
    it is defined for the built in data types and it compares 
    the values of the data types but in our 
    case we are trying to compare the objects of the 
    class and we have not defined how to compare 
    the objects of the class

    */
    cout<<mycollection;

   

}


/*

difference betwwen this and the previous one is 
that in the previous one is that  operator+= function
is created as a member function 
whrease the operator<< function is created as a non 
member function or a global fucntion


*/

