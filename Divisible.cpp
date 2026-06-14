#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    if (n%5==0 || n%3==0 && n%15!=0){
        cout<<"Satisfies the conditions"<<endl;
        cout<<"OK";
    }else if(n<=0){
        cout<<"Enter a positive integer";
    }
    else{
        cout<<"  Not satisfied";
    }
    return 0;
}