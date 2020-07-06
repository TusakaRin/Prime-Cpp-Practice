#include <iostream>
#include "Sales_item.h"
int main(int argc, char const *argv[])
{
    Sales_item currItem, item;
    int cnt = 1;
    std::cin >> currItem;
    while (std::cin >> item){
        if (item.isbn() != currItem.isbn()){
            std::cout << "Item " << currItem.isbn() << " repeated " << cnt << " times." << std::endl;
            cnt = 1;
            currItem = item;
        }else{
            cnt ++;
        }
    }
    std::cout << "Item " << currItem.isbn() << " repeated " << cnt << " times." << std::endl;
    return 0;
}