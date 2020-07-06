#include <iostream>
int main(int argc, char const *argv[])
{
    std::cout << "Please input two integers: " << std::endl;
    int i = 0, j = 0;
    std::cin >> i >> j;
    i ++;
    while (i < j){
        std::cout << i << std::endl;
        i++;
    }
    return 0;
}