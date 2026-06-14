#include<iostream>
using namespace std;
int main(){
    float n,m;
    cout<<"Enter breadth : ";
    cin>>n;
    cout<<"Enter Length";
    cin>>m;
   float Area,Perimeter;
   Area=n*m;
   Perimeter=2*(n+m);
   if(Area>Perimeter){
    cout<<"Area is greater"<<endl;
   }else if (Area<Perimeter){
    cout<<"Perimeter is greater"<<endl;
   }else{
    cout<<"Both are equal"<<endl;
   }
   cout<<"ThankYou";

    return 0;
}