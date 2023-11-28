#include "CppUTest/TestHarness.h"
#include "main.h"

TEST_GROUP(TreeTests) {
    void setup() override {}
    void teardown() override {}
};


TEST(TreeTests, FindPathsWrapper) {
    TreeNode* root = new TreeNode();
    root->leftChild = new TreeNode();
    root->rightChild = new TreeNode();
    root->leftChild->leftChild = new TreeNode();
    root->rightChild->rightChild = new TreeNode();

    std::vector<std::vector<std::string>> paths = FindPathsWrapper(root);

    for (const auto& path : paths) {
        for (const auto& node : path)
            std::cout << node << " ";
        std::cout << std::endl;
    }

    CHECK(paths.size() > 0);

    CHECK_EQUAL(2, paths[0].size() - 1);

    FreeTree(root);
}
