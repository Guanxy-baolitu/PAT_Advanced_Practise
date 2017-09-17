//#include<stdio.h>
//#include<algorithm>
//
//#define N 10001
//
//using namespace std;
//
//struct Data{
//	int id, fid, mid, num, area;
//	int cid[10];
//}D[N];
//
//struct node {
//	int id, people;
//	double num, area;
//	bool flag = false;
//}ans[N];
//
//int father[N];
//bool visit[N];
//
//int find(int x) {
//	while (x != father[x])
//		x = father[x];
//	return x;
//}
//
//void Union(int x, int y) {
//	int faA = find(x);
//	int faB = find(y);
//	if (faA>faB) {
//		father[faA] = faB;
//	}
//	else if (faA<faB) {
//		father[faB] = faA;
//	}
//}
//
//int cmp1(node a, node b) {
//	if (a.area != b.area)
//		return a.area > b.area;
//	else
//		return a.id < b.id;
//}
//
//int main() {
//	int n, k, cnt = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < N; ++i) father[i] = i;
//	for (int i = 0; i < n; i++) {
//		scanf("%d%d%d%d", &D[i].id,&D[i].fid,&D[i].mid,&k);
//		visit[D[i].id] = true;
//		if (D[i].fid != -1) {
//			visit[D[i].fid] = true;
//			Union(D[i].fid, D[i].id);
//		}
//		if (D[i].mid != -1) {
//			visit[D[i].mid] = true;
//			Union(D[i].mid, D[i].id);
//		}
//		for (int j = 0; j < k; j++) {
//			scanf("%d", &D[i].cid[j]);
//			visit[D[i].cid[j]] = true;
//			Union(D[i].cid[j], D[i].id);
//		}
//		scanf("%d%d", &D[i].num, &D[i].area);
//	}
//	for (int i=0;i<n;++i){
//		int id = find(D[i].id);
//		ans[id].id = id;
//		ans[id].num += D[i].num;
//		ans[id].area += D[i].area;
//		ans[id].flag = true;
//	}
//	for (int i = 0; i < N; i++) {
//		if (visit[i]) ans[find(i)].people++;
//		if (ans[i].flag) cnt++;
//	}
//	for (int i = 0; i < N; ++i) {
//		if (ans[i].flag) {
//			ans[i].num = (double)(ans[i].num*1.0 / ans[i].people);
//			ans[i].area = (double)(ans[i].area*1.0 / ans[i].people);
//		}
//	}
//	sort(ans,ans+N,cmp1);
//	printf("%d\n",cnt);
//	for (int i = 0; i < cnt;++i) {
//		printf("%04d %d %.3f %.3f\n", ans[i].id,ans[i].people,ans[i].num,ans[i].area);
//	}
//	return 0;
//}