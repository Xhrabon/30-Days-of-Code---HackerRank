/* Given an integer number,
                          If  is odd, print Weird
                          If  is even and in the inclusive range of 2 to 5, print Not Weird
                          If  is even and in the inclusive range of 6 to 20, print Weird
                          If  is even and greater than 20, print Not Weird */

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int number;
  cin>>number;

  if(number % 2 != 0) cout<<"Weird";
  else 
{
  if(number>= 2 && number<=5) cout<<"Not Weird";
  else if(number>=6 && number<=20) cout<<"Weird";
  else if(number>20) cout<<"Not Weird";
}
return 0;
}

