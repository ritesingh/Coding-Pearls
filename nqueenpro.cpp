//
// Created by taranjot kaur on 15-03-2019.
//
#include<iostream>
using namespace std;

bool valid(int num){
    //can write any validity condition here I am taking true for example.
    return true;
}

int main()
{
    int num;
    cout<<"Please enter your number : ";
    cin>>num;

    //A. Given scenario in question using pretest loop, in this case a for loop
    while(valid(num)!=true)//if valid func is true loop exits else it will keep repeating
    {
        //statements here
    }


    //B. Given scenario in question using postest loop, in this case a do while  loop
    do {
        //statements here
    } while(valid(num)!=true);



    //C. Given scenario using user-located loop control mechanisms
    while(1)
    {
        if(valid(num)==true) {
            break;
        }
        else {
            continue;
        }
    }

    //D. According to me User located loops are more readable as we can put multiple conditions where the loop stops using break also we can skip some part of the loop
    //which is not necessary using continue.

}

