//#include<stdio.h>
//#include<vector>
//#include<queue>
//
//using namespace std;
//
//#define M 1287
//#define N 129
//#define L 61
//
//int picture[M][N][L];
//bool visit[M][N][L];
//
//int m, n, ll, t;
//int verified(int i,int j, int t) {
//	if (t < 0 || t >= ll || i < 0 || i >= m || j < 0 || j >= n||picture[i][j][t] ==0||visit[i][j][t] ==true) {
//		return false;
//	}
//	return true;
//}
//
//struct node {
//	int x;
//	int y;
//	int z;
//};
//
//int plusX[6] = { 1,0,0,-1,0,0 };
//int plusY[6] = { 0,1,0,0,-1,0 };
//int plusZ[6] = { 0,0,1,0,0,-1 };
//
//int bfs(int x, int y, int z) {
//	int cnt = 0;
//	node start;
//	start.x = x; start.y = y; start.z = z;
//	queue<node> q;
//	q.push(start);
//	visit[x][y][z] = true;
//	while (!q.empty()) {
//		node top = q.front();
//		q.pop();
//		cnt++;
//		for (int i = 0; i < 6; i++) {
//			int newX = top.x + plusX[i];
//			int newY = top.y + plusY[i];
//			int newZ = top.z + plusZ[i];
//			if (verified(newX, newY, newZ)) {
//				visit[newX][newY][newZ] = true;
//				start.x = newX; start.y = newY; start.z = newZ;
//				q.push(start);
//			}
//		}
//	}
//	if (cnt >= t)
//		return cnt;
//	else
//		return 0;
//}
//
//int main() {
//	scanf("%d%d%d%d", &m, &n, &ll, &t);
//	for (int tmpL = 0; tmpL < ll; ++tmpL) {
//		for (int i = 0; i < m; ++i) {
//			for (int j = 0; j < n; ++j) {
//				scanf("%d", &picture[i][j][tmpL]);
//			}
//		}
//	}
//	int cnt = 0;
//	for (int tmpL = 0; tmpL < ll; ++tmpL) {
//		for (int i = 0; i < m; ++i) {
//			for (int j = 0; j < n; ++j) {
//				if (picture[i][j][tmpL] ==1 && visit[i][j][tmpL] == false) {
//					cnt += bfs(i, j, tmpL);
//				}
//			}
//		}
//	}
//	printf("%d\n", cnt);
//
//	return 0;
//}