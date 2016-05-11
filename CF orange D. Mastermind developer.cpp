
//============================================================================
// Name        : orange D. Mastermind developer
// Author      : Almgwary
// Date        : 28-Jun-2015
// Thin        : M
//============================================================================

#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int T ;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int total=0;
        vector <int> v (n,0);
        for(int i=2;i<=n;++i){
            for(int j=i;j<=n;j+=i){
                //cout<<j<< " "<<v[j-1]<<" ";
                v[j-1]=!v[j-1];
                //cout<<v[j-1]<<endl;
            }
        }
        for(int i =0;i<n;++i) total+=!v[i];
    cout<<total<<endl;
    }
    return 0;
}
