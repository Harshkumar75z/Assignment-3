//Ques : Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle.

#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter 1st Side :";
    cin>>a;
    cout<<"Enter 2nd Side :";
    cin>>b;
    cout<<"Enter 3rd Side :";
    cin>>c;
    if(a==b)
    {
        if(b==c)
        cout<<"Triangle is Equilateral";
    }
    if(a==b || a==c || b==c)
    {
    cout<<"Triangle is isosceles";
    }
    else
    {
       cout<<"Triangle is scalene";
    }

    
}