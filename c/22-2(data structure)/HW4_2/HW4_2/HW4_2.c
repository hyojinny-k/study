#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#define TRUE 1
#define FALSE 0
#define MAX_TREE_SIZE 20
typedef struct TreeNode {
	int data;
	struct TreeNode* left, * right;
} TreeNode;

int get_node_count(TreeNode* root)
{
	if (root != NULL)
	{
		return 1 + get_node_count(root->left) + get_node_count(root->right);
	}
	return 0;
}

int get_height(TreeNode* root)
{
	if (root != NULL)
	{
		return 1 + max(get_height(root->right), get_height(root->left));
	}
	return 0;
}

int get_maximum(TreeNode* node)
{
	TreeNode* t = node;
	while (t->right != NULL)
		t = t->right;
	return t->data;
}

int get_minimum(TreeNode* node)
{
	TreeNode* t = node;
	while (t->left != NULL)
		t = t->left;
	return t->data;
}

TreeNode* search(TreeNode* node, int key)
{
	while (node != NULL) {
		if (key == node->data) {
			printf("����\n");
			return node;
		}
		else if (key < node->data)
			node = node->left;
		else
			node = node->right;
	}
	printf("����\n");
	return NULL; // Ž���� �������� ��� NULL ��ȯ
}

TreeNode* new_node(int item)
{
	TreeNode* temp = (TreeNode*)malloc(sizeof(TreeNode));
	temp->data = item;
	temp->left = temp->right = NULL;
	return temp;
}

TreeNode* insert_node(TreeNode* node, int key)
{
	if (node == NULL) 
		return new_node(key);
	if (key < node->data)
		node->left = insert_node(node->left, key);
	else if (key > node->data)
		node->right = insert_node(node->right, key);
	return node;
}
TreeNode* min_value_node(TreeNode* node)
{
	TreeNode* current = node;
	while (current->left != NULL)
		current = current->left;
	return current;
}
TreeNode* delete_node(TreeNode* root, int key)
{
	if (root == NULL) return root;
	if (key < root->data)
		root->left = delete_node(root->left, key);
	else if (key > root->data)
		root->right = delete_node(root->right, key);
	else {
		if (root->left == NULL) {
			TreeNode* temp = root->right;
			free(root);
			return temp;
		}
		else if (root->right == NULL) {
			TreeNode* temp = root->left;
			free(root);
			return temp;
		}
		TreeNode* temp = min_value_node(root->right);
		root->data = temp->data;
		root->right = delete_node(root->right, temp->data);
	}
	return root;
}

void p(TreeNode* root)
{
	if (root) {
		printf("%d ", root->data);
		p(root->left);
		p(root->right);
	}
}

int main(void)
{
	TreeNode* result = NULL;
	int key;
	char x;

	do {
		printf("Enter i(nsert),d(elete),s(earch),p(rint),h(eight),c(ount),m(ax),n(min),q(uit):");
		scanf("%c", &x);

		if (x == 'i') {
			printf("������ key�� �Է�:");
			scanf("%d", &key);
			result = insert_node(result, key);
		}
		else if (x == 'd') {
			printf("������ key�� �Է�:");
			scanf("%d", &key);
			delete_node(result, key);
		}
		else if (x == 's') {
			printf("Ž���� key�� �Է�:");
			scanf("%d", &key);
			search(result, key);
		}
		else if (x == 'p') {
			p(result);
			printf("\n");
		}
		else if (x == 'h')
			printf("Ʈ���� ���̴� %d\n", get_height(result));
		else if (x == 'c')
			printf("����� ������ %d\n", get_node_count(result));
		else if (x == 'm')
			printf("���� ū ���� %d\n", get_maximum(result));
		else if (x == 'n')
			printf("���� ���� ���� %d\n", get_minimum(result));
		else if (x== 'q')
			break;
		while (getchar() != '\n');
	} while (x != 'q');
}