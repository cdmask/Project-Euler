// Problem 5 of project euler

//2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

// Break all into products of prime numnbers
// Find prime number times of each nuimber from 1-20
// Record maximum counts.
#include<iostream>
using namespace std;

int is_prime(long long int);
int maximum_counts(int prime,int n);
long long int smallest_muptiple(int n);


int main()

{
cout<<smallest_muptiple(20);
return 0;
}


long long int smallest_muptiple(int n)
{
 long long int sm = 1;
 int count;
 int i;
 for(i=2;i<=n;i++)
 if(is_prime(i))
{
   count = maximum_counts(i,n);
    {
        //cout<<"prime:"<<i<<" times:"<<count<<'\n';
        while(count)
        {
         sm*=i;
         count--;
        }
    }
}
 return sm;
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

// For a prime number, count maximum times it occurs from a number ranged(2~n)
// For example, 2 is a prime, maximum times it occurs is 4 in number 16.
int maximum_counts(int prime,int n)
{
  int times = 0;
  int max_times = 0;
  int i;
  int temp;
  for(i=2;i<=n;i=i+1)
  {
    //cout<<"n is:"<<n<<'\n';
    //cout<<"i is:"<<i<<'\n';
    times = 0;
    temp = i;
    while(temp%prime==0)
      {
      //  cout<<"count ++ "<<'\n';
        times++;
        temp/=prime;
      //  cout<<"changed temp is:"<<temp<<'\n';
      }
   if(times>max_times)
   max_times=times;
  // cout<<"max_times is:"<<max_times<<'\n';
  // int temp;
  // cin>>temp;
  }

  //cout<<"I am going to return a value!"<<'\n';
  return max_times;
}
