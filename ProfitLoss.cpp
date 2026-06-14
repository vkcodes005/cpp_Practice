#include<iostream>
using namespace std;
int main(){
    int c,s;
    cout<<"Enter cost price:";
    cin>>c;
    cout<<"Enter selling price:";
    cin>>s;
    if(c<s){
        cout<<"Profit"<<endl;
        cout<<"He gained "<<s-c<<endl;
        cout<<"Congratulations"<<endl;
    }else if(c>s){
        cout<<"Incurred loss"<<endl;
        cout<<"You have losed "<<c-s<<endl;
        cout<<"Wait for next  opportunity"<<endl;
    }else{
        cout<<"No LOss No Gain"<<endl;
    }
    cout<<"Thank You";
    return 0;
}