//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//using namespace std;
//#define N 1001
//int Tree[N];
//int findRoot(int x) {
//	if (Tree[x] == -1)
//		return x;
//	else {
//		int tmp = findRoot(Tree[x]);
//		Tree[x] = tmp;
//		return tmp;
//	}
//}
//int sum[N];
//int hobby[N];
//bool hasOccured[N] ;
//bool cmp(int x, int y) {
//	return x > y;
//}
//int main() {
//	int n;
//	scanf("%d",&n);
//	int num;
//	for (int i = 1; i < N; i++) {
//		Tree[i] = -1;
//		sum[i] = 0;
//		hasOccured[i]= false;
//	}
//	vector<int> tmpHobby;
//	for (int i = 0; i < n; i++) {
//		scanf("%d: ", &num);
//		int a, b,t;
//		int clueHobby = -1,tmphobby=-1;
//		tmpHobby.clear();
//		for (int j = 0; j < num; j++) {
//			scanf("%d", &tmphobby);
//			if (hasOccured[tmphobby]==true) {
//				clueHobby = tmphobby;
//			}
//			hasOccured[tmphobby] = true;
//			tmpHobby.push_back(tmphobby);
//		}
//		if (clueHobby == -1)  clueHobby = (*tmpHobby.begin());//以其中最后一个出现的为根合并
//		t = findRoot(clueHobby);
//		for (auto it = tmpHobby.begin(); it != tmpHobby.end();it++) {
//			if ((*it) == clueHobby) continue;
//			int smallRoot = findRoot(*it);
//			Tree[smallRoot] = t;
//			sum[t] += (sum[smallRoot]);
//			if(smallRoot!=t)
//				sum[smallRoot] = 0;
//		}
//		sum[t] += 1;
//	}
//		sort(sum, sum + N, cmp);
//		vector<int> v;
//		for (int i = 0; i < N; i++) {
//			if (sum[i] > 0)
//				v.push_back(sum[i]);
//			else
//				break;
//		}
//		printf("%d\n",v.size());
//		bool isFirst = true;
//		for (auto it = v.begin(); it != v.end(); it++) {
//			if (isFirst)
//				isFirst = false;
//			else
//				printf(" ");
//			printf("%d", (*it));
//		}
//			
//}