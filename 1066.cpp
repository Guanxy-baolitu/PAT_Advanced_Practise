//#include<stdio.h>
//
//struct Node {
//	Node *lchild;
//	Node *rchild;
//	int value;
//	int height;
//}Tree[21];
//
//int loc;
//Node* create() {
//	Tree[loc].lchild = Tree[loc].rchild = NULL;
//	return &Tree[loc++];
//}
//
//int Max(int a, int b) {
//	return a > b ? a : b;
//}
//
//int Height(Node* P) {
//	if (P == NULL)
//		return -1;
//	else
//		return P->height;
//}
//
//Node* singleRotateWithLeft(Node* k2) {
//	Node* k1;
//	k1 = k2->lchild;
//	k2->lchild = k1->rchild;
//	k1->rchild = k2;
//	k2->height = Max(Height(k2->lchild), Height(k2->rchild)) + 1;
//	k1->height = Max(Height(k1->lchild), Height(k1->rchild)) + 1;
//	return k1;
//}
//Node* singleRotateWithRight(Node* k2) {
//	Node* k1;
//	k1 = k2->rchild;
//	k2->rchild = k1->lchild;
//	k1->lchild = k2;
//	k2->height = Max(Height(k2->lchild), Height(k2->rchild)) + 1;
//	k1->height = Max(Height(k1->lchild), Height(k1->rchild)) + 1;
//	return k1;
//}
//Node* DoubleRotateWithLeft(Node* k3) {
//	k3->lchild = singleRotateWithRight(k3->lchild);
//	return singleRotateWithLeft(k3);
//}
//Node* DoubleRotateWithRight(Node* k3) {
//	k3->rchild = singleRotateWithLeft(k3->rchild);
//	return singleRotateWithRight(k3);
//}
//
//Node* insert(Node* T, int x) {
//	if (T == NULL) {
//		T = create();
//		T->value = x;
//		T->height = 0;
//	}
//	else if(x<T->value){
//		T->lchild = insert(T->lchild,x);
//		if (Height(T->lchild) - Height(T->rchild) == 2)
//			if (x < T->lchild->value)
//				T = singleRotateWithLeft(T);
//			else
//				T = DoubleRotateWithLeft(T);
//	}
//	else if (x > T->value) {
//		T->rchild = insert(T->rchild, x);
//		if (Height(T->rchild) - Height(T->lchild) == 2)
//			if (x > T->rchild->value)
//				T = singleRotateWithRight(T);
//			else
//				T = DoubleRotateWithRight(T);
//	}
//	T->height = Max(Height(T->lchild), Height(T->rchild)) + 1;
//	return T;
//}
//
//
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	int key;
//	Node *T = NULL;
//	while (n != 0) {
//		scanf("%d", &key);
//		T = insert(T, key);
//		n--;
//	}
//	printf("%d", T->value);
//	return 0;
//}
