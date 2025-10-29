#include <iostream>
#include <list>

using namespace std ; 


class  YoutubeChannel{
public:
    string Name;
    string OwnerName;
    int SubscribersCount ;
    list<string> PublishedVideoTitles;

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

}; 


int main(){


    YoutubeChannel yt("codebeauty" , "MK");

    // yt.Name = "CodeBeauty";
    // yt.OwnerName  =  "john";
    // yt.SubscribersCount  = 3423;
    yt.PublishedVideoTitles =  {"C++ for beginners ", " OOP in c++", " html, css , js"};

    // cout << " Name::" << yt.Name <<endl;
    // cout << " Owner name ::" << yt.OwnerName <<endl;
    // cout << " subscribers ::" << yt.SubscribersCount <<endl;
    // cout << "Videoes ::" << endl;

    // for(string videoTitle : yt.PublishedVideoTitles){
    //     cout << videoTitle <<endl;
    // }
    yt.GetInfo();

    cout << endl;

    YoutubeChannel yt1("AmyJAckson", "JK"); 
    // yt1.GetInfo();     

    // yt1.Name = "Songs" ; 
    // yt1.OwnerName =  " JK";
    // yt1.SubscribersCount = 34534;
    // yt1.PublishedVideoTitles =  {"Jonny_B", "Looy _p"};


    cout << " Name::" << yt1.Name <<endl;
    cout << " Owner name ::" << yt1.OwnerName <<endl;
    cout << " subscribers ::" << yt1.SubscribersCount <<endl;
    cout << "Videoes ::" << endl;

    for(string videoTitle : yt1.PublishedVideoTitles){
        cout << videoTitle <<endl;
    }


    return 0;
    
}