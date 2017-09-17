//#include<stdio.h>
//#include<vector>
//#include<map>
//#define N 501
//#define Inf 99999999
//using namespace std;
//
//int n;
//int from, to;
//
//struct I{
//	int name;
//	int from=-1;
//	bool visited = false;
//	int Dis = Inf;
//	int Time = Inf;
//	map<int,int> neighbDis;
//	map<int, int> neighbTime;
//}Inter[N];
//
//vector<int> disWay;
//vector<int> timeWay, tmpPath, Timepre[N];
//int minLen = Inf;
//
//void dfsdispath(int v) {
//	disWay.push_back(v);
//	if (v == from) return;
//	dfsdispath(Inter[v].from);
//}
//
//void dfstimepath(int v) {
//	tmpPath.push_back(v);
//	if (v == from) {
//		if (tmpPath.size() < minLen) {
//			minLen = tmpPath.size();
//			timeWay = tmpPath;
//		}
//		tmpPath.pop_back();
//		return;
//	}
//	for (int i = 0; i < Timepre[v].size(); ++i) {
//		dfstimepath(Timepre[v][i]);
//	}
//	tmpPath.pop_back();
//}
//
//
//int main() {
//	int m;
//	scanf("%d%d", &n, &m);
//	int a, b, oneway, len, time;
//	for (int i = 0; i < m; i++) {
//		scanf("%d%d%d%d%d", &a, &b, &oneway, &len, &time);
//		Inter[a].neighbDis[b] = len;
//		Inter[a].neighbTime[b] = time;
//		if (oneway == 0) {
//			Inter[b].neighbDis[a] = len;
//			Inter[b].neighbTime[a] = time;
//		}
//	}
//	scanf("%d%d", &from, &to);
//	Inter[from].Dis = 0;
//	for (int i = 0; i < n; ++i) {
//		Inter[i].from = i;
//	}
//	for (int i = 0; i < n; ++i) {
//		int last = -1, min = Inf;
//		for (int j = 0; j < n; ++j) {
//			if (Inter[j].visited == false && Inter[j].Dis < min) {
//				min = Inter[j].Dis;
//				last = j;
//			}
//		}
//		if (last == -1) break;
//		Inter[last].visited = true;
//		for (auto it = Inter[last].neighbDis.begin(); it != Inter[last].neighbDis.end(); ++it) {
//			int candi = it->first;
//			if (Inter[candi].visited == false) {
//				int dis = it->second;
//				if (Inter[candi].Dis > dis + Inter[last].Dis) {
//					Inter[candi].Dis = dis + Inter[last].Dis;
//					Inter[candi].from = last;
//					Inter[candi].Time = Inter[last].neighbTime[candi] + Inter[last].Time;
//				}
//				else if (Inter[candi].Dis == dis + Inter[last].Dis&&Inter[candi].Time > Inter[last].neighbTime[candi] + Inter[last].Time) {
//					Inter[candi].Time = Inter[last].neighbTime[candi] + Inter[last].Time;
//					Inter[candi].from = last;
//				}
//			}
//		}
//	}
//	dfsdispath(to);
//
//	for (int i = 0; i < n; ++i) {
//		Inter[i].visited = false;
//	}
//
//	Inter[from].Time = 0;
//	for (int i = 0; i < n; ++i) {
//		int last = -1, min = Inf;
//		for (int j = 0; j < n; ++j) {
//			if (Inter[j].visited == false && Inter[j].Time < min) {
//				min = Inter[j].Time;
//				last = j;
//			}
//		}
//		if (last == -1) break;
//		Inter[last].visited = true;
//		for (auto it = Inter[last].neighbTime.begin(); it != Inter[last].neighbTime.end(); ++it) {
//			int candi = it->first;
//			if (Inter[candi].visited == false) {
//				int time = it->second;
//				if (Inter[candi].Time > time + Inter[last].Time) {
//					Inter[candi].Time = time + Inter[last].Time;
//					Timepre[candi].clear();
//					Timepre[candi].push_back(last);
//				}
//				else if (Inter[candi].Time == time + Inter[last].Time) {
//					Timepre[candi].push_back(last);
//				}
//			}
//		}
//	}
//	dfstimepath(to);
//	printf("Distance = %d", Inter[to].Dis);
//	if (disWay == timeWay) {
//		printf("; Time = %d: ", Inter[to].Time);
//	}
//	else {
//		printf(": ");
//		for (int i = disWay.size() - 1; i >= 0; --i) {
//			printf("%d", disWay[i]);
//			if (i != 0) printf(" -> ");
//		}
//		printf("\n");
//		printf("Time = %d: ", Inter[to].Time);
//	}
//	for (int i = timeWay.size() - 1; i >= 0; --i) {
//		printf("%d", timeWay[i]);
//		if (i != 0) printf(" -> ");
//	}
//	printf("\n");
//	return 0;
//}