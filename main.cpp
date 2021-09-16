#include <iostream>
using namespace std;

int main() 
{
  int *p;
  int count=7;

  cout<<"p ="<<p<<endl;
  cout<<"count ="<<count<<endl;

  cout<<"Memory address of p ="<<&p<<endl;
  cout<<"Memory address of count ="<<&count<<endl;

  p = &count;

  cout<<"p = "<<p<<endl;
  cout<<"Value of the location pointes by p ="<<*p<<endl;
  
  *p = 10;

  cout<<"Now value of p is "<<*p<<endl;
  cout<<"Count = "<<count<<endl;

  int *a;
  a=new int;

  delete a;

  return 0;
}