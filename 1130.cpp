//#include<stdio.h>
//#include<string>
//#include<set>
//
//using namespace std;
//
//struct Node {
//	Node* lChild;
//	Node* rChild;
//	string value;
//}Tree[21];
//
//string result;
//
//void inOrder(Node* T) {
//	if (T->lChild == NULL&&T->rChild == NULL) {
//		result += T->value;
//		return;
//	}
//	result += '(';
//	if (T->lChild != NULL) {
//		inOrder(T->lChild);
//	}
//	result += T->value;
//	if (T->rChild != NULL) {
//		inOrder(T->rChild);
//	}
//	result += ')';
//}
//
//int main() {
//	int n;
//	set<int> rootCandidate;
//	scanf("%d\n", &n);
//	for (int i = 1; i <= n; i++) {
//		rootCandidate.insert(i);
//	}
//	char c[11];
//	int l, r;
//	for (int i = 1; i <= n;i++) {
//		scanf("%s %d %d", c, &l, &r);
//		if (l == -1) {
//			Tree[i].lChild = NULL;
//		}
//		else {
//			Tree[i].lChild = &Tree[l];
//			rootCandidate.erase(l);
//		}
//		if (-1 == r) {
//			Tree[i].rChild = NULL;
//		}
//		else {
//			Tree[i].rChild = &Tree[r];
//			rootCandidate.erase(r);
//		}
//		Tree[i].value = c;
//	}
//	Node* root = &Tree[*(rootCandidate.begin())];
//	inOrder(root);
//	if (result.length() < 4) {
//		printf("%s", result.c_str());
//	}
//	else {
//		printf("%s", result.substr(1, result.length() - 2).c_str());
//	}
//	return 0;
//}