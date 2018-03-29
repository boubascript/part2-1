#include <iostream>
using namespace std;



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

string unindent_code(string line){
  return removeLeadingSpaces(line);

}

int countChar(string line, char c){
  int ret_num = 0;
  for (int i = 0; i < line.length() ; i++){
    if (line[i] == c){
      ret_num += 1;
    }
  }
  return ret_num;


}


string indent_code(){
  string line;
  string ret_str="";
  int counter = 0;
  while (getline(cin,line)){
    line = unindent_code(line);
    counter -= countChar(line, '}');
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
