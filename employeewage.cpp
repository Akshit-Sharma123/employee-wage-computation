#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    cout<<"Welcome to employeewage computation"<<endl;
    srand(time(0));
    int n=rand()%2;
    switch(n){
        case 0:
        cout<<"Attendance : 0"<<endl<<"Employee is absent"<<endl;
        break;
        case 1:
         int d=rand()%2;
        switch(d==0){
        case 0:
        cout<<"Daily wage of an employee is "<<20*8<<endl;
        break;
        case 1:
        cout<<"Part time wage of an employee is "<<20*4<<endl;
       
        }
    }

    
}
