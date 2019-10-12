/*#########################################################
Project 2 for CSCE350 solves a cryptartihmetic puzzle.
Meaning, two english words are added to produce a sum. Each
Letter in the word correlates to a single digit number.
These numbers do not have to be in the order of [A=0, B=1,
C=2,D=3,...Z=25]. This ordering is arbitrary. 

The goal is to SOLVE this puzzle, by computing the value
for each letter.

Project 2 requires a _Brute-Force_ approach. We know of
better ways to solve this problem; however, as a learning
exercise, we must use an exhaustive approach.

Copyright Holder: Austin Staton
Date: October 9th, 2019

I will be using resources from C++ Docs.
#########################################################*/

#include <iostream>
#include <map>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::map;
using std::string;

int main(int argc, char *argv[]) {

  // 1. Take in the input.
  string input;
  cin >> input;
  // 1(a). Parse the input for addends and sum.
  int delim1 = input.find('+'); // We assume identical inputs
  int delim2 = input.find('=');
  //*Note: substr(x,y) gets Y number of characters after X.
  string addend1 = input.substr(0, delim1);
  string addend2 = input.substr(delim1+1, delim2-delim1-1);
  string sum = input.substr(delim2+1, input.length());
  
  // 2. Create permutation of all values for inputs.


  return 0;
}

