#include<iostream>
#include<time.h>
using namespace std;
int main(){
    srand(time(NULL));
    int target = (rand()%100)+1;
    while(1){
        int userChoice;
        cout<<"Guess The Target: ";
        cin>>userChoice;
        if(userChoice==target){
            cout<<"Success: Correct Guess!!"<<endl;
            break;
        }
        else if(userChoice<target){
            cout<<"Your number was too small. Take a bigger guess..."<<endl;

        }
        else cout<<"Your number was too big. Take a smaller guess..."<<endl;

    }
    cout<<"......GAME OVER......"<<endl;
}