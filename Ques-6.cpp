//Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0)

#include<iostream>
using namespace std;
int main()
{
    float x,y;
    cout<<"Enter the coordinates of x-y : ";
    cin>>x>>y;
    if(x==0 && y==0)
    cout<<"lies at origin";
    if(x>0 && y==0)
    cout<<"lies on x-axis";
    if(y>0 && x==0)
    cout<<"lies on y-axis";
}