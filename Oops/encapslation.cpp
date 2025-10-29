#include <iostream>
#include <list>

using namespace std ; 

class  YoutubeChannel{
private:
    string Name;
    string OwnerName;
    int SubscribersCount ;
    list<string> PublishedVideoTitles;

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


int main(){


    YoutubeChannel yt("codebeauty" , "MK");
    // yt.PublishedVideoTitles = {"C++ for beginners ", " OOP in c++", " html, css , js"};
    // yt.SubscribersCount  = 100000;
    // yt.Subscribe();
    // yt.Subscribe();
    // yt.Subscribe();
    // yt.Subscribe();
    yt.PublishVideo("C++ for beginners ");
    yt.PublishVideo("Html ,css , js");
    yt.PublishVideo("OOPs in c++");
    yt.Unsubscribe();
    yt.GetInfo();

    cout << endl;

    YoutubeChannel yt1("AmyJAckson", "JK"); 

    return 0;
    
}