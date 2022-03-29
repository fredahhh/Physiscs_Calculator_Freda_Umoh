/* A header file to hold the 
main defintions of the program
Student: You
Teacher: Dr_T 10-17-2019, updated 3-24-2020 (clear screen methods for Ubuntu)
*/
#ifndef FUNCTIONS_H
#define FUNCTIONS_H
//put libraries here
#include <iostream>
#include<string>
#include "Input_Validation_Extended.h" 
using namespace std;

//put prototypes here
void calcVelocity(); //function prototype 


//put definitions here
void calcVelocity()
{
  //velocity(double ds,double dt) function or use a void function with no paramters Dr_T 
double ds,dt;
cout <<"Enter ds and dt values\t";
cin>>ds>>dt;
double v = ds/dt;
cout<<"velocity is:"<<v;
}
#endif