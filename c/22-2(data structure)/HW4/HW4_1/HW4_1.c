#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#define _CRT_SECURE_NO_WARNINGS
#define TRUE 1
#define FALSE 0
#define MAX_TREE_SIZE 20

typedef struct TreeNode {
	int data;
	struct TreeNode* left, * right;
} TreeNode;

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
	... 
}
//p290 Quiz 03
int equal(TreeNode* t1, TreeNode* t2) 
{
	... 
}
//p319 #16
int get_oneleaf_count(TreeNode* node) 
{ 
	... 
}

int get_twoleaf_count(TreeNode* node) 
{ 
	... 
}
//p319 #17
int get_max(TreeNode* node) 
{
	... 
}

int get_min(TreeNode* node) 
{
	... 
}
//p319 #20
void node_increase(TreeNode* node) 
{
	... 
}

void preorder(TreeNode* root) // p274 �ڵ� ����
{
	...
}

int main(void)
{
	TreeNode* result[MAX_TREE_SIZE];
	TreeNode* clone;
	int i, num;
	printf("��)\n");
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
	printf("\n");}