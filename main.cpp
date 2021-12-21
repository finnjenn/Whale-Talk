#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main() {
  string input;
  cout << "Please enter the string to be converted into whale language:\n";
  getline(cin,input);
  vector<char>whale_talk = {};

  for(int i = 0; i < input.length(); i++) {
    if(input[i] == 'a') {
      whale_talk.push_back('a');
    }
    else if(input[i] == 'e') {
      whale_talk.push_back('e');
      whale_talk.push_back('e');
    }
    else if(input[i] == 'i') {
      whale_talk.push_back('i');
    }
    else if(input[i] == 'o') {
      whale_talk.push_back('o');
    }
    else if(input[i] == 'u') {
      whale_talk.push_back('u');
      whale_talk.push_back('u');
    }

  }
  for(int i = 0; i < whale_talk.size(); i++) {
    cout << whale_talk.at(i);
  }

}