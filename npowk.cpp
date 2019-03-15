//
// Created by kumar on 15-03-2019.
//

#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli npowk(lli n,lli k)
{
    if(k!=0)
        return n*npowk(n,k-1);
    else
        return 1;
}


int main()
{
    int n,k;
    cin>>n>>k;
    cout<<npowk(n,k);
}