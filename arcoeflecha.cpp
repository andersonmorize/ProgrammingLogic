// https://neps.academy/problem/6
#include <bits/stdc++.h>

using namespace std;

class BST
{
    int data;
    BST *left, *right;
public:
    BST();
    BST(int);
    BST* Insert(BST *, int);
    void Inorder(BST *, int);
};

BST::BST():data(0), left(NULL), right(NULL){}

BST::BST(int value)
{
    data = value;
    left = right = NULL;
}

BST* BST::Insert(BST *root, int value)
{
    if (!root)
    {
        return new BST(value);
    }

    if (value > root->data)
    {
        root->right = Insert(root->right, value);
    }
    else
    {
        root->left = Insert(root->left, value);
    }

    return root;
}

int menor = 0;

void BST::Inorder(BST *root, int menorq)
{
    if (!root)
    {
        return;
    }

    Inorder(root->left, menorq);
    cout << "logo abaixo da recursão left - data = " << root->data << endl;
    if (root->data <= menorq)
        menor++;
    
    //if (root->data > menorq) return;
    Inorder(root->right, menorq);
    cout << "logo abaixo da recursão right - data = " << root->data << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);

    int n;
    int x, y;
    int total = 0;

    cin >> n;

    BST b, *root = NULL;

    cin >> x >> y;
    root = b.Insert(root, abs(x) + abs(y));

    for (int i = 1; i < n; i++)
    {
        cin >> x >> y;

        int coor = abs(x) + abs(y);

        b.Insert(root, coor);

        b.Inorder(root, coor);

        total += menor;
        menor = 0;
    }

    cout << total;

    return 0;
}