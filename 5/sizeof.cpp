#include <iostream>

int main(){
  int a;
  long b;
  long long c;
  std::cout << "Size of: Int = " << sizeof(int) << "\n";
  std::cout << "Size of: Long = " << sizeof(long) << "\n";
  std::cout << "Size of: Long Long = " << sizeof(long long) << "\n";

  int x[100];
  int *y;
  y = x;

  int z;

  std::cout << "z = " << std::flush;
  std::cin >> z;
  for (int i = 0; i <= z; i++){
    std::cout << "x at position " << i << " = " << x[i] << '\n';
    std::cout << "*x at position " << i << " = " << &x[i] << '\n';
    std::cout << "y at position " << i << " = " << y[i] << '\n';
    std::cout << "*y at position " << i << " = " << &y[i] << '\n';
    std::cout << "(x-y)/sizeof(int) at position " << i << " = " << ((x[i]-y[i])/sizeof(int)) << "\n\n\n\n";

  }

  std::cout << "Size of: x = " << sizeof(x) << "\n";
  std::cout << "Size of: x[1] = " << sizeof(x[1]) << "\n";

}
