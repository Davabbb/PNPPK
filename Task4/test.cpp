#include "CppUTest/TestHarness.h"
#include "main.h"


TEST_GROUP(MinMaxNumbersTests) {
    void setup() override {}
    void teardown() override {}
};


TEST(MinMaxNumbersTests, ZeroInput) {
    auto result = minMaxNumbers(0);
    CHECK_EQUAL(0, result.first);
    CHECK_EQUAL(0, result.second);
}

TEST(MinMaxNumbersTests, NonZeroInput) {
    auto result = minMaxNumbers(7);
    CHECK_EQUAL(0b100, result.first);
    CHECK_EQUAL(0b111, result.second);
}

TEST(MinMaxNumbersTests, AnotherInput) {
    auto result = minMaxNumbers(10);
    CHECK_EQUAL(0b10, result.first);
    CHECK_EQUAL(0b11, result.second);
}
