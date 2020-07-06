#include <iostream>
int main(int argc, char const *argv[])
{
    int currVal = 0, val = 0;
    if (std::cin >> currVal){
        int cnt = 1;  // 读一个值存入currVal
        while (std::cin >> val){
            if (val == currVal)
                ++cnt;
            else{
                std::cout << currVal << " occurs " << cnt << " times" << std::endl;
                currVal = val;
                cnt = 1;
            }
        }
        std::cout << currVal << " occurs " << cnt << " times" << std::endl;
    }
    return 0;
}