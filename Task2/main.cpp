#include <iostream>
#include <map>
#include <sstream>
#include <algorithm>
#include "CppUTest/CommandLineTestRunner.h"
#include "main.h"


std::map<std::size_t, int> countWordsByLength(const std::wstring& text) {
    std::map<std::size_t, int> wordLengthCount;

    std::wistringstream stream(text);
    std::wstring word;

    while (stream >> word) {
        word.erase(std::remove_if(word.begin(), word.end(), ispunct), word.end());
        std::size_t length = word.size();

        if (length == 0)
            continue;

        if (wordLengthCount.find(length) != wordLengthCount.end()) {
            wordLengthCount[length]++;
        } else {
            wordLengthCount[length] = 1;
        }
    }

    return wordLengthCount;
}

int main(int argc, char** argv) {
    std::wstring text = L"Это пример текста, который мы будем анализировать !!!";
    std::map<std::size_t, int> result = countWordsByLength(text);

    for (const auto& entry : result) {
        std::cout << entry.second << " слов с длинной " << entry.first << "\n";
    }

    return CommandLineTestRunner::RunAllTests(argc, argv);
}
