//#include<stdio.h>
//#include<map>
//
//#define MAX_N 100001
//
//using namespace std;
//
//struct Node {
//	int front;
//	char c;
//	int rear;
//	bool flag;
//}Nodes[MAX_N];
//
//map<int, Node> getNode;
//
//int main() {
//	int thisNodeA, thisNodeB, n;
//	scanf("%d %d %d", &thisNodeA, &thisNodeB, &n);
//	for (int i = 0; i < n; i++) {
//		scanf("%d %c %d", &Nodes[i].front, &Nodes[i].c, &Nodes[i].rear);
//		getNode[Nodes[i].front] = Nodes[i];
//	}
//	while (thisNodeA != -1) {
//		getNode[thisNodeA].flag = true;
//		thisNodeA = getNode[thisNodeA].rear;
//	}
//	while (thisNodeB != -1) {
//		if (getNode[thisNodeB].flag == true)
//			break;
//		thisNodeB = getNode[thisNodeB].rear;
//	}
//	if (thisNodeB == -1) printf("-1\n");
//	else {
//		printf("%05d", getNode[thisNodeB].front);
//	}
//	return 0;
//}