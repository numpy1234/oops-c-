#include <bits/stdc++.h>

using namespace std;

class YouTubeChannel{
public:
	string Name;
	string ownername;
	int subscribercount;
	list<string> publishedvideotitles;

	///constructor

	YouTubeChannel(string name, string owner, int count ,list<string> publishedvideos){
		Name=name;
		ownername=owner;
		subscribercount=count;
		publishedvideotitles=publishedvideos;
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

};

int main(){

	YouTubeChannel ytchannel("Codebeauty", "dikshant", 1100, {"for html", "for css"});

	YouTubeChannel ytchannel2("Amydrinks", "amy", 25, {"intro"});


	///ytchannel.get();
	ytchannel.get();
	ytchannel2.get();





	
	
}


/*encapsulation says that the properties shouldnt be 
public but pvt and the way you change the data stored 
inside the properties 
should be using methods that you expose