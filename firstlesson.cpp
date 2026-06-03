#include <bits/stdc++.h>

using namespace std;

class YouTubeChannel{
public:
	string Name;
	string ownername;
	int subscribercount;
	list<string> publishedvideotitles;

	

};

int main(){

	




	YouTubeChannel ytchannel;
	ytchannel.Name ="Codebeauty";
	ytchannel.ownername="dikshant";
	ytchannel.subscribercount=1100;
	ytchannel.publishedvideotitles={"for html", "for css"};




	cout<<"Name "<<ytchannel.Name<<endl;
	cout<<"Ownername "<<ytchannel.ownername<<endl;
	cout<<"Subscriber count "<<ytchannel. subscribercount<<endl;
	cout<<"Videos: "<<endl;
	for(string video: ytchannel.publishedvideotitles){
		cout<<video<<endl;
	}

	
	
}