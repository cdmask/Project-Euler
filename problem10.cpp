//problem 10 of project euler
#include<iostream>
#include<cmath>
using namespace std;
bool is_prime(long long int x);
int main()
{
  long long int i,sum=2;
  for(i=3;i<2000000;i+=2)
  {
    if(is_prime(i))
    {
      sum+=i;
    }

  }
  cout<<sum;
  return 1;
}

bool is_prime(long long int x)
{
  if (x==2||x==3)
  return 1;
  for (long long int i=2;i<int(sqrt(x)+1);i++)
  {
  if(x%i==0)
  return 0;
  }
  // In the for loop all is checked, and there
  // is no factor, so x is prime, we return 1
  return 1;

}
