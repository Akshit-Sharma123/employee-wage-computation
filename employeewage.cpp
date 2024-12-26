#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
class Employee{

    public :

    int checkAttendance(){
        int n = rand() % 2;
        return n ;
    }

    int checkPartOrFull(){
        int n = rand()%2;
        return n ;
    }
    
    void calFullTime(int &ans , int &hour){
   
    if(hour + 8 > 100){
        
        int h=( hour + 8 ) - 100;

        ans = ans + 20*(h);
    }
    else{
        ans = ans + 20 * 8;
    }

    }


    void calPartTime(int &ans,int &hour){
         if(hour + 4 > 100){
        int h = ( hour + 4)-100;
        ans = ans + 20*(h);
    }
    else{
        ans = ans + 20 * 4;
    }
    }
};
int main(){
    cout<<" Welcome to employeewage computation "<<endl;
    int ans = 0;
    int hour = 0;
    Employee m;
    for(int i = 0;i < 20; i++ ){
    srand( time(0) );
    
    int n = m.checkAttendance();

    switch(n){
        case 0:
        
        break;
        case 1:
        {
         int d = m.checkPartOrFull();
        switch(d){

        case 0:
        {
        m.calFullTime(ans,hour);
        
        break;
        }

        case 1:
          m.calPartTime(ans,hour);
        }
       }
      }
     }
    if(ans==0){
        cout<< " Employee was absent " <<endl;
    }
    else{
    cout<<" Monthly wage of an employee is " << ans << endl;
    }
}
