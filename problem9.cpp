//problem 9 of project euler
// Find Pythagorean triplet a<b<c
// a^2 + b^2 =c^2
// a + b + c = 1000

#include<iostream>
#include<cmath>
using namespace std;
int is_squared_number(int n);

int main()
{

  for(int a=1;a<334;a++)
  for(int b=a+1;b<500;b++)
  {
   long long temp = a*a+b*b;// can not use a^2 + b^2
   if(is_squared_number(temp))
   {
     int c =sqrt(temp);

     // for debug
     //cout<<"temp is:"<<temp<<'\t';
     //cout<<"a is:"<<a<<'\t'<<"b is:"<<b<<'\t'<<"c is:"<<c<<'\n';

     if((a+b+c)==1000)
     {
       cout<<a*b*c;
       return 1;
     }
   }
  }
}

int is_squared_number(int n)
{
  for(int j=1;j<n;j++)
  if(n==j*j)
  return 1;
  return 0;
}
