#include <iostream>
int main(int argc, char const *argv[])
{
    int sum = 0, value = 0;
    while (std::cin >> value){ //使用一个istream作为条件时，检测的是流的状态。如果流是有效的，就检测成功。如果遇到文件结束符或者无效字符，比如字母，就会无效。
        sum += value;
    }
    std::cout << "Sum is: " << sum << std::endl;
    return 0;
}