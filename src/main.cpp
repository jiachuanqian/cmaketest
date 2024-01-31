
#include "fun.h"
int main() 
{
    std::cout << "start" << std::endl;
    int count = 20;
    for (int i = 0; i < count; i++)
    {
        std::cout << 10 - i  << std::endl;
    } 
    fun();
    system("pause");
    return 0;
}
