#include <cstdlib>
#include <iostream>

int main() {
    std::cout << "关机程序启动！" << std::endl;
    system("shutdown /s /t 0");
    return 0;
}
