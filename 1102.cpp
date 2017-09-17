//#include<stdio.h>
//#include<queue>
//
//using namespace std;
//
//struct Node {
//	Node* lchild;
//	Node* rchild;
//	Node* parent;
//	int value;
//}Tree[11];
//
//void init() {
//	for (int i = 0; i < 11; i++) {
//		Tree[i].lchild = Tree[i].rchild = Tree[i].parent = NULL;
//		Tree[i].value = i;
//	}
//}
//
//void InOrderR(Node* T){
//	if (T->rchild != NULL)
//		InOrderR(T->rchild);
//	static bool isFirst=true;
//	if (isFirst) isFirst = false;
//	else printf(" ");
//	printf("%d",T->value);
//	if (T->lchild != NULL)
//		InOrderR(T->lchild);
//}
//
//void levelOrderR(Node* T) {
//	queue<Node*> Q;
//	Q.push(T);
//	Node* t;
//	bool isFirst1 = true;
//	while (Q.empty() == false) {
//		t = Q.front();
//		if (t->rchild != NULL)
//			Q.push(t->rchild);
//		if (t->lchild != NULL)
//			Q.push(t->lchild);
//		if (isFirst1) isFirst1 = false;
//		else printf(" ");
//		printf("%d",t->value);
//		Q.pop();
//	}
//}
//
//int main() {
//	init();
//	int n;
//	scanf("%d",&n);
//	char tmpL, tmpR;
//	int d;
//	for (int i = 0; i < n; i++) {
//		getchar();
//		scanf("%c %c", &tmpL, &tmpR);
//		if (tmpL != '-') {
//			d = tmpL - '0';
//			Tree[i].lchild = &Tree[d];
//			Tree[d].parent = &Tree[i];
//		}
//		if (tmpR != '-') {
//			d = tmpR - '0';
//			Tree[i].rchild = &Tree[d];
//			Tree[d].parent = &Tree[i];
//		}
//	}
//	Node* root;
//	for (int i = 0; i < n; i++) {
//		if (Tree[i].parent == NULL) {
//			root = &Tree[i];
//			break;
//		}
//	}
//	levelOrderR(root);
//	printf("\n");
//	InOrderR(root);
//	return 0;
//}