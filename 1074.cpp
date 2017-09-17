//#include<stdio.h>
//#include<map>
//#include <vector>
//
//using namespace std;
//
//#define MAX_N 100001
//
//struct Node {
//	int front;
//	int value;
//	int rear;
//}Nodes[MAX_N];
//
//map<int, Node> getNode;
//vector<Node> resultList;
//vector<Node> tmp;
//
//int main() {
//	int thisNode, n, k;
//	scanf("%d %d %d",&thisNode, &n, &k);
//	int front;
//	for (int i = 0; i<n; i++) {
//		scanf("%d %d %d", &front, &Nodes[i].value, &Nodes[i].rear);
//		Nodes[i].front = front;
//		getNode[front] = Nodes[i];
//	}
//	int pos = 0;
//	do {
//		if (tmp.size() == k) {
//				for (int i=tmp.size()-1; i >= 0; i--) {
//					if (!resultList.empty()) {
//						resultList[resultList.size() - 1].rear = tmp[i].front;
//					}
//					resultList.push_back(tmp[i]);
//				}
//				tmp.clear();
//		}
//		if (thisNode != -1) {
//			tmp.push_back(getNode[thisNode]);
//			thisNode = getNode[thisNode].rear;
//		}
//		else {
//			for (auto it = tmp.begin(); it != tmp.end();it++) {
//				if (!resultList.empty()) {
//					resultList[resultList.size() - 1].rear = (*it).front;
//				}
//				resultList.push_back((*it));
//			}
//			tmp.clear();
//		}
//	} while (thisNode!=-1||tmp.size()!=0);
//	if (!resultList.empty()) {
//		resultList[resultList.size() - 1].rear = -1;
//	}
//	for (auto it = resultList.begin(); it != resultList.end(); it++) {
//		printf("%05d %d ", (*it).front,(*it).value);
//		if ((*it).rear == -1) {
//			printf("-1\n");
//		}
//		else {
//			printf("%05d\n", (*it).rear);
//		}
//	}
//	
//	return 0;
//}