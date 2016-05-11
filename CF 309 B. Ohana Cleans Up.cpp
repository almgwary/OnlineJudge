
//============================================================================
// Name        : 309 B. Ohana Cleans Up
// Author      : Almgwary
// Date        : 24-Jun-2015
// Thin        : 29M
//============================================================================

#include <bits/stdc++.h>
using namespace std;



int main()
{ int n;
cin>>n;
map<string,int>m;
int mx =0 ;int target=0;
for(int i=0;i<n;++i){
    string s;
    cin>>s;
    if(m.count(s)==0){m[s]=1;
    if(m[s]>mx){
        mx=m[s];
      //  target++;
    }
    }
    else {m[s]++;
     if(m[s]>mx){
        mx=m[s];
       // target++;
    }}
}
/*
int total=0;
for(char c : target)
{
    if(c=='0')++total;
}*/
cout<<mx<<endl;
    return 0;
}
/**
B. Ohana Cleans Up
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Ohana Matsumae is trying to clean a room, which is divided up into an n by n grid of squares. Each square is initially either clean or dirty. Ohana can sweep her broom over columns of the grid. Her broom is very strange: if she sweeps over a clean square, it will become dirty, and if she sweeps over a dirty square, it will become clean. She wants to sweep some columns of the room to maximize the number of rows that are completely clean. It is not allowed to sweep over the part of the column, Ohana can only sweep the whole column.

Return the maximum number of rows that she can make completely clean.

Input
The first line of input will be a single integer n (1 ≤ n ≤ 100).

The next n lines will describe the state of the room. The i-th line will contain a binary string with n characters denoting the state of the i-th row of the room. The j-th character on this line is '1' if the j-th square in the i-th column is clean, and '0' if it is dirty.

Output
The output should be a single line containing an integer equal to a maximum possible number of rows that are completely clean.

Sample test(s)
input
4
0101
1000
1111
0101
output
2
input
3
111
111
111
output
3
Note
In the first sample, Ohana can sweep the 1st and 3rd columns. This will make the 1st and 4th row be completely clean.

In the second sample, everything is already clean, so Ohana doesn't need to do anything.
*/
