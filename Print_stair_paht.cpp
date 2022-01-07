/*
1. You are given a number n representing number of stairs in a staircase.
2. You are standing at the bottom of staircase. You are allowed to climb 1 step, 2 steps or 3 steps in one move.
3. Complete the body of printStairPaths function - without changing signature - to print the list of all paths that can be used to climb the staircase up.
Use sample input and output to take idea about output.

Format
Input
A number n
Output
Print paths (one path in each line) in order hinted by Sample output

Example
Sample Input
3
Sample Output
111
12
21
3
APPROACH:The junps 1,2 and 3 call recursively and add 1 2 or 3 according to  the jump that we made in
 each jump.
 draw recusrive tree

*/

#include <iostream>
using namespace std;

void printStairPaths(int n, string ans){
    // write your code here
    if(n==0)
    {
        cout<<ans<<endl;
        return;
    }
    else if(n<0)
    {
      //  cout<<ans<<endl;
        return;
    }

    printStairPaths(n-1,ans+'1');
    printStairPaths(n-2,ans+'2');
    printStairPaths(n-3,ans+'3');   
}
 
int main(){

    int n;
    cin >> n;
    printStairPaths(n, "");
}



