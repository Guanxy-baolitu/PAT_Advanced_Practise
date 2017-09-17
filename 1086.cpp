//#include<stdio.h>
//#include<string.h>
//
//struct Node{
//	Node* lchild;
//	Node* rchild;
//	Node* parent;
//	int value;
//	bool poped;
//}Tree[31];
//
//int loc=0;
//Node* create() {
//	Tree[loc].lchild = Tree[loc].rchild =Tree[loc].parent= NULL;
//	Tree[loc].poped = false;
//	return &Tree[loc++];
//}
//
//Node* insert(Node* T,int x) {
//	Node* newNode = create();
//	newNode->value = x;
//	if (T->poped == false)
//		T->lchild = newNode;
//	else
//		T->rchild = newNode;
//	newNode->parent = T;
//	return newNode;
//}
//
//void postOrder(Node* T) {
//	if (T->lchild != NULL)
//		postOrder(T->lchild);
//	if (T->rchild != NULL)
//		postOrder(T->rchild);
//	static int isFirst = true;
//	if (isFirst)
//		isFirst = false;
//	else
//		printf(" ");
//	printf("%d",T->value);
//}
//
//int main() {
//	int n;
//	scanf("%d",&n);
//	char todo[5];
//	int tmpV;
//	Node* T=create();
//	Node* root = T;
//	for (int i = 0; i < 2 * n; i++) {
//		scanf("%s",todo);
//		if (strcmp(todo, "Push")==0) {
//			scanf("%d", &tmpV);
//			T=insert(T,tmpV);
//		}
//		if (strcmp(todo,"Pop")==0) {
//			while (T->poped == true)
//				T = T->parent;
//			T->poped = true;
//		}
//	}
//	postOrder(root->lchild);
//	return 0;
//}