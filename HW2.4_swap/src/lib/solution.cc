#include "solution.h"
#include <iostream>

int Solution::IntSwapRef(int& num1, int& num2) { 
  if (num1 == num2){
    std::cout<<"num1: "<<num1<<std::endl;
    std::cout<<"num2: "<<num2<<std::endl;
    return EXIT_SUCCESS;
  }else{
    int temp = num1;
    num1 = num2;
    num2 = temp;
    std::cout<<"num1: "<<num1<<std::endl;
    std::cout<<"num2: "<<num2<<std::endl;
  }
  return EXIT_SUCCESS;
}
void Solution::IntSwapPtr(int *p1, int *p2) {
  int num1;
  int num2;
  int *p1 = &num1;
  int *p2 = &num2;
  std::swap(*p1, *p2);  
  std::cout<<"num1: "<<*p1<<std::endl;
  std::cout<<"num2: "<<*p2<<std::endl;
  return;
}

