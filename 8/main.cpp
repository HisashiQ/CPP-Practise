#include <iostream>
#include <math.h>

int main(){
  double my_var;
  std::cout << "n = " << std::flush;
  std::cin >> my_var;

  while(my_var != 1){
    if (fmod(my_var,2) == 0){
      my_var /= 2;
    } else {
      my_var = (my_var * 3) + 1;
    }
    std::cout << my_var << std::endl;
  }
  return 0;
}
