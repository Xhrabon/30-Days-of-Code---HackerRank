/* Input : 12
           4.0
           is the best place to learn and practice coding!

   Output : 16
            8.0
            HackerRank is the best place to learn and practice coding! */


#include<bits/stdc++.h>
using namespace std;

int main()
{
  int a = 4, b;                   //initialize a integer variable with 4 value. Then, input another integer variable.
  double x = 4.0, y;              //initialize a floating variable with 4.0 value. Then, input another floating variable.
  string i = "HackerRank ", j;    //initialize a string variable with "HackerRank " value. Then, input another string variable. Here, after "HackerRank" have a whitespace.

  cin>>b;
  cin>>y;
  getline(cin>>ws, j);            //to avaoid whitespace, take input whitespace as ws variable.

  cout<<a+b<<"\n";
  cout<<fixed<<setprecision(1);  // Print 1 decimal place after the integer value.
  cout<<x+y<<"\n";
  cout<<i<<j;
}
