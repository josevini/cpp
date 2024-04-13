#include <iostream>
using namespace std;

class Node {
    int data;
    Node * parent;
    Node * left;
    Node * right;
public:
    Node(): data(0), parent(nullptr), left(nullptr), right(nullptr) {};
    Node(int value): data(value), parent(nullptr), left(nullptr), right(nullptr) {};

    void debug()
    {
        cout << "addess: " << this << endl;
        cout << "data: " << data << endl;
        cout << "parent: " << parent << endl;
        cout << "left: " << left << endl;
        cout << "right: " << right << endl;
        cout << "-----------------" << endl;
    }

    int getData()
    {
        return data;
    }

    void setData(int data)
    {
        this->data = data;
    }

    Node * getParent()
    {
        return parent;
    }

    void setParent(Node * parent)
    {
        this->parent = parent;
    }

    Node * getLeft()
    {
        return left;
    }

    void setLeft(Node * left)
    {
        this->left = left;
    }

    Node * getRight()
    {
        return right;
    }

    void setRight(Node * right)
    {
        this->right = right;
    }
};

class BinarySearchTree {
    Node * root;
public:
    BinarySearchTree(): root(nullptr) {};

    Node * getRoot()
    {
        return root;
    }

    void setRoot(Node * root)
    {
        this->root = root;
    }

    bool is_empty()
    {
        return (root == nullptr);
    }

    void inorderTreeWalk()
    {
        if (this->root) {
            inorderTreeWalk(this->root->getLeft());
            cout << root->getData() << " ";
            inorderTreeWalk(this->root->getRight());
        }
    }

    void inorderTreeWalk(Node * node)
    {
        if (node) {
            inorderTreeWalk(node->getLeft());
            cout << node->getData() << " ";
            inorderTreeWalk(node->getRight());
        }
    }

    Node * search(int data)
    {
        if (root == nullptr || root->getData() == data) {
            return root;
        } else if (data < root->getData()) {
            return search(root->getLeft(), data);
        } else {
            return search(root->getRight(), data);
        }
    }

    Node * search(Node * node, int data)
    {
        if (node == nullptr || node->getData() == data) {
            return node;
        } else if (data < node->getData()) {
            return search(node->getLeft(), data);
        } else {
            return search(node->getRight(), data);
        }
    }
};

int main()
{
    return 0;
}