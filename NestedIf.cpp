#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    cout<<"Enter third number : ";
    cin>>c;
    if(a>b){// a is greater b
        if(a>c){// a is greater c
            cout<<a<<" is greater.";
        }else{//c is greater than a
            cout<<c<<" is greater.";
        }
    }else{  // b is greater than a
        if(b>c){
            cout<<b<<" is greater.";
        }else{  // c is grater than b
            cout<<c<<" is greater.";    
        }
    }
    return 0;
}
