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

node *merge(node *a,node *b){
    if(a==NULL)
        return b;
    if(b==NULL)
        return a;
    node *mll;
    if(a->val>b->val){
        mll=b;
        mll->next=merge(a,b->next);
    }
    else{
        mll=a;
        mll->next=merge(a->next,b);
    }
        return mll;
}

node *create(int data){
    node *temp=new node;
    temp->val=data;
    temp->next=NULL;
    return temp;
}

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
    root=create(1);
    root->next=create(3);
    root->next->next=create(5);
    root->next->next->next=create(17);
    root->next->next->next->next=create(19);
    root->next->next->next->next->next=create(21);
    root1=create(6);
    root1->next=create(8);
    root1->next->next=create(10);
    root1->next->next->next=create(18);

    node *ans=merge(root,root1);
    display(ans);

}