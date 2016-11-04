//problem 7 of project euler

//By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
//What is the 10 001st prime number?

#include<iostream>
using namespace std;
int is_prime(long long int x);

int main()
{
  long long int i=2;
  int index=1;
  while(index!=10001)
  {
    i++;
    if(is_prime(i))
    index++;
  }
  cout<<i;
}

int is_prime(long long int x)
{
  if (x==2||x==3)
  return 1;
  for (long long int i=2;i<=x/2;i++)
  {
  if(x%i==0)
  return 0;
  }
  // In the for loop all is checked, and there
  // is no factor, so x is prime, we return 1
  return 1;

}
