//============================================================================
// Name        : 310 A Case of the Zeros and Ones
// Author      : Almgwary
// Date        : 27-Jun-2015
//============================================================================
#include <bits/stdc++.h>

using namespace std;
vector <int> v;
int len=0;
bool check(){
    for(int i=1;i<len;++i){
        if(v[i]<=v[i-1]) return false ;
    }
    return true;
}
int main()
{
    int len;
    cin>>len;
    string s;
    cin>>s;

    for(int i=0 ;i<len;++i){
    if(len>0){
        if(i<0)++i;
        if(i+1>=len)break;
        if(s[i]!=s[i+1]){
            s.erase(i,2);
            len-=2;
            --i;
            --i;
        }
    }
    }
    cout<<len<<endl;
    return 0;
}

/**
A. Case of the Zeros and Ones
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Andrewid the Android is a galaxy-famous detective. In his free time he likes to think about strings containing zeros and ones.

Once he thought about a string of length n consisting of zeroes and ones. Consider the following operation: we choose any two adjacent positions in the string, and if one them contains 0, and the other contains 1, then we are allowed to remove these two digits from the string, obtaining a string of length n - 2 as a result.

Now Andreid thinks about what is the minimum length of the string that can remain after applying the described operation several times (possibly, zero)? Help him to calculate this number.

Input
First line of the input contains a single integer n (1 ≤ n ≤ 2·105), the length of the string that Andreid has.

The second line contains the string of length n consisting only from zeros and ones.

Output
Output the minimum length of the string that may remain after applying the described operations several times.

Sample test(s)
input
4
1100
output
0
input
5
01010
output
1
input
8
11101111
output
6
Note
In the first sample test it is possible to change the string like the following: .

In the second sample test it is possible to change the string like the following: .

In the third sample test it is possible to change the string like the following: .
*/
