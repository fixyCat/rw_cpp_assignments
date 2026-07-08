#include <iostream>
#include <vector>


struct Node
{
    int value;
    Node* left;
    Node* right;

    Node(int val) : value(val), left(nullptr), right(nullptr) {}
};


// Recursively collect leaf nodes and store in a vector passed by reference
void collectLeafNodes(Node* node, std::vector<int>& leafNodes)
{
    if(!node) return;

    if(!node->left && !node->right)
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
    // Rules:
    // All nodes in the left subtree of a node contain values strictly less than the node’s value.
    // All nodes in the right subtree of a node contain values strictly greater than the node’s value.
    // No duplicate values

    // Level 1
    Node* root = new Node(9);

    // Level 2
    root->left = new Node(4);
    root->right = new Node(14);

    // Level 3
    root->left->left = new Node(2);
    root->left->right = new Node(6);
    root->right->left = new Node(11);
    root->right->right = new Node(16);

    // Level 4
    root->left->left->left = new Node(1);
    root->left->left->right = new Node(3);
    root->left->right->left = new Node(5);
    root->left->right->right = new Node(7);
    root->right->left->left = new Node(10);
    root->right->left->right = new Node(12);
    root->right->right->left = new Node(15);
    root->right->right->right = new Node(17);

    // Level 5
    root->left->right->right->right = new Node(8);
    root->right->left->right->right = new Node(13);

    std::vector<int> leafNodes;
    collectLeafNodes(root, leafNodes);

    // Print collected leaf nodes
    for(int val : leafNodes)
    {
        std::cout << val << ", ";
    }

    return 0;
}