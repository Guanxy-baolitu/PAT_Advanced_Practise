//#include <stdio.h>
//
//struct Node {
//	Node * lchild;
//	Node * rchild;
//	int value;
//}Tree[1001];
//
//int loc;
//Node *create() {
//	Tree[loc].lchild = Tree[loc].rchild = NULL;
//	return &Tree[loc++];
//}
//
//int seq[1001];
//int preSeq[1001], postSeq[1001];
//bool isBST;
//bool canBuild=true;
//bool isFirst = true;
//
//void postOrder(Node *T) {
//	if (T->lchild != NULL)
//		postOrder(T->lchild);
//	if (T->rchild != NULL)
//		postOrder(T->rchild);
//	if (isFirst)
//		isFirst = false;
//	else
//		printf(" ");
//	printf("%d",T->value);
//}
//
//void preOrder(Node *T) {
//	printf("%d", T->value);
//	if (T->lchild != NULL)
//		preOrder(T->lchild);
//	if (T->rchild != NULL)
//		preOrder(T->rchild);
//}
//
//Node * build(int start,int end) {
//	if (start == end)
//		return NULL;
//	Node* root = create();
//	int rootValue = seq[start++];
//	root->value = rootValue;
//	int spos=start, epos=spos;
//	if(isBST)
//		while (seq[epos] < rootValue&&epos != end)
//			epos++;//循环停止时epos已经在另一棵树上
//	else
//		while (seq[epos] >= rootValue&&epos != end)
//			epos++;//循环停止时epos已经在另一棵树上
//	root->lchild=build(spos, epos);
//	spos = epos;
//	if(isBST)
//		while (seq[epos] >= rootValue&&epos!=end)
//			epos++;//循环停止时epos已落在外,所有的end都是界
//	else
//		while (seq[epos] < rootValue&&epos != end)
//			epos++;//循环停止时epos已落在外,所有的end都是界
//	root->rchild=build(spos, epos);
//	if (epos != end)
//		canBuild = false;
//	return root;
//}
//
//int main() {
//	int pos;
//	scanf("%d",&pos);
//	int n=pos;
//	while (pos!=0) {
//		scanf("%d",&seq[n-pos]);
//		pos--;
//	}
//	if (n == 1) {
//		printf("YES\n%d", seq[0]);
//		return 0;
//	}
//	if (seq[1] < seq[0])
//		isBST = true;
//	else
//		isBST = false;
//	Node* root = build(0,n);
//	if (!canBuild) {
//		printf("NO");
//		return 0;
//	}
//	printf("YES\n");
//	postOrder(root);
//	return 0;
//}