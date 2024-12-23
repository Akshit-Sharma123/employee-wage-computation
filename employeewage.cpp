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
        //cout<<"Attendance : 0"<<endl<<"Employee is absent"<<endl;
        cout<<"Daily wage of an employee is "<<20*8<<endl;
    }
    else{
        //cout<<"Attendance : 1"<<endl<<"Employee is present"<<endl;
        cout<<"Half day wage of an employee is "<<20*4<<endl;
    }

}
