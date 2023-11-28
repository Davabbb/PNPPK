#include "CppUTest/TestHarness.h"
#include "main.h"


TEST_GROUP(PrimesTestGroup) {
    void setup() override {}
    void teardown() override {}
};


TEST(PrimesTestGroup, IsPrime) {
    CHECK_FALSE(isPrime(1));
    CHECK_TRUE(isPrime(3));
    CHECK_FALSE(isPrime(4));
    CHECK_TRUE(isPrime(5));
    CHECK_FALSE(isPrime(6));
}

TEST(PrimesTestGroup, GeneratePrimes) {
    std::vector<int> expected1{2, 3, 5, 7, 11};
    CHECK_EQUAL(expected1.size(), generatePrimes(5).size());

    std::vector<int> expected2{2, 3, 5, 7, 11, 13, 17};
    CHECK_EQUAL(expected2.size(), generatePrimes(7).size());
}
