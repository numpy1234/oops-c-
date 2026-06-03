#include <bits/stdc++.h>

using namespace std;

class YouTubeChannel{
public:
	string Name;
	string ownername;
	int subscribercount;
	list<string> publishedvideotitles;

	///constructor

	YouTubeChannel(string name, string owner, int count ){
		Name=name;
		ownername=owner;
		subscribercount=count;
		
	}



};

int main(){

	
	YouTubeChannel ytchannel2("Amydrinks", "amy", 25);
	ytchannel2.publishedvideotitles.push_back("intro");

	





	
	cout<<"Name "<<ytchannel2.Name<<endl;
	cout<<"Ownername "<<ytchannel2.ownername<<endl;
	cout<<"Subscriber count "<<ytchannel2. subscribercount<<endl;
	cout<<"Videos: "<<endl;
	for(string video: ytchannel2.publishedvideotitles){
		cout<<video<<endl;
	}

	
	
}