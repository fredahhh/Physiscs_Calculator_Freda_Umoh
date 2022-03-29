#include <iostream>
#include "functions.h" //Dr_T edit
using namespace std;
int main() 
{
char input;
cout << "Enter:\n v for velocity\n a for acceleration\n m for motion \n n for newtons second law \n w for weight \n p for momentum\n";
cin >> input;

  switch (input) {
case 'v':
{

  calcVelocity(); //Dr_T Edit

break;
}

    case 'a':
{

//acceleration(double dt,double dv) function
double dt,dv;
cout <<"Enter dv and dt values\t";
cin>>dv>>dt;
double a = dv/dt;
cout<<"acceleration is:"<<a;
break;
}

    case 'm':
{ int num;
cout<<"Enter:\n 1 for v \n 2 for s \n 3 for v square \n 4 for v bar \n";
cin>>num;
switch(num)
    
  case 1:
{
double v0,a,t,v;
cout<<"enter v0, a and t \n";
cin>>v0>>a>>t;
v=v0+(a*t);
cout<<"v is equal to"<<v;
break;
}

    case 2:
{
double s,s0,v0,t,a;
cout<<"enter s0, v0 , t and a vallues";
cin>>s0>>v0>>t>>a;
s = s0+(v0*t)+(1/2)*(a*t*t);
cout<<"values of s is:"<<s;
}

    case 3:
{
double v,v2,v0,a,s,s0;
cout<<"enter v0,a,s and s0 values";
cin>>v0>>a>>s>>s0;
v=((v0*v0)+((2*a)*(s-s0)));
v2=v*v;
cout<<"v2 values is : "<<v2;
break;
}

    case 4:
{
double v_bar,v,v0;
cout<<"enter the values v and v0";
cin>>v>>v0;
v_bar=((1/2)*(v+v0));
cout<<"v bar is equal to"<<v_bar;
break;
}
default:
cout<<"Please check the input you entered";
break;

    }
}
/*case'n': //Dr_T Edit: remove cases not yet active 

//newtons second law

case'w':

  
// weight

case p;

{
//momentum
}

default
// operator is doesn't match any case constant (+, -, *, /)
cout << "Error! plese check the values you entered";
break
*/
return 0;
  }













  
