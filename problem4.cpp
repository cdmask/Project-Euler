// Problem 4 of project euler
//A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
//Find the largest palindrome made from the product of two 3-digit numbers.

#include<iostream>
using namespace std;

 int if_palindromic(long int);
 int nth_digit(long int,long int);
 int number_of_digits(long int);

int main(void) {

long int max=0;
  for(long int i=100;i<=999;i++)
  for(long int j=100;j<=999;j++)
  {
    if(if_palindromic(i*j))
  {
     if(i*j>max)
     max=i*j;
  }
 }
 cout<<max;
  return 0;
}

int if_palindromic(long int n)
{
long int t = number_of_digits(n);
for(long int i=1;i<=t/2;i++)
  if(nth_digit(i,n)!=nth_digit(number_of_digits(n)+1-i,n))
  return 0;

  return 1;
}

int nth_digit(long int n,long int number)
{
  while(n>1)
  {
    number/=10;
    n--;
  }
  return number%10;
}

int number_of_digits(long int number) //get number of digits of n
{
  long int t=1;
  number/=10;
  while(number!=0)
  {
    number/=10;
    t+=1;
  }
  return t;
}
