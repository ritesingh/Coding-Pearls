

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector <int> > v;
    int val,n,r,c;
    cin>>n;
    cout<<"enter the number of rows and columns "<<endl;
    cin>>r>>c;

    for(int i =0;i<r;i++) {
        for (int j = 0; j < c; j++) {
            cin >> val;
            v[i].push_back(val);
        }
    }


    sort(v.begin(),v.end());

}
