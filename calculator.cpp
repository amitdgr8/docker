#include <iostream>
using namespace std;
int main()
{   
    int x,y,op;
    cout << "Enter Two Numbers"<<endl;
    cin>>x>>y;
    cout<<"Choose the appopriate below option" << endl;
    cout<<"1-> ADD\n2-> SUBTRACT\n3-> MULTIPLY\n4-> DIVISION"<<endl;
    cin>>op;
    if(op==1){
        cout<<x+y<<endl;
    }else if(op==2){
        cout<<x-y<<endl;
    }else if(op==3){
        cout<<x*y<<endl;
    }else if(op==4){
        cout<<x/y<<endl;
    }else{
        cout<<"Wrong Option Choosen .... Application Exiting";
    }
    return 0;
}