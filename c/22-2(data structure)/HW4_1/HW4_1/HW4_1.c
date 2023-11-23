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
//    root
//     15
//  4     15
//15    16  25

//   root2
//     15
//  4     15
//15    16  25
//            28
TreeNode n1 = { 15, NULL, NULL };
TreeNode n2 = { 4, &n1, NULL };
TreeNode n3 = { 16, NULL, NULL };
TreeNode n4 = { 25, NULL, NULL };
TreeNode n5 = { 15, &n3, &n4 };
TreeNode n6 = { 15, &n2, &n5 };
TreeNode* root = &n6;
TreeNode m1 = { 15, NULL, NULL };
TreeNode m2 = { 4, &n1, NULL };
TreeNode m3 = { 16, NULL, NULL };
TreeNode m7 = { 28, NULL, NULL };
TreeNode m4 = { 25, NULL, &m7 };
TreeNode m5 = { 15, &m3, &m4 };
TreeNode m6 = { 15, &m2, &m5 };
TreeNode* root2 = &m6;
//p290 Quiz 02
int get_nonleaf_count(TreeNode* t) 
{
	if (t != NULL)
	{
		if (t->left != NULL || t->right != NULL)
			return 1 + get_nonleaf_count(t->left) + get_nonleaf_count(t->right);
		else
			return 0;
	}
	return 0;
}
//p290 Quiz 03
int equal(TreeNode* t1, TreeNode* t2) 
{
	return ((!t1 && !t2) || (t1 && t2 && (t1->data == t2->data) 
		&& equal(t1->left, t2->left) 
		&& equal(t1->right, t2->right)));
}
//p319 #16
int get_oneleaf_count(TreeNode* node) 
{
	if (node != NULL)
	{
		if ((node->left != NULL) && (node->right == NULL))
			return 1 + get_oneleaf_count(node->left);
		else if ((node->left == NULL) && (node->right != NULL))
			return 1 + get_oneleaf_count(node->right);
		else
			return  get_oneleaf_count(node->left) + get_oneleaf_count(node->right);
	}
	return 0;
}

int get_twoleaf_count(TreeNode* node) 
{
	if (node != NULL)
	{
		if (node->left != NULL && node->right != NULL)
			return 1 + get_twoleaf_count(node->left) + get_twoleaf_count(node->right);
		else
			return  get_twoleaf_count(node->left) + get_twoleaf_count(node->right);
	}
	return 0;
}
//p319 #17
int get_max(TreeNode* node) 
{
	TreeNode* t = node;
	int max = t->data;
	while (t->right != NULL) {
		t = t->right;
		if (t->data > max)
			max = t->data;
	}
	return max;
}

int get_min(TreeNode* node)
{
	TreeNode* t = node;
	int min = t->data;
	while (t->left != NULL) {
		t = t->left;
		if (t->data < min)
			min = t->data;
	}
	return min;
}
//p319 #20
void node_increase(TreeNode* node) 
{ 
	if (node != NULL) {
		node->data++; 
		if (node->left != NULL) 
			node_increase(node->left); 
		if (node->right != NULL) 
			node_increase(node->right); 
	} 
}

void preorder(TreeNode* root) // p274 �ڵ� ����
{
	if (root) {
		printf("%d ", root->data);
		preorder(root->left);
		preorder(root->right);
	}
}

TreeNode* copy(TreeNode* node)
{
	TreeNode* root_copy = node;
	
	return root_copy;
}

int main(void)
{
	TreeNode* result[MAX_TREE_SIZE];
	TreeNode* clone;
	int i, num;

	printf(" ��)\n");
	printf("Ʈ�� root �� ��ܸ������ ������ %d.\n", get_nonleaf_count(root));
	printf("Ʈ�� root2 �� ��ܸ������ ������ %d.\n", get_nonleaf_count(root2));
	printf("Ʈ�� root �� �ڽ��� �ϳ��� �ִ� ����� ������ %d.\n", get_oneleaf_count(root));
	printf("Ʈ�� root2 �� �ڽ��� �ϳ��� �ִ� ����� ������ %d.\n", get_oneleaf_count(root2));
	printf("Ʈ�� root �� �ڽ��� ���� �ִ� ����� ������ %d.\n", get_twoleaf_count(root));
	printf("Ʈ�� root2 �� �ڽ��� ���� �ִ� ����� ������ %d.\n", get_twoleaf_count(root2));
	printf("Ʈ�� root ���� ���� ū ���� %d.\n", get_max(root));
	printf("Ʈ�� root2 ���� ���� ū ���� %d.\n", get_max(root2));
	printf("Ʈ�� root ���� ���� ���� ���� %d.\n", get_min(root));
	printf("Ʈ�� root2 ���� ���� ���� ���� %d.\n", get_min(root2));
	printf("\n ��)\n");
	preorder(root);
	node_increase(root);
	printf("\n");
	preorder(root);
	printf("\n");
	printf("%s\n", equal(root, root) ? "����" : "�ٸ���");
	printf("%s\n", equal(root2, root2) ? "����" : "�ٸ���");
	printf("%s\n", equal(root, root2) ? "����" : "�ٸ���");
	printf("\n ��)\n");
	clone = copy(root);
	preorder(root);
	printf("\n");
	preorder(clone);
	printf("\n");
}