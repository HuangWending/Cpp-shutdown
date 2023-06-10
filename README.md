# Cpp-shutdown
C++关机程序
#include <cstdlib>：这一行包含了 <cstdlib> 头文件，它提供了执行系统相关操作的函数，例如 system() 函数。

#include <iostream>：这一行包含了 <iostream> 头文件，它用于输入输出操作，例如 std::cout 和 std::endl。

int main()：这是程序的主函数，所有的代码都在这里执行。int 表示该函数返回一个整数值，main() 函数是程序的入口。

std::cout << "关机程序启动！" << std::endl;：这一行使用 std::cout 对象输出一条消息到标准输出（通常是控制台）。std::endl 是一个操纵符，用于在输出流中插入一个换行符。

system("shutdown /s /t 0");：这一行使用 system() 函数执行一个系统命令。在这里，我们使用 "shutdown /s /t 0" 命令来执行关机操作。/s 参数表示关机，/t 0 参数表示立即执行关机。

return 0;：这一行表示 main() 函数的返回值为 0，它表明程序成功执行并正常终止。
