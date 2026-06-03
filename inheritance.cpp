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
public:
	///constructor

	YouTubeChannel(string name, string owner){
		Name=name;
		ownername=owner;
		subscribercount=0;
		
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

};


class CookingYouTubeChannel: public YouTubeChannel{
public:
	CookingYouTubeChannel(string name, string owner) : YouTubeChannel(name, owner) {}

    void practice(){
        cout<<ownername<<" is practicing cooking, learning new recipes, experimenting with spices..."<<endl;
    }
};


int main(){

    CookingYouTubeChannel cookingytchannel("Cooking with Amy", "amy");
    CookingYouTubeChannel cookingytchannel2("Cooking with Bob", "bob");
    cookingytchannel.publishvideo("How to make pasta");
    cookingytchannel.publishvideo("How to make pizza");
    cookingytchannel.subscribe();
    cookingytchannel.get();  
    cookingytchannel.practice();

    cookingytchannel2.publishvideo("How to make salad");
    cookingytchannel2.subscribe();
    cookingytchannel2.subscribe();
    cookingytchannel2.get();
    cookingytchannel2.practice();

    YouTubeChannel ytchannel("Tech Reviews", "john");
    ytchannel.publishvideo("Review of the latest smartphone");
    ytchannel.subscribe();
    ytchannel.get();    

}

