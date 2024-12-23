#include<iostream>
using namespace std;
int dailyWage(int w,int hr){
    return w*hr;
}
int main(){
    //calculate daily wage employee
    int wage,hour;
    cin>>wage>>hour;
    cout<<"The daily wage of an employee is "<<dailyWage(wage,hour);
    

}
