#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    // int x=time(0);
    // cout<<x;
    cout<<"Welcome to employeewage computation"<<endl;
    srand(time(0));
    int n=rand()%2;
    if(n==0){
        cout<<"Attendance : 0"<<endl<<"Employee is absent"<<endl;
    }
    else{
        cout<<"Attendance : 1"<<endl<<"Employee is present"<<endl;
    }

    
}