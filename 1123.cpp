//#include<stdio.h>
//#include<algorithm>
//#include<queue>
//using namespace std;
//
//struct node {
//	node* lChild;
//	node* rChild;
//	int value;
//	int height;
//	int level = 0;
//}Tree[21];
//
//int loc = 0;
//node* create() {
//	Tree[loc].lChild = Tree[loc].rChild = NULL;
//	return &Tree[loc++];
//}
//
//int Height(node* P) {
//	if (P == NULL) {
//		return -1;
//	}
//	else
//		return P->height;
//}
//
//node* SingleRotateWithLeft(node*k2) {
//	node* k1;
//	k1 = k2->lChild;
//	k2->lChild = k1->rChild;
//	k1->rChild = k2;
//	k2->height = max(Height(k2->lChild), Height(k2->rChild)) + 1;
//	k1->height = max(Height(k1->lChild), Height(k2->rChild)) + 1;
//	return k1;
//}
//
//node* SingleRotateWithRight(node* k2) {
//	node* k1;
//	k1 = k2->rChild;
//	k2->rChild = k1->lChild;
//	k1->lChild = k2;
//	k2->height = max(Height(k2->lChild), Height(k2->rChild)) + 1;
//	k1->height = max(Height(k1->lChild), Height(k1->rChild)) + 1;
//	return k1;
//}
//
//node* DoubleRotateWithLeft(node* k3) {
//	k3->lChild = SingleRotateWithRight(k3->lChild);
//	return SingleRotateWithLeft(k3);
//}
//
//node* DoubleRotateWithRight(node* k3) {
//	k3->rChild = SingleRotateWithLeft(k3->rChild);
//	return SingleRotateWithRight(k3);
//}
//
//node* insert(int x, node* T) {
//	if (T == NULL) {
//		T = create();
//		T->value = x;
//		T->height = 0;
//	}
//	else {
//		if (x < T->value) {
//			T->lChild = insert(x, T->lChild);
//			if (Height(T->lChild) - Height(T->rChild) == 2) {
//				if (x < T->lChild->value)
//					T = SingleRotateWithLeft(T);
//				else {
//					T = DoubleRotateWithLeft(T);
//				}
//			}
//		}
//		else if(x>T->value){
//			T->rChild = insert(x, T->rChild);
//			if (Height(T->lChild) - Height(T->rChild) == -2) {
//				if (x > T->rChild->value)
//					T = SingleRotateWithRight(T);
//				else
//					T = DoubleRotateWithRight(T);
//			}
//		}
//	}
//	T->height = max(Height(T->lChild), Height(T->rChild)) + 1;
//	return T;
//}
//
//
//int main(){
//	int n;
//	scanf("%d",&n);
//	node* root = NULL;
//	int tmpNode;
//	for (int i = 0; i < n; ++i) {
//		scanf("%d", &tmpNode);
//		root = insert(tmpNode, root);
//	}
//	queue<node> q;
//	q.push(*root);
//	//int lastLevel=0, tmpLevel = 0;
//	bool isComplete = true;
//	bool nonFirst = false;
//	while (!q.empty()) {
//		//tmpLevel = q.front().level;
//		if (nonFirst) printf(" ");
//		else nonFirst = true;
//		printf("%d", q.front().value);
//		node top=q.front();
//		q.pop();
//		if (top.lChild != NULL) {
//			//q.front().lChild->level = q.front().level + 1;
//			q.push(*top.lChild);
//		}
//		if (top.rChild != NULL) {
//			q.push(*top.rChild);
//			if(top.lChild == NULL) {
//				isComplete = false;
//			}
//		}
//		else {
//			if (!q.empty() && q.front().height != 0) {
//				isComplete = false;
//			}
//		}
//	}
//	if (isComplete) printf("\nYES\n");
//	else printf("\nNO\n");
//	return 0;
//}