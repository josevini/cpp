#include <iostream>
using namespace std;

class Node {
    int data;
    Node * left;
    Node * right;

public:
    Node(): data(0), left(nullptr), right(nullptr) {};
    Node(int value): data(value), left(nullptr), right(nullptr) {};

    void debug()
    {
        cout << "addess: " << this << endl;
        cout << "data: " << data << endl;
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

int main()
{
    return 0;
}