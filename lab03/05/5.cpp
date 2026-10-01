#include <iostream>

typedef double real; // псевдоним для double

int main() {
    auto a = 3.14; // auto: тип выводится как double
    decltype(a) b = a; // decltype: тип b такой же, как у a

    std::cout << sizeof(int) << "\n"; // sizeof: размер типа int в байтах

    int c = static_cast<int>(a); // static_cast: явное приведение double к int
    std::cout << c << "\n";

    return 0;
}
