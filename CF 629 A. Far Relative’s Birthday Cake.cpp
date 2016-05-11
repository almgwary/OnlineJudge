//============================================================================
// Name        : 629 A. Far Relative’s Birthday Cake
// Author      : Almgwary
// Date        : 26-Feb-2016
// Thin        : 30M
//============================================================================

#include <bits/stdc++.h>
using namespace std;
int comult(int n)
{
    if(n%2==0){
            return n* ((n-1)/2) + (n/2) ;
    }else{
      return  n* ((n-1)/2)  ;
    }
}
int main() {
  int n,total=0;
  char c;
  cin >> n ;
  vector<int> col(n,0),row(n,0);
  for(int i=0;i<n;++i)
  {
      for(int j=0;j<n;++j){
        cin>>c;
        if(c=='.');
        else
        {
            col[i]++;
            row[j]++;
        }
      }
  }


 for(int i =0; i<n;i++){
    total+=comult(col[i]);
    total+=comult(row[i]);
 }
cout<<total<<endl;
  return 0;
}


/**
    comulative sum less than ( n ):
        case(even) :
                =(n-1)/2 * n + (n/2)
        case(odd)  :
                = (n-1)/2 *n
*/

/**
A. Far Relative’s Birthday Cake
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Door's family is going celebrate Famil Doors's birthday party. They love Famil Door so they are planning to make his birthday cake weird!

The cake is a n × n square consisting of equal squares with side length 1. Each square is either empty or consists of a single chocolate. They bought the cake and randomly started to put the chocolates on the cake. The value of Famil Door's happiness will be equal to the number of pairs of cells with chocolates that are in the same row or in the same column of the cake. Famil Doors's family is wondering what is the amount of happiness of Famil going to be?

Please, note that any pair can be counted no more than once, as two different cells can't share both the same row and the same column.

Input
In the first line of the input, you are given a single integer n (1 ≤ n ≤ 100) — the length of the side of the cake.

Then follow n lines, each containing n characters. Empty cells are denoted with '.', while cells that contain chocolates are denoted by 'C'.

Output
Print the value of Famil Door's happiness, i.e. the number of pairs of chocolate pieces that share the same row or the same column.

Examples
input
3
.CC
C..
C.C
output
4
input
4
CC..
C..C
.CC.
.CC.
output
9
Note
If we number rows from top to bottom and columns from left to right, then, pieces that share the same row in the first sample are:

(1, 2) and (1, 3)
(3, 1) and (3, 3)
Pieces that share the same column are:
(2, 1) and (3, 1)
(1, 3) and (3, 3)
*/
