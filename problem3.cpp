//Peoject euler problem 3

//The prime factors of 13195 are 5, 7, 13 and 29.
//What is the largest prime factor of the number 600851475143 ?
#include<iostream>
using namespace std;

int is_prime(long long int);


int main(void) {

long long num =  600851475143;//use long would cause overflow
long long max;
// This algorithm uses the fact that every number is product of
// prime numbers
while(1)
{

  for(long long i=3;i<=num;i+=2)
  {
    if(is_prime(i)&&num%i==0)
    {
      max = i;     //Find a prime factor
      num = num/i; //Devided by a prime factor
      break;
    }

  }
  if (num==1)
  break;
}
cout<<max;

  return 0;
}
//Need to check this for loop
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
