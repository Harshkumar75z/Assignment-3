// Ques : If the marks of A, B and C are input through the keyboard, write a program to determine the student scoring least marks.

#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter Marks1 : ";
    cin>>a;
    cout<<"Enter Marks2 : ";
    cin>>b;
    cout<<"Enter Marks3 : ";
    cin>>c;
    if(a<b)
    {
        if(a<c)
        {
            cout<<"Marks1 is least";
        }
    }
    if(b<a)
    {
        if(b<c)
        {
            cout<<"Marks2 is least";
        }
    }
    if(c<a)
    {
        if(c<b)
        {
            cout<<"Marks3 is least";
        }
    }
        
}