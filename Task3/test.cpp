#include "CppUTest/TestHarness.h"
#include "main.h"

TEST_GROUP(DeleteElemTests) {
    void setup() override {}
    void teardown() override {}
};

TEST(DeleteElemTests, DeleteElement) {
    auto* head = new List<int>{.payload = 1};
    head->next = new List<int>{.payload = 2};
    head->next->next = new List<int>{.payload = 3};
    head->next->next->next = new List<int>{.payload = 4};
    head->next->next->next->next = new List<int>{.payload = 5};
    head->next->next->next->next->next = new List<int>{.payload = 6};

    deleteElem(head);

    CHECK_EQUAL(1, head->payload);
    CHECK_EQUAL(2, head->next->payload);
    CHECK_EQUAL(3, head->next->next->payload);
    CHECK_EQUAL(4, head->next->next->next->payload);
    CHECK_EQUAL(6, head->next->next->next->next->payload);

    deleteList(head);
}

