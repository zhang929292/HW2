#include "solution.h"

void Solution::RemDupli(std::vector<int> &input) {

  std::sort(input.begin(),input.end());
  input.erase(unique(input.begin(), input.end()), input.end());

  for(int i = 0; i< input.size(); i++){
    std::cout<< input[i] <<std::endl;
  }

}



int Solution::ReversedVec(std::vector<int> &input){

  // for(int i=0; i < input.size(); i++){
  //   input.push_back(i);
  // }
  reverse(input.begin(), input.end());
  std::vector<int>:: iterator it;
  for (int i=0; i < input.size(); i++) {
    std::cout << input[i] << " ";
  }
  return EXIT_SUCCESS; 
}


int Solution::RemoveOdd(std::vector<int> &input){

  

}
