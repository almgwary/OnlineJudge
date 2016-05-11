
    /**
    * @name	  : CF 311 B. Pasha and Tea
    * @author : almgwary
    * @date   : 30 jun 2015
    * @time	  : M
    */


#include <bits/stdc++.h>

using namespace std;
/**
 after sort cups take min of girl and (boy/2) this is the minimum 
*/
int main()
{
     int n,w;
     cin>>n>>w;
     vector <int> v(2*n);
     for(int i=0;i<2*n;++i)
        cin>>v[i];
     sort(v.begin(),v.end());
     long double minimum = (long double)min(( long double)v[0],( long double)v[(n)]/2.0);
     cout<< setprecision(12)<<min((long double)w,3.0*n*minimum)<<endl;
    return 0;
}




/**

                                    B. Pasha and Tea
                                    time limit per test1 second
                                    memory limit per test256 megabytes
                                    inputstandard input
                                    outputstandard output
Pasha decided to invite his friends to a tea party. For that occasion, he has a large teapot with the capacity of w milliliters and 2n tea cups, each cup is for one of Pasha's friends. The i-th cup can hold at most ai milliliters of water.

It turned out that among Pasha's friends there are exactly n boys and exactly n girls and all of them are going to come to the tea party. To please everyone, Pasha decided to pour the water for the tea as follows:

Pasha can boil the teapot exactly once by pouring there at most w milliliters of water;
Pasha pours the same amount of water to each girl;
Pasha pours the same amount of water to each boy;
if each girl gets x milliliters of water, then each boy gets 2x milliliters of water.
In the other words, each boy should get two times more water than each girl does.

Pasha is very kind and polite, so he wants to maximize the total amount of the water that he pours to his friends. Your task is to help him and determine the optimum distribution of cups between Pasha's friends.

Input
The first line of the input contains two integers, n and w (1 ≤ n ≤ 105, 1 ≤ w ≤ 109) — the number of Pasha's friends that are boys (equal to the number of Pasha's friends that are girls) and the capacity of Pasha's teapot in milliliters.

The second line of the input contains the sequence of integers ai (1 ≤ ai ≤ 109, 1 ≤ i ≤ 2n) — the capacities of Pasha's tea cups in milliliters.

Output
Print a single real number — the maximum total amount of water in milliliters that Pasha can pour to his friends without violating the given conditions. Your answer will be considered correct if its absolute or relative error doesn't exceed 10 - 6.

Sample test(s)
input
2 4
1 1 1 1
output
3
input
3 18
4 4 4 2 2 2
output
18
input
1 5
2 3
output
4.5
Note
Pasha also has candies that he is going to give to girls but that is another task...*/























