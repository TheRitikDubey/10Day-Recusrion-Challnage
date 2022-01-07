#include <iostream>
using namespace std;

//TEST CASE
/*
A
T
TA
v
vA
vT
vTA
y
yA
yT
yTA
yv
yvA
yvT
yvTA
*/



void printSS(string ques, string ans){
    // write your code here      
    if(ques.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch=ques[0];
    string ros=ques.substr(1);
      printSS(ros,ans+ch);
    printSS(ros,ans+"");
  

    
}

int main(){
    string str;
    cin >> str;
    printSS(str, "");
}