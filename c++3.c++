#include <iostream>

int main() {
  int n  ;
std:: cin >> n;
  if(n > 0){
    std::cout << "n is positive " << n << std::endl;
  }
  else if (n < 0){
    std::cout << "n is negative " << n << std::endl;
  }
  else{
    std::cout << "n is zero" << n << std::endl;
  }

  for(int i = 0; i < 5; i++){
    std::cout << "heloo world " << std::endl;
  }
}