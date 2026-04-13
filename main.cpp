#include <iostream>
#include <fstream>
int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Hello, Jenkins" << std::endl;
    std::cout << "new commit" << std::endl;
    std::cout << "new commit 2" << std::endl;
    std::ofstream ofs;
    ofs.open("./hello.txt");
    ofs << "it is test data";
    ofs.close();
    return 0;
}