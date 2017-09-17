//#include<stdio.h>
//#include<vector>
//#include<queue>
//
//using namespace std;
//
//struct node {
//	int ID;
//	int level;
//	vector<int> child;
//}member[101];
//
//
//int main() {
//	int n, m;
//	scanf("%d %d",&n,&m);
//	int thisID, k;
//	while (m != 0) {
//		scanf("%d %d",&thisID,&k);
//		int tempChild;
//		while (k != 0){
//			scanf("%d", &tempChild);
//			member[thisID].child.push_back(tempChild);
//			k--;
//		}
//		m--;
//	}
//	member[1].level = 1;
//	queue<int> Q;
//	Q.push(1);
//	while (!Q.empty()) {
//		thisID = Q.front();
//		Q.pop();
//		for (vector<int>::iterator it = member[thisID].child.begin(); it != member[thisID].child.end(); it++) {
//			member[(*it)].level = member[thisID].level + 1;
//			Q.push(*it);
//		}
//	}
//	int level[101] = {0};
//	for (int i = 1; i < 101; i++)
//		level[i] = 0;
//	int resultLevel = -1, max = -1, tempL=-1;
//	for (int i = 1; i < 101; i++) {
//		tempL = member[i].level;
//		level[tempL]++;
//	}
//	for (int i = 1; i < 101; i++)
//	if (level[i] > max) {
//		max = level[i];
//		resultLevel = i;
//	}
//	printf("%d %d",level[resultLevel],resultLevel);
//	return 0;
//}