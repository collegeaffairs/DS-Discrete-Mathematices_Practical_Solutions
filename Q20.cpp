/*
Given a full m-ary tree with i internal vertices. Write a program to find the number of leaf nodes.

*/

#include <iostream>

using namespace std;

int main()

//Q20--.
{
    cout<<"enter the value of m ( for a full m ary tree) : ";
    int m=0;
    cin>>m;

    cout<<"enter the no. of internal verticels(note: root is i.v) = ";
    int i=0;
    cin>>i;

    cout<<"tne number of leaf nodes = ";
    cout<<((m-1)*i +1);
    return 0;
}
