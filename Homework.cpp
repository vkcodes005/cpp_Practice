#include<iostream>
using namespace std;
int main(){
    int r,s,a;
    cout<<"Enter the age of Ram : ";
    cin>>r;
    cout<<"Enter the age of Shyam : ";
    cin>>s;
    cout<<"Enter the age of Ajay : ";
    cin>>a;
    if(r<=s){
        if(r<=a){
        cout<<"Ram is youngest ";
        }
        else{
            cout<<"Ajay is youngest";
        }
    }
    else {            
        if(s<a){            
            cout<<"Shyam  is youngest.";
        }else{       
            cout<<"Ajay is youngest.";
        }
    }
    return 0;
}
