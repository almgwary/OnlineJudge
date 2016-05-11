
//============================================================================
// Name        : 310 B Case of Fake Numbers
// Author      : Almgwary
// Date        : 24-Jun-2015
// Thin        : 21M
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
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin>>len;
    v.assign(len,0);
    for(int i=0;i<len;++i){
    cin>>v[i];
    }

    for(int i=0;i<len;++i){
        bool x =true;
        if(check()){
            cout<<"Yes"<<endl;
            return 0;
            }
        for(int j=0;j<len;++j){
            if(x){
            ++v[j];
            v[j]%=len;
            x=false;
            }else {
            --v[j];
           if(v[j]<0)v[j]=len-1;
            x=true;
            }

        }
    }
    cout<<"No"<<endl;
    return 0;
}

/**
B. Case of Fake Numbers
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Andrewid the Android is a galaxy-famous detective. He is now investigating a case of frauds who make fake copies of the famous Stolp's gears, puzzles that are as famous as the Rubik's cube once was.

Its most important components are a button and a line of n similar gears. Each gear has n teeth containing all numbers from 0 to n - 1 in the counter-clockwise order. When you push a button, the first gear rotates clockwise, then the second gear rotates counter-clockwise, the the third gear rotates clockwise an so on.

Besides, each gear has exactly one active tooth. When a gear turns, a new active tooth is the one following after the current active tooth according to the direction of the rotation. For example, if n = 5, and the active tooth is the one containing number 0, then clockwise rotation makes the tooth with number 1 active, or the counter-clockwise rotating makes the tooth number 4 active.

Andrewid remembers that the real puzzle has the following property: you can push the button multiple times in such a way that in the end the numbers on the active teeth of the gears from first to last form sequence 0, 1, 2, ..., n - 1. Write a program that determines whether the given puzzle is real or fake.

Input
The first line contains integer n (1 ≤ n ≤ 1000) — the number of gears.

The second line contains n digits a1, a2, ..., an (0 ≤ ai ≤ n - 1) — the sequence of active teeth: the active tooth of the i-th gear contains number ai.

Output
In a single line print "Yes" (without the quotes), if the given Stolp's gears puzzle is real, and "No" (without the quotes) otherwise.

Sample test(s)
input
3
1 0 0
output
Yes
input
5
4 2 1 4 3
output
Yes
input
4
0 2 3 1
output
No
Note
In the first sample test when you push the button for the first time, the sequence of active teeth will be 2 2 1, when you push it for the second time, you get 0 1 2.
*/
