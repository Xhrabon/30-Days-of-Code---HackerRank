/* Given, Your regular meal cost,
               tip in percentage,
               tax in percentage. */

#include<bits/stdc++.h>
using namespace std;

int main()
{
  double mealCost, tipInPercentage, taxInPercentage;
  cin>>mealCost>>tipInPercentage>>taxInPercentage;

  double tipInCash = (mealCost*tipInPercentage) / 100;
  double taxInCash = (mealCost*taxInPercentage) / 100;

  double totalCost = mealCost + tipInCash + taxInCash;

  int roundedTotalCost = static_cast<int>(round(totalCost));  // Here, we calculate the rounded figure.

  cout<<roundedTotalCost;

}

  

  
