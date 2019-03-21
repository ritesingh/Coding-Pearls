#include<bits/stdc++.h>
using namespace std;

const char hashmap[10][10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","xyz"};

void solve(int arr[],int curr,char ans[],int n){
    if(curr==n){
        printf("%s ",ans);
        return;
    }
    for(int i=0; i<strlen(hashmap[arr[curr]]);i++){
        ans[curr]=hashmap[arr[curr]][i];
        solve(arr,curr+1,ans,n);
        if(arr[i]==0||arr[i]==1){
            return;
        }
    }
}



void letterCombinations(string A) {
    int n=A.length();
    int arr[n];
    int num;
    istringstream stream(A);
    int i=0;
    while(stream>>num)
    {
        arr[i]=num;
        i++;
    }
    char ans[n];
    solve(arr,0,ans,n);

}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        getline(cin,s);
        letterCombinations(s);}
}