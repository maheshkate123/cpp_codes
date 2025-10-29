#include <iostream>
#include <list>

using namespace std;


class YoutubeChaneel{
public:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishVideositles;
};

int main(){

    YoutubeChaneel yt1;
    yt1.Name =  " CodeBeauty" ; 
    yt1.OwnerName =  "MK";
    yt1.SubscribersCount  =  3456;
    yt1.PublishVideositles =  {" c++ for beginners videoe  1" ,  " HTML<CSS<JS videoe2" ," C++ OOPs"};

    cout << " Name ::" << yt1.Name << endl;
    cout << " OwnerName ::" << yt1.OwnerName << endl;
    cout << " Subscrivers  ::" << yt1.SubscribersCount << endl;
    cout << "Videos "<< endl;


    for( string videoTitle : yt1.PublishVideositles){
        cout << videoTitle << endl;
    }

}