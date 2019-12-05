#include<iostream>
using namespace std;

int main()
{

do{
cout<<"******Menu*******";
cout<<"1.add\n 2.substract\n 3.multiply\n 4.divide\n";
int n,a,b;
cout<<"enter the two numbers";
cin>>a>>b;
cout<<"enter your choice";
cin>>n;
switch(n){
case 1: cout<<"result is = "<<a+b<<endl;
	break;
case 2:  cout<<"result is = "<<a-b<<endl;
	break;
case 3: cout<<"result is = "<<a*b<<endl;
        break;
case 4: cout<<"result is = "<<a/b<<endl;
	break;
default: cout<<"wrong choice"<<endl;
         }
   }while(1);




}






}
