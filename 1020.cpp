//#include<stdio.h>
//#include<queue>
//
//using namespace std;
//
//struct Node {
//	Node* lchild;
//	Node* rchild;
//	int value;
//}Tree[31];
//
//int loc;
//Node* create() {
//	Tree[loc].lchild = Tree[loc].rchild = NULL;
//	return &Tree[loc++];
//}
//
//int post[31], in[31];
//Node* build(int s1,int e1,int s2,int e2) {//���������s1�����������s2
//	Node* root = create();
//	root->value = post[e1];
//	int rootIdx;
//	for (int i = s2; i <= e2; i++) {
//		if (in[i] == post[e1]) {
//			rootIdx = i;
//			break;
//		}
//	}
//	if (rootIdx != s2) {//��������Ϊ��
//		root->lchild = build(s1, s1 + (rootIdx - s2)-1, s2, rootIdx - 1);
//	}
//	if (rootIdx != e2) {//��������Ϊ��
//		root->rchild = build(s1 + (rootIdx - s2), e1-1, rootIdx + 1, e2);
//	}
//	return root;
//}
//void levelOrder(Node* T) {
//	queue<Node*> Q;
//	Q.push(T);
//	bool isFirst = true;
//	while (Q.empty() == false) {
//		if (isFirst)
//			isFirst = false;
//		else
//			printf(" ");
//		printf("%d", Q.front()->value);
//		if(Q.front()->lchild!=NULL)
//			Q.push(Q.front()->lchild);
//		if (Q.front()->rchild != NULL)
//			Q.push(Q.front()->rchild);
//		Q.pop();
//	}
//}
//
//int main() {
//	int n;
//	scanf("%d",&n);
//	int pos = n;
//	while (pos != 0) {
//		scanf("%d", &post[n-pos]);
//		pos--;
//	}
//	pos = n; 
//	while (pos != 0) {
//		scanf("%d", &in[n - pos]);
//		pos--;
//	}
//	loc = 0;
//	Node *T = build(0, n - 1, 0, n - 1);//���һ�����ֲ��Ǳ߽磬������ֵ��
//	levelOrder(T);
//	return 0;
//}