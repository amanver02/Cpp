#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Tell me Your  age"<<endl;
    cin>>age;
    if(age<18){
        cout<<"You can not come to my party"<<endl;
    }

    else if(age==18){
        cout<<"You are a kid and you will get a kid pass to the party "<<endl;
    }
    else{
        cout<<"you can come to the party"<<endl;
    }
    
return 0;
}