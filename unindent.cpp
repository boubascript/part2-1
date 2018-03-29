#include <iostream>
using namespace std;

//Boubacar - this file isn't needed because the function is written directly in indent.cpp,
// This entire file can be deleted 

string removeLeadingSpaces(string input){
  string ret_str = "";
  bool found = false;
  for (int i = 0 ; i < input.length() ; i++){
    if (found == true){
      ret_str += input[i];
    }
    else if (found == false && isspace(input[i]) == false){
      ret_str += input[i];
      found = true;
    }
  }
  return ret_str;
}


int main(){
  cout << removeLeadingSpaces("       int x = 1;  ") << endl;
  return 0;
}
