#include <iostream>
int main(int argc, char const *argv[])
{
    int sum = 0;
    for (int val=1; val <= 10; ++val){  // 初始化为1后检测条件并直接执行循环体，循环体结束之后才对val+1
        std::cout << val << std::endl;
        sum += val;
    }
    std::cout << "sum of 1 to 10 inclusive is " << sum << std::endl;
    return 0;
}