//Ques : Given the length and breadth of a rectangle, write a program to find whether numerically the area of the rectangle is greater than its perimeter.

#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter Length : ";
    float Length,Breadth,Area,Perimeter;
    cin>>Length;
    cout<<"Enter Breadth : ";
    cin>>Breadth;
    Area=Length*Breadth;
    cout<<"Area of The Rectangle is : "<<Area<<endl;
    Perimeter=2*(Length * Breadth);
    cout<<"Perimeter of The Rectangle is : "<<Perimeter<<endl;
    if(Area>Perimeter)
    cout<<"Area of Reactangle is Greater";
    else
    cout<<"Perimeter of Reactangle is Greater";
}