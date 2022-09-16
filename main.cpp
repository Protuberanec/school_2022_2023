#include <iostream>


bool getEvenOddNum(int number) {
    return (number & 0x01);
}


int main(int argc, char** argv) {
    int a = 101;

    std::cout << (getEvenOddNum(a) ? "odd" : "even") << std::endl;
    std::cout << ((a % 2) ? "odd" : "even") << std::endl;

    unsigned char countBits = 0;

    int temp = 0;
    for (int i = 0; i < sizeof(int)*8; i++ ) {
        countBits += a & (1 << i);
    }
    //почему выводит 101???
    std::cout << "count bit in " << (int)a << " = " << (int)countBits << std::endl;

    return 0;
}
