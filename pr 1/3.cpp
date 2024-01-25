//Q.3 Write a program to read and print distance for feet and inches.
//For example,
//input : 
//Enter feet: 6
//Enter inches: 40
//
//output: Feet - 9, Inch - 4

#include<iostream>

using namespace std;
main()
{
//	1 feet = 12 inches

//   feet = inches / 12;

  int feet,inches;
  cout << " enter the value of feet :";
  cin >> feet;
  
  cout << " enter the value of inches :";
  cin >> inches;
  
//     feet = inches /12;
//     
//     inches=feet*12;

    feet=inches/12;
//     
     cout << feet;
     cout << inches;
  
  }