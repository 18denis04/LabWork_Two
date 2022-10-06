#include <iostream>
#include <string>

class Duck {
 public:
  std::string my_name = "Tom";
  int age = 0;

  void say_name() {
    std::cout << "My name is " << my_name << "!\n";
  }

  void fly(){
    std::cout << "I belive, I can fly!\n"
  }
};

int main() {
  Duck my_duck;

  my_duck.say_name();

  my_duck.my_name = "John";
  my_duck.say_name();

  my_duck.fly();

  return 0;
}
