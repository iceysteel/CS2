#include <iostream>
#include "Tree.h"
#include "TreeNode.h"

using namespace std;

int main()
{
    Tree <int> tree;

    cout << "inserting all the nodes" << endl;
    tree.insertNode(50);
    tree.insertNode(70);
    tree.insertNode(30);
    tree.insertNode(100);
    tree.insertNode(200);
    tree.insertNode(250);
    tree.insertNode(20);
    tree.insertNode(10);
    tree.insertNode(35);
    tree.insertNode(38);
    tree.insertNode(34);
    tree.insertNode(37);

    cout << "Getting Depth:" << endl;
    cout << tree.getDepth() << endl;

    tree.inOrderTraversal();
    cout << "In order" << endl;
    tree.preOrderTraversal();
    cout << "Preorder" << endl;
    tree.postOrderTraversal();
    cout << "Postorder" << endl;


    cout << "End of program" << endl;




    return 0;
}
