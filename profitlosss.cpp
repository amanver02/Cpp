#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"Enter the cost price : ";
    cin>>cp;
    int sp;
    cout<<"Enter the celling Price";
    cin>>sp;
    if(sp>cp){
        cout<<"Profit";
    }
    
if(sp<cp){
        cout<<"Loss";
    }
    if(sp==cp){
        cout<<"No profit no loss";
    }
}
