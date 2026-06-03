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

	

};

int main(){

	YouTubeChannel ytchannel("Codebeauty", "dikshant", 1100, {"for html", "for css"});

	






	

	cout<<"Name "<<ytchannel.Name<<endl;
	cout<<"Ownername "<<ytchannel.ownername<<endl;
	cout<<"Subscriber count "<<ytchannel. subscribercount<<endl;
	cout<<"Videos: "<<endl;
	for(string video: ytchannel.publishedvideotitles){
		cout<<video<<endl;
	}


	
}