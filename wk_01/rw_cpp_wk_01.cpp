#include <iostream>
#include <vector>


class Node
{
public:
    int value;
    Node* left;
    Node* right;

    Node(int val) : value(val), left(nullptr), right(nullptr) {}
};


// Recursively collect leaf nodes and store in a vector passed by reference
void collectLeafNodes(Node* node, std::vector<int>& leafNodes)
{
    if(node == nullptr) return;

    if(node->left == nullptr && node->right == nullptr)
    {
        leafNodes.push_back(node->value);
    }

    if(node->left) collectLeafNodes(node->left, leafNodes);
    if(node->right) collectLeafNodes(node->right, leafNodes);
}


int main()
{
    // Test tree
    //        1
    //       / \
    //      2   3
    //     /   / \
    //    4   5   6
    // Node* root = new Node(1);
    // root->left = new Node(2);
    // root->right = new Node(3);
    // root->left->left = new Node(4);
    // root->right->left = new Node(5);
    // root->right->right = new Node(6);
    
    // BIG TREE!
    // Level 1 (Root)
    Node* root = new Node(1);

    // Level 2
    root->left = new Node(2);
    root->right = new Node(3);

    // Level 3
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    // Level 4
    root->left->left->left = new Node(8);
    root->left->left->right = new Node(9);
    root->left->right->left = new Node(10);
    root->right->left->right = new Node(11);
    root->right->right->right = new Node(12);

    // Level 5
    root->left->left->left->left = new Node(13);
    root->left->left->left->right = new Node(14);
    root->left->right->left->left = new Node(15);
    root->right->right->right->left = new Node(16);
    root->right->right->right->right = new Node(17);


    std::vector<int> leafNodes;
    collectLeafNodes(root, leafNodes);

    // Print collected leaf nodes
    for(int val : leafNodes)
    {
        std::cout << val << ", ";
    }

    return 0;
}