//#include<stdio.h>
//#include<queue>
//
//using namespace std;
//
//
//struct node {
//	int lChild;
//	int rChild;
//}Tree[21];
//
//queue<int> q;
//bool rootCand[21];
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	char tmpL[3], tmpR[3];
//	for (int i = 0; i < n; i++) {
//		scanf("%s %s", tmpL, tmpR);
//		if (tmpL[0] != '-') {
//			Tree[i].lChild = tmpL[0] - '0';
//			if (strlen(tmpL) == 2) {
//				Tree[i].lChild = Tree[i].lChild * 10 + (tmpL[1] - '0');
//			}
//			rootCand[Tree[i].lChild] = true;
//		}
//		else 
//			Tree[i].lChild = -1;
//		if (tmpR[0] != '-') {
//			Tree[i].rChild = tmpR[0] - '0';
//			if (strlen(tmpR) == 2) {
//				Tree[i].rChild = Tree[i].rChild * 10 + (tmpR[1] - '0');
//			}
//			rootCand[Tree[i].rChild] = true;
//		}
//		else
//			Tree[i].rChild = -1;
//	}
//	int root;
//	for (int i = 0; i < n; i++) {
//		if (rootCand[i] == false) {
//			root = i;
//			break;
//		}
//	}
//	q.push(root);
//	int count = 0;
//	int value;
//	while (!q.empty()) {
//		if (q.front()== -1) {
//			break;
//		}
//		value = q.front();
//		q.push(Tree[q.front()].lChild);
//		q.push(Tree[q.front()].rChild);
//		count++;
//		q.pop();
//	}
//	if (count == n)
//		printf("YES %d", value);
//	else
//		printf("NO %d", root);
//	return 0;
//}