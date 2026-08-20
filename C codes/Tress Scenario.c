#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
// Create node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}
// Insert into BST
struct Node* insert(struct Node* root, int value) {
    if (root == NULL)
        return createNode(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->right, value);

    return root;
}
// Inorder traversal
void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
int main() {
    int n;
    scanf("%d", &n);
    if (n == -1) {
        printf("Invalid input");
        return 0;
    }
    struct Node* root = NULL;
    int x;
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x == -1) {
            printf("Invalid input");
            return 0;
        }
        root = insert(root, x);
    }
    int newRouter;
    scanf("%d", &newRouter);
    if (newRouter == -1) {
        printf("Invalid input");
        return 0;
    }
    root = insert(root, newRouter);
    printf("Output\n");
    inorder(root);
    return 0;
}
