#include <iostream>

void fun(int a, int b){
  int n = a+ b;
  std::cout << n << "\n";
}
int add(int a, int b){
  int n = a*2*b;
  return n;
}

int main() {
  
  int a, b;
  std::cin >> a >> b;
   fun( a,  b);
  int multi = add(a, b);
  std::cout << multi << std::endl;

     return 0;

}