//============================================================================
//      Name        : CF 330A  Vitaly and Night
//      Author      : Almgwary
//      Date        : 09-Nov-2015
//      Thin        : 10D
//============================================================================


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,t=0;
    cin>>n>>m;
    for(int i = 0;i<n;i++){
        for(int j=0;j<m;j++){

            int f,s;
            cin>>f>>s;
            if( f+s > 0)++t;

        }

    }
    cout<<t<<endl;

    return 0;
}

/**
A. Vitaly and Night
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
One day Vitaly was going home late at night and wondering: how many people aren't sleeping at that moment? To estimate, Vitaly decided to look which windows are lit in the house he was passing by at that moment.

Vitaly sees a building of n floors and 2·m windows on each floor. On each floor there are m flats numbered from 1 to m, and two consecutive windows correspond to each flat. If we number the windows from 1 to 2·m from left to right, then the j-th flat of the i-th floor has windows 2·j - 1 and 2·j in the corresponding row of windows (as usual, floors are enumerated from the bottom). Vitaly thinks that people in the flat aren't sleeping at that moment if at least one of the windows corresponding to this flat has lights on.

Given the information about the windows of the given house, your task is to calculate the number of flats where, according to Vitaly, people aren't sleeping.

Input
The first line of the input contains two integers n and m (1 ≤ n, m ≤ 100) — the number of floors in the house and the number of flats on each floor respectively.

Next n lines describe the floors from top to bottom and contain 2·m characters each. If the i-th window of the given floor has lights on, then the i-th character of this line is '1', otherwise it is '0'.

Output
Print a single integer — the number of flats that have lights on in at least one window, that is, the flats where, according to Vitaly, people aren't sleeping.

Sample test(s)
input
2 2
0 0 0 1
1 0 1 1
output
3
input
1 3
1 1 0 1 0 0
output
2
Note
In the first test case the house has two floors, two flats on each floor. That is, in total there are 4 flats. The light isn't on only on the second floor in the left flat. That is, in both rooms of the flat the light is off.

In the second test case the house has one floor and the first floor has three flats. The light is on in the leftmost flat (in both windows) and in the middle flat (in one window). In the right flat the light is off.


*/
