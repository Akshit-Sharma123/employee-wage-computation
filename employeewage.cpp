#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    cout<<"Welcome to employeewage computation"<<endl;
    int ans=0;
    int hr=0;
    for(int i=0;i<20;i++){
    srand(time(0));
    int n=rand()%2;
    switch(n){
        case 0:
        //cout<<"Attendance : 0"<<endl<<"Employee is absent"<<endl;
        break;
        case 1:
        {
         int d = rand() % 2;
        switch(d){

        case 0:
        {
        int fullHr=0;
        while(hr != 100 && fullHr != 8){
             fullHr++;
             ans = ans + 20;
             hr++;
        }
        
        break;
        }

        case 1:
        int partHr = 0;

        while(hr != 100 && partHr != 4){
            partHr++;
            ans = ans + 20;
            hr = hr++;
        }
        }
    }
    }
    }
    cout<<"Monthly wage of an employee is "<<ans<<endl;
    
}

























































^G Help          ^O Write Out     ^W Where Is      ^K Cut           ^T Execute       ^C Location      M-U Undo         M-A Set Mark     M-] To Bracket   M-Q Previous     ^B Back          ^◂ Prev Word
^X Exit          ^R Read File     ^\ Replace       ^U Paste         ^J Justify       ^/ Go To Line    M-E Redo         M-6 Copy         ^Q Where Was     M-W Next         ^F Forward       ^▸ Next Word

