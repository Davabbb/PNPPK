#include <iostream>

#ifndef MAIN_H
#define MAIN_H

struct TreeNode {
    TreeNode* leftChild = nullptr;
    TreeNode* rightChild = nullptr;
};

void FreeTree(TreeNode* node);

void FindPaths(TreeNode* node, int currentDepth, int& maxDepth, std::vector<std::vector<std::string>>& paths,
               std::vector<std::string>& currentPath, const std::string& subtree);

std::vector<std::vector<std::string>> FindPathsWrapper(TreeNode* root);

#endif
