#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter x-axis : ";
    cin>>x;
    cout<<"Enter y-axis : ";
    cin>>y;
    if(x>0 && y>0){
        cout<<"First quadrant";
    }else if(x<0 && y>0){
        cout<<"Second quadrant";
    }else if(x<0 && y<0){
        cout<<"third quadrant";
    }else if(x>0 && y<0){
        cout<<"Forth quadrant";
    }
    else if(x==0){
        cout<<"On x-axis";
    }
    else if (x==0 && y==0){
        cout<<"On the origin";
    }
    else {
        cout<<"On y-axis";
    }
      return 0;
}