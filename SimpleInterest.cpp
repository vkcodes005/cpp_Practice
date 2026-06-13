#include<iostream>
using namespace std;
int main(){
    float p,r,t;
    cout<<"enter principle:";
    cin>>p;
    cout<<"enter rate:";
    cin>>r;
    cout<<"enter time:";
    cin>>t;
    float Simple_Interest = (p*r*t)/100;
    cout<<"Simple Interest:"<<Simple_Interest;

    return 0;
}