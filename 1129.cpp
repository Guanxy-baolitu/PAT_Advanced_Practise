//#include<stdio.h>
//#include<set>
//
//using namespace std;
//
//#define MAX_N 50001
//
//int num[MAX_N];
//
//struct Node {
//	int value;
//	int count;
//	Node(int v,int c):value(v),count(c){}
//	bool operator<(const Node& b)const {
//		if (count != b.count)
//			return count > b.count;
//		else
//			return value < b.value;
//	}
//};
//
//int main() {
//	int n, k;
//	scanf("%d %d", &n, &k);
//	int tmpN,tmpK;
//	set<Node> rank;
//	for (int i = 1; i <= n; i++) {
//		scanf("%d", &tmpN);
//		if (i != 1) {
//			printf("%d:", tmpN);
//		}
//		auto it = rank.begin();
//		tmpK = k;
//		while (it!=rank.end() && tmpK != 0) {
//			printf(" %d",(*it).value);
//			it++;
//			tmpK--;
//		}
//		if (i != 1) {
//			printf("\n");
//		}
//		if (rank.find(Node(tmpN, num[tmpN]))!=rank.end()) {
//			rank.erase(Node(tmpN, num[tmpN]));
//		}
//		rank.insert(Node(tmpN, ++num[tmpN]));
//	}
//	return 0;
//}