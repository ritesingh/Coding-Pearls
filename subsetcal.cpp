//
// Created by kumar on 15-03-2019.
//
#include<bits/stdc++.h>

using namespace std;
vector<vector<int> > ans;
//initially i=0, empty vec curr
void subset(vector <int> arr, int i, vector<int> curr)
{
    if(i==arr.size())
    {
        ans.push_back(curr);
        return;
    }
    subset(arr,i+1,curr);
    curr.push_back(arr[i]);
    subset(arr,i+1,curr);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main()
{
    vector<int> v={1,2,4};
    vector<int> v1;
    subset(v,0,v1);
}