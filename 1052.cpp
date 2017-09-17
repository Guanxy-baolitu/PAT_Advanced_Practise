//#include<stdio.h>
//#include<map>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//#define MAX_N 100001
//
//struct Node {
//	int front;
//	int value;
//	int rear;
//	bool operator<(const Node& b)const {
//		return value < b.value;
//	}
//}Nodes[MAX_N];
//
//map<int, Node> getNode;
//
//vector<Node> resultList;
//
//int main() {
//	int n, thisNode;
//	scanf("%d %d", &n, &thisNode);
//	for (int i = 0; i < n; i++) {
//		scanf("%d %d %d", &Nodes[i].front, &Nodes[i].value, &Nodes[i].rear);
//		getNode[Nodes[i].front] = Nodes[i];
//	}
//	while (thisNode != -1 && getNode.find(thisNode) != getNode.end()) {
//		resultList.push_back(getNode[thisNode]);
//		thisNode = getNode[thisNode].rear;
//	}
//	sort(resultList.begin(), resultList.end());
//	printf("%d ", resultList.size());
//	if (resultList.size() == 0) {
//		printf("-1\n");
//	}
//	else {
//		printf("%05d\n", resultList[0].front);
//	}
//	for (auto it = resultList.begin(); it !=resultList.end(); it++) {
//		printf("%05d %d ", (*it).front, (*it).value);
//		if (it+1==resultList.end()) {
//			printf("-1\n");
//		}
//		else {
//			printf("%05d\n", (*(it+1)).front);
//		}
//	}
//	return 0;
//}