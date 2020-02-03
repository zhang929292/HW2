#include <iostream>
#include "src/lib/solution.h"
// using std::string;
//fuc不能穿数组

int main()
{
    int Arr[4] = {1, 2, 3, 4};
    int size = sizeof(Arr)/sizeof(Arr[0]);
    // char Arr[10]= {'q', 'q', 'q'};
    strlen();
    
    std::cout <<" The number(s) of elements in the array is(are): "<< size << std::endl;
    return EXIT_SUCCESS;
}