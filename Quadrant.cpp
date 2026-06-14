
#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter x";
    cin>>x;
    cout<<"Enter y";
    cin>>y;
    if(x>0 && y>0){
        cout<<"First Quadrant";   
    }else if(x<0 && y>0){
        cout<<"Second quadrant";
    }else if(x>0 && y<0){
        cout<<"Forth Quadrant";     
    }else if(x<0 && y<0){
        cout<<"Third Quadrant";
    }else if (x==0 && y==0){
        cout<<"origin";
    }else if ( x == 0 ){
        cout<<"y axis";
    }else if (y==0){
         cout<<"x axis";
    }  
    return 0;
}
