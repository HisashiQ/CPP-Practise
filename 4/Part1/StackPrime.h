#ifndef STACKPRIME_H
#define STACKPRIME_H
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <iterator>

template<typename T>
class StackPrime {
public:
  StackPrime(std::string &sentence){
    this -> sentence = sentence;
  }

  void splitSentence(){
   std::istringstream buf(sentence);
   std::istream_iterator<std::string> beg(buf), end;

   std::vector<std::string> tokens(beg, end); // done!

   for(auto& s: tokens){
       split.push_back(s);
     }
}

void printReverse(){
  for (int i = split.size(); i >= 0; i--){
    std::cout << split[i] << " " << std::flush;
  }
  std::cout << '\n';
}

private:
  std::vector<std::string> split;
  std::string sentence;
};

#endif /* STACKPRIME_H */
