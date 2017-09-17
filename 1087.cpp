//#include<stdio.h>
//#include<map>
//#include<vector>
//#include<string>
//#define N 201
//#define Inf 99999999
//using namespace std;
//
//struct city {
//	char name[4];
//	int happiness = 0;
//	int dis=Inf;
//	bool visited;
//	vector<int> from;
//	map<int, int> neighbors;
//}Cities[N];
//
//map<string, int> getCity;
//vector<int> tmpPath, path;
//int maxJoy = 0, cntPath = 0;
//double maxAvg = 0;
//int destCityIdx;
//
//void dfs(int v) {
//	tmpPath.push_back(v);
//	if (v == 0) {
//		int joy = 0;
//		for (int i = 0; i < tmpPath.size(); ++i) {
//			joy += Cities[tmpPath[i]].happiness;
//		}
//		double avg = 1.0*joy / (tmpPath.size()-1);
//		if (joy > maxJoy) {
//			maxJoy = joy;
//			maxAvg = avg;
//			path = tmpPath;
//		}
//		else if (joy == maxJoy&&avg > maxAvg) {
//			maxAvg = avg;
//			path = tmpPath;
//		}
//		tmpPath.pop_back();
//		cntPath++;
//		return;
//	}
//	for (int i = 0; i < Cities[v].from.size(); i++) {
//		dfs(Cities[v].from[i]);
//	}
//	tmpPath.pop_back();
//}
//
//int main() {
//	int n, k;
//	char startCity[4];
//	scanf("%d %d %s", &n, &k, startCity);
//	getCity[string(startCity)]=0;
//	char tmpName[4];
//	for (int i = 1; i < n; i++) {//0ÊÇÆðµã
//		scanf("%s", Cities[i].name);
//		getCity[string(Cities[i].name)] = i;
//		scanf("%d", &Cities[i].happiness);
//	}
//	int fromCityIdx = getCity[string(startCity)];
//	destCityIdx = getCity[string("ROM")];
//	char tmpName2[4];
//	int tmpC;
//	for (int i = 0; i < k; i++) {
//		scanf("%s %s %d", tmpName,tmpName2,&tmpC);
//		Cities[getCity[string(tmpName)]].neighbors[getCity[string(tmpName2)]] = tmpC;
//		Cities[getCity[string(tmpName2)]].neighbors[getCity[string(tmpName)]] = tmpC;
//	}
//	///dijstra
//	int candCity;
//	Cities[fromCityIdx].dis = 0;
//	for (int i = 0; i < n; ++i) {
//		int last = -1, min = Inf;
//		for (int j = 0; j < n; ++j) {
//			if (Cities[j].visited == false && Cities[j].dis < min) {
//				last = j;
//				min = Cities[j].dis;
//			}
//		}
//		if (last == -1)break;
//		Cities[last].visited = true;
//		for (auto it = Cities[last].neighbors.begin(); it != Cities[last].neighbors.end(); it++) {
//			candCity = (*it).first;
//					if (Cities[candCity].visited == false) {
//						tmpC = (*it).second;
//						if (Cities[candCity].dis > Cities[last].dis + tmpC) {
//							Cities[candCity].dis = Cities[last].dis + tmpC;
//							Cities[candCity].from.clear();
//							Cities[candCity].from.push_back(last);
//						}
//						else if (Cities[candCity].dis == Cities[last].dis + tmpC) {
//							Cities[candCity].from.push_back(last);
//						}
//					}
//		}
//	}
//	dfs(destCityIdx);
//	printf("%d %d %d %d\n", cntPath, Cities[destCityIdx].dis, maxJoy, (int)maxAvg);
//	printf("%s", startCity);
//	for (int i = path.size() - 2; i >= 0; i--) {
//		printf("->%s", Cities[path[i]].name);
//	}
//	return 0;
//}