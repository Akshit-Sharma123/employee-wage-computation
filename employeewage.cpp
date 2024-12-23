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
    // if(n==0){
    //     //cout<<"Attendance : 0"<<endl<<"Employee is absent"<<endl;
    //     cout<<"Daily wage of an employee is "<<20*8<<endl;
    // }
    // else{
    //     //cout<<"Attendance : 1"<<endl<<"Employee is present"<<endl;
    //     cout<<"Half day wage of an employee is "<<20*4<<endl;
    // }
    //uc4
    // switch(n){
    //     case 0:
    //     cout<<"Daily wage of an employee is "<<20*8<<endl;
    //     break;
    //     case 1:
    //     cout<<"Part time wage of an employee is "<<20*4<<endl;
    // }

    //uc5
    //calculating wages for a month
    switch(n){
        case 0:
        cout<<"Full time monthly wage of an employee is "<<20*20*8<<endl;
        break;
        case 1:
        cout<<"Part time monthly wage of an employee is "<<20*20*4<<endl;
    }
}























































^G Help          ^O Write Out     ^W Where Is      ^K Cut           ^T Execute       ^C Location      M-U Undo         M-A Set Mark     M-] To Bracket   M-Q Previous     ^B Back          ^◂ Prev Word
^X Exit          ^R Read File     ^\ Replace       ^U Paste         ^J Justify       ^/ Go To Line    M-E Redo         M-6 Copy         ^Q Where Was     M-W Next         ^F Forward       ^▸ Next Word

