#include<iostream>
using namespace std;

int main(){

    int feet, inches, totalInches;
    double centimeters;
    const double CENTIMETERS_PER_INCH = 2.54;
    const int INCHES_PER_FOOT = 12;

    cout << "Input the length in feet: " << endl;
    cin >> feet;
    cout << "Input the length in inches: " << endl;
    cin >> inches;

    totalInches = (INCHES_PER_FOOT * feet) + inches;
    centimeters = totalInches * CENTIMETERS_PER_INCH;

    cout << feet << " feet " << inches << " inches is " << centimeters << " centimeters";
}
