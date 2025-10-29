#include <iostream>
#include <list>

using namespace std ; 

class  YoutubeChannel{
private:
    string Name;
    // string OwnerName;
    int SubscribersCount ;
    list<string> PublishedVideoTitles;
protected:
    string OwnerName;

public:
    YoutubeChannel(string name  , string ownername){    // parameterized constructor 
        Name  = name ; 
        OwnerName = ownername ;
        SubscribersCount = 0;
    }

    void GetInfo(){             // method
    cout << " Name::" << Name <<endl;
    cout << " Owner name ::" << OwnerName <<endl;
    cout << " subscribers ::" << SubscribersCount <<endl;
    cout << "Videoes ::" << endl;

    for(string videoTitle : PublishedVideoTitles){
        cout << videoTitle <<endl;
    }

    }

    void Subscribe(){
        SubscribersCount++;
    }
    void Unsubscribe(){
        SubscribersCount--;
    }

    void PublishVideo(string title){
        PublishedVideoTitles.push_back(title);

    }

}; 

class CookingYouChannel: public YoutubeChannel{

public:
    CookingYouChannel (string name  , string ownername):YoutubeChannel(name , ownername){

    }

    void practice() {
        cout << OwnerName <<" practicing cooking  , learning new receipes, ...." << endl;
    }


};


int main(){
    CookingYouChannel yt1("Amy's kitchen"  , "Amy");
    // yt1.PublishVideo("Apple pie");
    // yt1.PublishVideo("Chocate cake");
    // yt1.Subscribe();
    // yt1.Subscribe();
    // yt1.GetInfo();
    yt1.practice();

    

    cout << endl;
    CookingYouChannel yt2("John's kitchen"  , "John");
    yt2.practice();


    cout << endl;
    YoutubeChannel yt("codebeauty" ,"YL");
    yt.GetInfo();




    return 0;
    
}