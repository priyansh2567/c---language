#include <iostream>

#include <string>
 class learn{
  public:

  std::string ame;
  int n;
  float t;

  void lern(){
    std::cout << ame << '\n'<< n <<'\n'<< t<< '\n' << std::endl;
  }

  
 };

  int main() {
    learn l;
    l.ame = "Ame";
    l.n = 1;
    l.t = 1.1;

    l.lern();

    learn l2;
    l2.ame = "Ame";
    l2.n = 1;
    l2.t = 1.1;
    l2.lern();

    return 0;
    
  }