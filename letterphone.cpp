//
// Created by kumar on 17-03-2019.
//

#include<bits/stdc++.h>
using namespace std;
const char map1[10][10]={"","","abc","def","ghi","jkl","pqrs","tuv","wxyz"};

void letterphone(int v[],int curr,char output[],int n)
{
    if(curr==n){

        printf("%s ",output);
        return;
    }
    for(int i=0;i<strlen(map1[v[curr]]);i++){

        output[curr]=map1[v[curr]][i];
        letterphone(v,curr+1,output,n);
        if(v[curr]==0||v[curr]==1)
            return;
    }

}
int main()
{
int arr[]={2,3};
int n= sizeof(arr)/ sizeof(arr[0]);
char output[n];
output[n]='\0';
letterphone(arr,0,output,n);
}