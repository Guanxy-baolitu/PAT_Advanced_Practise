//#include<stdio.h>
//#include<queue>
//#include<stack>
//
//using namespace std;
//
//struct Node {
//	Node* lChild;
//	Node* rChild;
//	int value;
//	int level;
//}Tree[31];
//
//int str1[31], str2[31];
//
//
//queue<Node*> TreeQ;
//stack<Node*> rLevel;
//
//int loc;
//Node* create() {
//	Tree[loc].lChild = Tree[loc].rChild = NULL;
//	return &Tree[loc++];
//}
//
//Node* build(int s1, int e1, int s2, int e2) {
//	Node* root = create();
//	root->value = str2[e2];
//	int rootIdx;
//	for (int i = s1; i <= e1;i++) {
//		if (str1[i] == str2[e2]) {
//			rootIdx = i;
//			break;
//		}
//	}
//	if (rootIdx != s1) {
//		Tree[loc].level = root->level + 1;
//		root->lChild = build(s1,rootIdx-1,s2,s2+rootIdx-s1-1);
//	}
//	if (rootIdx != e1) {
//		Tree[loc].level = root->level + 1;
//		root->rChild = build(rootIdx + 1,e1,-e1+e2+rootIdx,e2-1);
//	}
//	return root;
//}
//
//void zigzag(Node* x) {
//	//根简单输出，无首空格
//	if (x->lChild != NULL) {
//		TreeQ.push(x->lChild);
//	}
//	if (x->rChild != NULL) {
//		TreeQ.push(x->rChild);
//	}
//	printf("%d",x->value);
//	//清队列
//	while (!TreeQ.empty()) {
//		if (TreeQ.front()->lChild != NULL) {
//			TreeQ.push(TreeQ.front()->lChild);
//		}
//		if (TreeQ.front()->rChild != NULL) {
//			TreeQ.push(TreeQ.front()->rChild);
//		}
//		if (TreeQ.front()->level % 2 == 1) {
//			while (!rLevel.empty()) {
//				printf(" %d", rLevel.top()->value);
//				rLevel.pop();
//			}
//			printf(" %d", TreeQ.front()->value);
//		}
//		else {
//			rLevel.push(TreeQ.front());
//		}
//		TreeQ.pop();
//	}
//	while (!rLevel.empty()) {
//		printf(" %d", rLevel.top()->value);
//		rLevel.pop();
//	}
//}
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++) {
//		scanf("%d",&str1[i]);
//	}
//	for (int i = 1; i <= n; i++) {
//		scanf("%d", &str2[i]);
//	}
//	Tree[0].level = 0;
//	Node* root = build(1,n,1,n);
//	zigzag(root);
//	return 0;
//}