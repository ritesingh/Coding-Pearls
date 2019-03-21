//
// Created by kumar on 17-03-2019.
//

#include<bits/stdc++.h>
using namespace std;

struct node {
    int val;
    node* next;
};

void insert(node **head ,int data )
{
    node *m= new node;
    m->val = data;
    m-> next = *head;
    *head = m;
}



int main(){
    //negative value at run time shows run time error

}