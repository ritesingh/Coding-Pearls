//
// Created by kumar on 15-03-2019.
//

#include<bits/stdc++.h>
using namespace std;

void strper(string str,int ind)
{
    if(ind==str.length())
    {

        cout<<str<<endl;
        return;
    }
    for(int i=ind;i<str.length();i++)
    {
        swap(str[ind],str[i]);
        strper(str,ind+1);
        swap(str[ind],str[i]);//remaking original so that further calls are not hamoered
    }
}

int main()
{
    string s="abc";
    strper(s,0);
}
