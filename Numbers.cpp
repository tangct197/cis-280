/*
 * Name: Christopher Tang
 * Course: CIS 280 - Selected Languages
 * Assignment 1
 * Due: 2-1-17
 */
//This program reads in 10 numbers, outputs the sum of all 10 numbers, the sum of all the negative
//numbers, the sum of all positive numbers as well as their averages.
#include <iostream>
using namespace std;
int main(){

  int n, average, negAverage, posAverage, total = 0, negative = 0, positive = 0, nums = 0,
      negNums = 0, posNums = 0;
  cout << "Enter 10 numbers.\n";
  for(int i = 0; i < 10; i++){
    cout << "Number: ";
    cin >> n;
    total += n;
    nums++;
    if(n <= 0){
      negative += n;
      negNums++;
    }else{
      positive += n;
      posNums++;
    }
  }
  cout << "This is the sum of all numbers greater than zero: " << positive << "\n"
       << "This is the sum of all numbers less than or equal to zero : " << negative << "\n"
       << "This is the sum of all the numbers: " << total << "\n";
  //Check for division by 0
  if(negNums != 0){
    negAverage = negative / negNums;
    cout << "This is the average of all the numbers less than or equal to zero : " << negAverage << "\n";
  }
  //Check for division by 0
  if(posNums != 0){
    posAverage = positive / posNums;
    cout << "This is the average of all the numbers greater than zero: " << posAverage << "\n";
  }
  average = total / nums;
  cout << "This is the average of all the numbers : " << average << "\n";
  return 0;
}
