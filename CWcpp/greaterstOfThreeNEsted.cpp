#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the first no : ";
    cin>>a;
    cout<<"Enter the second no :";
    cin>>b;
    cout<<"Enter the third No : ";
    cin>>c;
    if(a>b){ //b can never be the greatest
        if(a>c) cout<<"A is largest";
    else{
        cout<<c<<"is greatest";
    }
    }
    else{//b>a
        if(b>c){
            cout<<" A is greates";
        }
        else{
            cout<<c<<"is greatest";
        }
    }


}