/*
 * Name: Christopher Tang
 * Course: CIS 280 - Selected Languages
 * Assignment 1
 * Due: 2-1-17
 */
//This program reads in 10 numbers, outputs the sum of all 10 numbers,
//the sum of all the negative numbers, the sum of all positive numbers as
//well as their averages.
#include <iostream>
using namespace std;

//THIS IS PROTOTYPING :)
void calculate();

int main(){
  calculate();
  return 0;
}

void calculate(){
  int count = 0, sum = 0, nSum = 0, pSum = 0, nums = 0, nNums = 0, pNums = 0;
  cout << "This program calculates the sum and averages of 10 numbers.\n";
  while(count < 10){
    cout << "Enter a number: ";
    int n;
    cin >> n;
    if(cin.fail()){
      cout << "That's not a number silly.";
      cin.clear();
      cin.ignore(1000, '\n');
      continue;
    }else{
      sum += n;
      nums++;
      count++;
      if(n < 0){
        nSum += n;
        nNums++;
      }else{
        pSum += n;
        pNums++;
      }
    }
  }
  cout << "This is the sum of all numbers greater than zero: "
       << pSum << "\n"
       << "This is the sum of all numbers less than or equal to zero : "
       << nSum << "\n"
       << "This is the sum of all the numbers: " << sum << "\n";
  //Check for division by 0
  if(nNums != 0){
    cout << "This is the average of all the numbers less than or equal to zero : "
         << (double)nSum / nNums << "\n";
  }
  //Check for division by 0
  if(pNums != 0){
    cout << "This is the average of all the numbers greater than zero: "
         << (double)pSum / pNums << "\n";
  }
  cout << "This is the average of all the numbers : " << (double)sum / nums << "\n";
}
