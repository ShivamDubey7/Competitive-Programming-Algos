class Solution {
public:
bool isBalanced(Node* root) {
return height(root)!= -1;

}
int height(Node *root){
    if(root==NULL){
        return 0;
    }
    int leftHeight = height(root->left);
        if(leftHeight==-1)
            return -1;
    int rightHeight = height(root->right);
        if(rightHeight ==-1)
            return -1;
    if(abs(leftHeight - rightHeight)>1)
        return -1;
    return max(leftHeight , rightHeight) + 1;
}

};
