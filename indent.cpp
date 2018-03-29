#include <iostream>
using namespace std;



string removeLeadingSpaces(string input){
  string ret_str = "";
  bool found = false;
  for (int i = 0 ; i < input.length() ; i++){
    if (found ) { //== true){  found is already boolean
      ret_str += input[i];
    }
    // no need for ==false, use ! instead
    else if (!isspace(input[i])){ // first half of condition, found == false, is redundant
      ret_str += input[i];
      found = true;
    }
  }
  return ret_str;
}

//unnecessary function, just use the first function itself
// string unindent_code(string line){
//   return removeLeadingSpaces(line);

// }

int countChar(string line, char c){
  int ret_num = 0;
  for (int i = 0; i < line.length() ; i++){
    if (line[i] == c){
      ret_num += 1;
    }
  }
  return ret_num;


}

//the code in this function could just be put in main instead
string indent_code(){
  string line;
  string ret_str="";
  int counter = 0;
  while (getline(cin,line)){
    line = removeLeadingSpaces(line);
    counter -= countChar(line, '}');   //smart way of accounting for lines beginning with }
    for (int i = 0; i < counter ; i ++){
      ret_str += '\t';
    }
    ret_str += line + "\n";
    counter += countChar(line, '{'); 
  }
  return ret_str;
}

int main(){
  cout << indent_code() << endl;

  return 0;
}
