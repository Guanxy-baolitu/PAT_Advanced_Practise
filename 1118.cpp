//#include<stdio.h>
//#include<set>
//
//using namespace std;
//
//#define MAX_N 10001
//
//int Tree[MAX_N];
//
//int findRoot(int x) {
//	if (Tree[x] == -1) return x;
//	else {
//		int tmp= findRoot(Tree[x]);
//		Tree[x] = tmp;
//		return tmp;
//	}
//}
//
//int main() {
//	int n,Q;
//	int k, tmpB, lastRoot, newRoot;
//	scanf("%d", &n);
//	set<int> birds;
//	for (int i = 0; i < MAX_N; i++) Tree[i] = -1;
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &k);
//		lastRoot = -2;
//		for (int j = 0; j < k; j++) {
//			scanf("%d", &tmpB);
//			birds.insert(tmpB);
//			newRoot = findRoot(tmpB);
//			if (lastRoot == -2) {
//				lastRoot = newRoot;
//			}
//			else if (newRoot != lastRoot) {
//				Tree[newRoot] = lastRoot;
//			}
//			
//		}
//	}
//	int countB = birds.size();
//	int countC = 0;
//	for (int i = 1; i <= countB; i++) {
//		if (Tree[i] == -1) {
//			countC++;
//		}
//	}
//	printf("%d %d\n", countC, countB);
//	scanf("%d", &Q);
//	int a, b;
//	for (int i = 0; i< Q; i++) {
//		scanf("%d %d", &a, &b);
//		a = findRoot(a);
//		b = findRoot(b);
//		if (a == b) {
//			printf("Yes\n");
//		}
//		else {
//			printf("No\n");
//		}
//	}
//	return 0;
//}