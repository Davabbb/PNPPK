#include "CppUTest/TestHarness.h"
#include "main.h"


TEST_GROUP(WordCountTestGroup) {
    void setup() override {}
    void teardown() override {}
};

TEST(WordCountTestGroup, EmptyString) {
    std::wstring emptyText = L"";
    std::map<std::size_t , int> result = countWordsByLength(emptyText);
    CHECK_EQUAL(0, result.size());
}

TEST(WordCountTestGroup, SingleWord) {
    std::wstring text = L"Hello";
    std::map<std::size_t, int> result = countWordsByLength(text);
    CHECK_EQUAL(1, result.size());
    CHECK_EQUAL(1, result[5]); // Длина слова "Hello" равна 5
}

TEST(WordCountTestGroup, MultipleWords) {
    std::wstring text = L"This is a sample text for testing.";
    std::map<std::size_t, int> result = countWordsByLength(text);
    CHECK_EQUAL(6, result.size());
    CHECK_EQUAL(1, result[1]);
    CHECK_EQUAL(1, result[2]);
    CHECK_EQUAL(1, result[3]);
    CHECK_EQUAL(2, result[4]);
    CHECK_EQUAL(1, result[6]);
    CHECK_EQUAL(1, result[7]);
}

