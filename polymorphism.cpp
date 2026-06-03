#include <bits/stdc++.h>

using namespace std;

//base class
class YouTubeChannel{
private:
	string Name;
	
	int subscribercount;
	list<string> publishedvideotitles;

protected:
    //protected members can be accessed by derived classes
   string ownername;
   int contentquality;
public:
	///constructor

	YouTubeChannel(string name, string owner){
		Name=name;
		ownername=owner;
		subscribercount=0;
		contentquality=0;
	}

	///class method

	void get(){
		cout<<"Ownername "<<ownername<<endl;
		cout<<"Subscriber count "<<subscribercount<<endl;
		cout<<"Videos: "<<endl;
		for(string video: publishedvideotitles){
			cout<<video<<endl;
		}

	}


	///methods

	void subscribe(){
		subscribercount++;
	}
	void unsubscribe(){
		if(subscribercount>0){
			subscribercount--;
		}
	}

	void publishvideo(string videotitle){
		publishedvideotitles.push_back(videotitle);
	}

    void checkanalytics(){
        if(contentquality>=5){
            cout<<Name<<" is doing great! Keep up the good work!"<<endl;
        }
        else{
            cout<<Name<<" needs to practice more to improve content quality."<<endl;
        }
    }

};


class CookingYouTubeChannel: public YouTubeChannel{
public:
	CookingYouTubeChannel(string name, string owner) : YouTubeChannel(name, owner) {}

    void practice(){
        cout<<ownername<<" is practicing cooking, learning new recipes, experimenting with spices..."<<endl;
        contentquality++;
    }
};

/*polymorphism is the ability of an object 
to take on many forms. It allows us to use a single interface 
to represent different types of objects. In C++, polymorphism
is achieved through inheritance and virtual functions. 
It enables us to write code that can work with objects of 
different classes in a uniform way, 
making our code more flexible and extensible.*/ 



class Singeryoutubechanne: public YouTubeChannel{
public:
	Singeryoutubechanne(string name, string owner) : YouTubeChannel(name, owner) {}

    void practice(){
        cout<<ownername<<" is practicing singing, learning new songs, perfecting their technique..."<<endl;
        contentquality++;
    }
};

int main(){

    CookingYouTubeChannel cookingytchannel("Cooking with Amy", "amy");
    Singeryoutubechanne singerytchannel("Singing with Sarah", "sarah");

    cookingytchannel.practice();
    singerytchannel.practice();
    singerytchannel.practice();
    singerytchannel.practice();
    singerytchannel.practice();
    singerytchannel.practice();
    singerytchannel.practice();


    YouTubeChannel* channel1 = &cookingytchannel;
    YouTubeChannel* channel2 = &singerytchannel;

    channel1->checkanalytics();
    channel2->checkanalytics();

}

/*different implementations of the same function checkanalytics() are 
called based on the type of object that is calling the function.
and the same method practice() is used to call different implementations.*/
