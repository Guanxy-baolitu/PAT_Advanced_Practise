//#include<stdio.h>
//
//struct Node {
//	Node* lChild;
//	Node* rChild;
//	int value;
//	int level;
//}Tree[1001];
//
//int loc;
//Node* create() {
//	Tree[loc].lChild = Tree[loc].rChild = NULL;
//	return &Tree[loc++];
//}
//
//int maxLevel = 0;
//Node* insert(int v, int l, Node* T) {
//	if (T == NULL) {
//		T = create();
//		T->value = v;
//		T->level = l;
//		if (l > maxLevel) {
//			maxLevel = l;
//		}
//	}
//	else if (v <= T->value) {
//		T->lChild = insert(v,l+1, T->lChild);
//
//	}
//	else {
//		T->rChild = insert(v, l + 1, T->rChild);
//	}
//	return T;
//}
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	Node* root =NULL;
//	int tmpV;
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &tmpV);
//		root=insert(tmpV,0,root);
//	}
//	int countSub = 0, countMax = 0;
//	int subLevel = maxLevel - 1;
//	for (int i = 0; i < n; i++) {
//		if (Tree[i].level == subLevel) {
//			countSub++;
//		}
//		else if (Tree[i].level == maxLevel) {
//			countMax++;
//		}
//	}
//	printf("%d + %d = %d", countMax, countSub,  countSub + countMax);
//	return 0;
//}