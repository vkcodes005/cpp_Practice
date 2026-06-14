#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter number : ";
    cin>>n;
    if(n>=100 && n<=999){
        cout<<"This is the three digit number"<<endl;
        cout<<"Nice"<<endl;
    }else{
        cout<<"It is not the tthree digit number"<<endl;
        cout<<"Ok No need to Say"<<endl;
    }
    cout<<"Thank You";
    return 0;
}