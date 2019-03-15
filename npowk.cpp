//
// Created by kumar on 15-03-2019.
//

#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

lli npowk(lli n,lli k)
{

    if(k==0)
        return 1;
    if(k==1)
        return n;
    if(k%2!=0)
        return n*npowk(n,k/2)*npowk(n,k/2);
    else
        return npowk(n,k/2)*npowk(n,k/2);

}


int main()
{
    int n,k;
    cin>>n>>k;
    cout<<npowk(n,k);
}