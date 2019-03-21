//
// Created by kumar on 19-03-2019.
//
#include<bits/stdc++.h>
using namespace std;


struct node{
    int val;
    node *next;
    node *down;
};




void display(node *root)
{
    if(root==NULL)
        return;
    while(root!=NULL){
        cout<<root->val<<" ";
        root = root->next;
    }


}
int main(){
    node *root=new node;
    node *root1=new node;
    int val=0;
    while(){

    }
display(root);
}