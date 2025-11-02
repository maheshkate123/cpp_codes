

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
    int ContentQuality;


public:
    YoutubeChannel(string name  , string ownername){    // parameterized constructor 
        Name  = name ; 
        OwnerName = ownername ;
        SubscribersCount = 0;
        ContentQuality= 0;
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


    void CheckAnalytics(){
        if(ContentQuality < 5){
            cout << Name << " has bad content quality" << endl;
        }else{
            cout  << Name  <<  " has great content "  << endl;
        }

    }

}; 

class CookingYouChannel: public YoutubeChannel{

public:
    CookingYouChannel (string name  , string ownername):YoutubeChannel(name , ownername){

    }

    void practice() {
        cout << OwnerName <<" practicing cooking  , learning new receipes, ...." << endl;
        ContentQuality ++;
    }
};

class SingersYouChannel: public YoutubeChannel{

public:
    SingersYouChannel (string name  , string ownername):YoutubeChannel(name , ownername){

    }

    void practice() {
        cout << OwnerName <<" taking singing classes , learinig  new dance , ...." << endl;
        ContentQuality++;
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

    SingersYouChannel st1 ("yo yo sings" , "yo yo ");
    st1.practice();
    st1.practice();
    st1.practice();
    st1.practice();

    YoutubeChannel * yt3 =  &yt1;
    YoutubeChannel * yt4=  &st1;

    yt3->CheckAnalytics();
    yt4->CheckAnalytics();

    cout << endl;
   
    return 0;
    
}