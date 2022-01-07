/*
. You are given a string str. The string str will contains numbers only, where each number stands for a key pressed on a mobile phone.
2. The following list is the key to characters map
    0 -> .;
   1 -> abc
   2 -> def
   3 -> ghi
   4 -> jkl
   5 -> mno
   6 -> pqrs
   7 -> tu
   8 -> vwx
   9 -> yz
    TEST CASES:
    Example
    Sample Input
    78
    Sample Output
    tv
    tw
    tx
    uv
    uw
    ux



*/
#include <iostream>
using namespace std;

string codes[] = {".;", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};
/*
APPROACH: suppose we have 78 ,first call for 7(tu) add ans+'t' && ans+'u' then call resusrively 
call for 8("vwx"),ans which is updated to t & u.
now add v+t && w+t, x+t in ans and same for rest of the other strings using loop and when we
hit base case just print  and return (TRY TO DRAW RECUSIVE TREE OR PEPCODING VIDEO).
*/

//Suggestion:Go to LEETCODE and solve this wihtout using global variable:)
void printKPC(string str, string ans){
    // write your code here
    if(str.length()==0)
    {
        cout<<ans<<endl;
        return;
    }

    char ch=str[0];//5
    string ros=str.substr(1); //76
    string s=codes[ch-'0'];
    for(int i=0;i<s.length();i++)
    {
        char x=s[i];
            printKPC(ros,ans+x);
    }

    
}

int main(){
    string str;
    cin >> str;
    printKPC(str, "");
}