#include <iostream>
#include "src/lib/solution.h"


int main()
{
    Solution solution ;
    std::vector<int> nums = {8,4,4,5,1,4,2};
    solution.RemDupli(nums);
    
    // std::cout << solution.ReversedVec() << std::endl;
    return EXIT_SUCCESS;
}