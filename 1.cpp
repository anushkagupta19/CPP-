// Accept the length and width of a rectangle. 
// Calculate & print the area and perimiter.

#include<iostream>
using namespace std;

int main(){
    float length,width;
    cout<<"Enter length of rectangle: ";
    cin>>length;
    cout<<"Enter width of rectangle: ";
    cin>>width;

    float area=length*width;
    float perimeter=2*(length+width);

    cout<<"Area: "<<area<<endl;
    cout<<"Perimeter: "<<perimeter<<endl;
}