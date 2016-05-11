//============================================================================
// Name        : orange A. Working Hours
// Author      : Almgwary
// Date        : 28-Jun-2015
// Thin        : M
//============================================================================

#include <bits/stdc++.h>

using namespace std;
struct p{
int x;
int y;
};

vector <p> vec(6000);
vector <int> check(6000,1);
int len;
void add (p t){
    for(int i=0;i<len;++i){
        if(check[i]){
           // cout<<"Enter "<<i<<" --> "<<t.x<<" > "<<vec[i].x <<" && "<<t.y<<" < "<<vec[i].x<<" || "<<t.y<<" > "<<vec[i].x<<" && "<< t.y<<" < "<<vec[i].y<<" "<<endl;
            if((t.x>=vec[i].x && t.x<=vec[i].y) || (t.y>=vec[i].x && t.y<=vec[i].y)|| (t.y>=vec[i].y && t.x<=vec[i].x)){
               // cout<<"interval "<<i<<endl;
                t.x=min(t.x,vec[i].x);
                t.y=max(t.y,vec[i].y);
                check[i]=0;
            }
        }
    }
    vec[len].x=t.x;
    vec[len].y=t.y;
    check[len]=1;
    len++;



}

int calculat (){
int total=0;
for(int i=0;i<len;++i){
    if(check[i]){
      //  cout<<vec[i].x<<" "<<vec[i].y<<endl;
        total+=(vec[i].y-vec[i].x);
    }

}
return total;
}

int main()
{
    int T ;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        len=0;

        //check.assign(n,1);
        for(int i=0;i<n;++i){
            p t;
            cin>>t.x;
            cin>>t.y;
            add(t);
        }
        //cout<<"------------------------------------"<<endl;
        cout<<calculat()<<endl;
    }
    return 0;
}

/**
1
3
0 5
3 6
7 8
output
7

3
0 1
2 3
3 5
*/


/**
