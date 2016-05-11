﻿//============================================================================
// Name        : 309 A. Kyoya and Photobooks
// Author      : Almgwary
// Date        : 24-Jun-2015
// Thin        : 21M
//============================================================================

#include <bits/stdc++.h>
using namespace std;



int main()
{
    string x;
    cin>>x;
    string l="",r=x;
    set<string> s ;
    do{
        for(int i=0;i<26;++i){
            string k=l+(char('a'+i))+r;
            s.insert(k);
            }
            l+=r[0];
            if(r.length()==0)break;
            r=r.substr(1,r.length());
    }while(1);
    cout<<s.size()<<endl;
    return 0;
}
/**

A. Kyoya and Photobooks
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Kyoya Ootori is selling photobooks of the Ouran High School Host Club. He has 26 photos, labeled "a" to "z", and he has compiled them into a photo booklet with some photos in some order (possibly with some photos being duplicated). A photo booklet can be described as a string of lowercase letters, consisting of the photos in the booklet in order. He now wants to sell some "special edition" photobooks, each with one extra photo inserted anywhere in the book. He wants to make as many distinct photobooks as possible, so he can make more money. He asks Haruhi, how many distinct photobooks can he make by inserting one extra photo into the photobook he already has?

Please help Haruhi solve this problem.

Input
The first line of input will be a single string s (1 ≤ |s| ≤ 20). String s consists only of lowercase English letters.

Output
Output a single integer equal to the number of distinct photobooks Kyoya Ootori can make.

Sample test(s)
input
a
output
51
input
hi
output
76
Note
In the first case, we can make 'ab','ac',...,'az','ba','ca',...,'za', and 'aa', producing a total of 51 distinct photo booklets.
*/