#include<iostream>
using namespace std;
int main(){
    int p;
    cout<<"Enter your prcentage : ";
    cin>>p;
    if(p>100){
        cout<<"Enter a valid percentage";
    } else if(p>=81){
        cout<<"Very Good";
    }else if(p>=61){
        cout<<"Good";
    }else if (p>=41){
        cout<<"Average";
    }else if(p>=0 ){
        cout<<"Fail";
    }else{
        cout<<"Invalid percentage";
    }
    return 0;
}