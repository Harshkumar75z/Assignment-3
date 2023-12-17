// Ques : Given the radius of the circle predict whether numerically area of this circle is larger than the circumference or not.
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter Radius :";
    float Radius,Area,cirm;
    cin>>Radius;
    Area=Radius*3.14*Radius;
    cout<<"Area of circle is "<<Area<<endl;
    cirm=2*3.14*Radius;
    cout<<"cirm of the circle is "<<cirm<<endl;
    if(Area>cirm)
    cout<<"Area of circle is larger";
    else
    cout<<"cirm of circle is larger";    
}