#include <iostream>
#include "CppUTest/CommandLineTestRunner.h"
#include "main.h"


std::pair<uint32_t, uint32_t> minMaxNumbers(uint32_t num) {
    if (num == 0) {
        return {0, 0};
    }

    int countBits = 0;
    for (uint32_t i = num; i > 0; i >>= 1) {
        countBits += i & 1;
    }

    uint32_t maxNum = (1 << countBits) - 1;
    uint32_t minNum = (1 << (countBits - 1));

    return {minNum, maxNum};
}

int main(int argc, char** argv) {
    return CommandLineTestRunner::RunAllTests(argc, argv);
}
