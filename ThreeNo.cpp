#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter Second number : ";
    cin>>b;
    cout<<"Enter third number : ";
    cin>>c;
    if((a+b)>c){
        cout<<"It can be side of a trianfgle"<<endl;

    }else if((b+c>a)){
        cout<<"It can be side of a triangle"<<endl;

    }else if((c+a)>b){
        cout<<"It can be side of a triangle "<<endl;

    }else{
        cout<<"It can not be a side of a triangle";
    }
    cout<<"Thank You";
    return 0;
}