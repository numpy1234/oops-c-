#include <bits/stdc++.h>

using namespace std;

class YouTubeChannel{
private:
	string Name;
	string ownername;
	int subscribercount;
	list<string> publishedvideotitles;


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

int main(){

	YouTubeChannel ytchannel("Codebeauty", "dikshant");

	YouTubeChannel ytchannel2("Amydrinks", "amy");

	ytchannel.subscribe();
	ytchannel.subscribe();
	ytchannel.subscribe();

	ytchannel.publishvideo("C++ for beginners");
	ytchannel.publishvideo("C++ OOPs concepts");

	///ytchannel.get();
	ytchannel.get();
	





	
	
}


/*encapsulation says that the properties shouldnt be 
public but pvt and the way you change the data stored 
inside the properties 
should be using methods that you expose and give 
access to the user to change the data stored inside the properties
so that you can control how the data is changed
*/
