//#include<stdio.h>
//#include<map>
//#include<vector>
//using namespace std;
//
//struct Node{
//	int front;
//	int value;
//	int rear;
//	int index;
//}Nodes[100001];
//
//map<int, Node> nodeToValue;
//
//vector<Node> originList;
//vector<Node> gabageList;
//
//bool keyOccurred[10001];
//
//int main() {
//	int thisNode, n;
//	scanf("%d %d", &thisNode, &n);
//	int tmpF, tmpV, tmpR;
//	for (int i = 0; i < n; i++) {
//		scanf("%d %d %d", &Nodes[i].front, &Nodes[i].value, &Nodes[i].rear);
//		Nodes[i].index = i;
//		nodeToValue[Nodes[i].front] = Nodes[i];
//	}
//	bool isFirst = true;
//	do{
//		if (isFirst) {
//			isFirst = false;
//		}
//		else {
//			thisNode = nodeToValue[thisNode].rear;
//		}
//		if (keyOccurred[abs(nodeToValue[thisNode].value)] == true) {
//			if (!gabageList.empty()) {
//				gabageList[gabageList.size() - 1].rear = nodeToValue[thisNode].front;
//			}
//			gabageList.push_back(nodeToValue[thisNode]);
//		}
//		else {
//			if (!originList.empty()) {
//				originList[originList.size() - 1].rear = nodeToValue[thisNode].front;
//			}
//			originList.push_back(nodeToValue[thisNode]);
//		}
//		keyOccurred[abs(nodeToValue[thisNode].value)] = true;
//	} while (nodeToValue[thisNode].rear != -1);
//	originList[originList.size() - 1].rear = -1;
//	if (!gabageList.empty()) {
//		gabageList[gabageList.size() - 1].rear = -1;
//	}
//	for (auto it = originList.begin(); it != originList.end(); it++) {
//		printf("%05d %d ", (*it).front, (*it).value);
//		if ((*it).rear == -1) {
//			printf("-1\n");
//		}
//		else {
//			printf("%05d\n", (*it).rear);
//		}
//	}
//	for (auto it = gabageList.begin(); it != gabageList.end(); it++) {
//		printf("%05d %d ", (*it).front, (*it).value);
//		if ((*it).rear == -1) {
//			printf("-1\n");
//		}
//		else {
//			printf("%05d\n", (*it).rear);
//		}
//	}
//	return 0;
//}