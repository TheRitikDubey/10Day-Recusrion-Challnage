/*
    1. You are given a string str.
2. Complete the body of printPermutations function - without changing signature - to calculate and print all permutations of str.
Use sample input and output to take idea about permutations.

Format
Input
A string str
Output
Permutations of str in order hinted by Sample output

Example

Sample Input
abc
Sample Output
abc
acb
bac
bca
cab
cba
Approach:Recusrive call would be it can take a b or c and then call the funciton for the remaning stirng
unitl it did't hits its base case;
                //Recursive Tree:
                    abc
                  a/  b|   c\
                bc    ac     ab 
            ab/  ac\ ba/\bc ca/\cb
            c      b  c  a   b  a 
           / \    /   |   |   \  \
          abc "" acb  bac  bca \  \  
                               cab  cba
                 
          



*/


#include <iostream>
using namespace std;

void printPermutations(string str, string ans){
    // write your code here
    if(str.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<str.length();i++)
    {
        char ch=str[i];
        string l=str.substr(0,i);
        string r=str.substr(i+1);
        string ros=l+r;
        printPermutations(ros,ans+ch);
    }

}

int main(){
    string str;
    cin>>str;
    printPermutations(str,"");
    
}