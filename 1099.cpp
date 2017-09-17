//#include<stdio.h>
//#include<algorithm>
//#include<queue>
//
//using namespace std;
//
//struct Node{
//	Node* lchild;
//	Node* rchild;
//	int value;
//}Tree[101];
//
//Node* create(int T) {
//	Tree[T].lchild = Tree[T].rchild = NULL;
//	return &Tree[T];
//}
//
//int loc = 0;
//int buf[101];
//void inOrder(Node* T) {
//	if (T->lchild != NULL)
//		inOrder(T->lchild);
//	T->value = buf[loc++];
//	if (T->rchild != NULL)
//		inOrder(T->rchild);
//}
//void levelOrder(Node* T) {
//	queue<Node*> Q;
//	Q.push(T);
//	Node* t;
//	bool isFirst = true;
//	while (Q.empty() == false) {
//		if (isFirst)
//			isFirst = false;
//		else
//			printf(" ");
//		t = Q.front();
//		if (t->lchild != NULL)
//			Q.push(t->lchild);
//		if (t->rchild != NULL)
//			Q.push(t->rchild);
//		printf("%d", t->value);
//		Q.pop();
//	}
//}
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	int tmpL, tmpR;
//	for (int i = 0; i < n; i++)
//		create(i);
//	for (int i = 0; i < n; i++) {
//		scanf("%d %d",&tmpL,&tmpR);
//		if (tmpL != -1)
//			Tree[i].lchild = &Tree[tmpL];
//		if (tmpR != -1)
//			Tree[i].rchild = &Tree[tmpR];
//	}
//	for (int i = 0; i < n; i++)
//		scanf("%d",&buf[i]);
//	sort(buf,buf+n);
//	inOrder(&Tree[0]);
//	levelOrder(&Tree[0]);
//	return 0;
//}