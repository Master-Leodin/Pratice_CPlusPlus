#include<iostream>

using namespace std;

int main(){
    string name;
    int age;
    int luckNum;

    cout<<"What is your name?"<<endl;
    cin>>name;
    cout<<"Welcome "<<name<<endl;
    cout<<"\nHow old are you?"<<endl;
    cin>>age;

        if (age < 18){
            cout<<"You have "<<age<<" years?\nYou are a young one\n"<<endl;
        }
        else{
            cout<<"You have "<<age<<" years of experience\nThat is good\n"<<endl;
        }
    cout<<"What is your favorite number?\n1 to 10?"<<endl;
    cin>>luckNum;
        while(luckNum > 10 || luckNum == 0){
            cout<<"Choose a number only 1 to 10"<<endl;
            cin>>luckNum;
        }
        for(int x = 0; luckNum > x; x++){
            cout<<"Your favorite number = "<<luckNum<<endl;
        }
}