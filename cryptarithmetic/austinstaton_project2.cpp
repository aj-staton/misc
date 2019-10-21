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
#include <utility>

using std::cin;
using std::cout;
using std::endl;
using std::map;
using std::string;

/*aken directly from techiedelight.com
*/
void PrintMap(map<char, int> const &theMap) {
  for (auto const pair: theMap) {
    cout << "{" << pair.first << ": " << pair.second << "}" << endl;
  }
}

bool IsValid(string addend, string addend2, string end) {
  int sum = 0;
  for (int i = 0; i < addend.length(); ++i) {
  }
}

int WordToValue(string word, map<char, int> lookup) {
  int value = 0;
  for (int i = 0; i < word.length(); ++i) {
    int letter_value = lookup.at(word.at(i));
    // TODO: Finish this function computation
  }
}
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
  
  // 2. Create Table of all letters.
  int length_sum = input.length() - 2;
  map<char, int> permutation;
  for (int i = 0; i < length_sum; ++i) {
    if (input.at(i) != '+' && input.at(i) != '=') {
      if (permutation.find(input.at(i)) == permutation.end()){
        // Give the map an initial value.
        permutation[input.at(i)] = 0;
      }
  }
  // PrintMap(permutation);

  // TODO: For candidate solutions, push_back() values into
  //       a vector if Criteria is met.
  
  return 0;
}

