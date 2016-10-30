// Problem 1 of project Euler
// G++ compiler used
// Add the compiler bin to environment variable
// Go to the source directory
// Run g++ -o problem1 problem1.cpp
// Done
#include<iostream>
using namespace std;
int if_multiple(int);
int main()
{
  long sum =0;
  int i;
  for (i = 0; i < 1000; i++) {
    if(if_multiple(i))
    sum  =sum+i;
  }

  cout<<sum;
  return 1;

}
// If a number is a multiple of 3 or 5
int if_multiple(int x)
{
  if ((x%5==0)+(x%3==0))
  return 1;

  else
  return 0;
}
