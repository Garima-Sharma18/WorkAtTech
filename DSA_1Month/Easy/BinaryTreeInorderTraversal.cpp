//Inorder Traversal of a Binary tree

/* This is the Node class definition

class Node {
public:
    Node* left;
    Node* right;
    int data;

    Node(int data) {
        this->left = NULL;
        this->right = NULL;
        this->data = data;
    }
};
*/

void inorderTraversal(Node *root, vector <int> &answer)
{
	if (root!=NULL)
	{
		inorderTraversal(root->left, answer);
		answer.push_back(root->data);
		inorderTraversal(root->right, answer);
	}
}

vector<int> getInorderTraversal(Node* root) {
    vector <int> ans;
	inorderTraversal(root, ans);	
	return ans;
}
