#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    cout<<"Welcome to employeewage computation"<<endl;
    srand(time(0));
    int n=rand()%2;
    if(n==0){
        cout<<"Attendance : 0"<<endl<<"Employee is absent"<<endl;
    }
    else{
       int d=rand()%2;
       if(d==0){
       cout<<"Daily wage of an employee is "<<20*8<<endl;
       }
       else{
        cout<<"Part time wage of an employee is "<<20*4<<endl;
       }
    }
}

























































^G Help          ^O Write Out     ^W Where Is      ^K Cut           ^T Execute       ^C Location      M-U Undo         M-A Set Mark     M-] To Bracket   M-Q Previous     ^B Back          ^◂ Prev Word
^X Exit          ^R Read File     ^\ Replace       ^U Paste         ^J Justify       ^/ Go To Line    M-E Redo         M-6 Copy         ^Q Where Was     M-W Next         ^F Forward       ^▸ Next Word

