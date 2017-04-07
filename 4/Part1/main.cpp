#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "LinkedList.h"
#include "StackPrime.h"

int main() {
srand (time(NULL));
int randomNum;
int randomSum = 0;
int randomAvg = 0;
LinkedList<int> intList;
LinkedList<std::string> other;
other.insertAtBack("Start");
other.insertAtBack("of");
other.insertAtBack("second");
other.insertAtBack("list");

LinkedList<std::string> real;
real.insertAtBack("Start");
real.insertAtBack("of");
real.insertAtBack("First");
real.insertAtBack("list");
std::cout << "First List: " << '\n';
real.print();
std::cout << "Second List: " << '\n';
other.print();
std::cout << "Concatenating first and second list..." << "\n\n";
real.concat(&other);
std::cout << "New First List: " << '\n';
real.print();

std::cout << "\n\n\n\n\nPart 2 - Random Numbers" << "\n";
for (int i = 0; i < 10; i++){
  randomNum = rand() % 100 + 1;
  intList.insertAtFront(randomNum);
  randomSum += randomNum;
}
intList.print();
randomAvg = (randomSum / 10);
std::cout << "Sum: " << randomSum << '\n';
std::cout << "Average: " << randomAvg << '\n';

std::cout << "\n\n\n\n\nPart 3 - Reverse a sentence" << "\n";

std::string s;
std::cout << "Enter a sentence to reverse it: " << '\n';
std::getline(std::cin, s);
StackPrime<std::string> sent(s);
sent.splitSentence();
sent.printReverse();
}
