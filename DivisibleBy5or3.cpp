#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    if(n%5==0 || n%3==0){
        cout<<"It is divisible by 5 or 3"<<endl;
    }else{
        cout<<"It is nt divisible by 5 or 3"<<endl;
    }
    cout<<"Thank You";
    return 0;
}