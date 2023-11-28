#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include "CppUTest/CommandLineTestRunner.h"


struct TreeNode {
    TreeNode* leftChild = nullptr;
    TreeNode* rightChild = nullptr;
};


void FreeTree(TreeNode* node) {
    std::queue <TreeNode*> stack_node;
    stack_node.push(node);
    while (!stack_node.empty()) {
        TreeNode *nodeDelete = stack_node.front();
        stack_node.pop();
        if (nodeDelete != nullptr) {
            stack_node.push(nodeDelete->leftChild);
            stack_node.push(nodeDelete->rightChild);
            delete nodeDelete;
        }
    }
}


void FindPaths(TreeNode* node, int currentDepth, int& maxDepth, std::vector<std::vector<std::string>>& paths,
               std::vector<std::string>& currentPath, const std::string& subtree) {
    if (node == nullptr)
        return;


    currentPath.push_back(subtree);

    if (currentDepth > maxDepth) {
        maxDepth = currentDepth;
        paths.clear();
    }

    if (currentDepth == maxDepth)
        paths.push_back(currentPath);

    FindPaths(node->leftChild, currentDepth + 1, maxDepth, paths, currentPath, "left");
    FindPaths(node->rightChild, currentDepth + 1, maxDepth, paths, currentPath, "right");

    currentPath.pop_back();
}
std::vector<std::vector<std::string>> FindPathsWrapper(TreeNode* root) {
    int maxDepth = 0;
    std::vector<std::vector<std::string>> paths;
    std::vector<std::string> currentPath;
    FindPaths(root, 0, maxDepth, paths, currentPath, "");
    return paths;
}

int main(int argc, char** argv) {
    return CommandLineTestRunner::RunAllTests(argc, argv);
}
