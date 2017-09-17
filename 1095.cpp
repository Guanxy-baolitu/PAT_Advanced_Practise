//#include<stdio.h>
//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<string>
//#include<string.h>
//using namespace std;
//struct Node {
//	string ID;
//	int stay;
//	int flag = 0;
//}record[10001];
//
//bool cmp1(Node a, Node b) {
//	if (a.ID != b.ID)
//		return a.ID < b.ID;
//	else
//		return a.stay < b.stay;
//}
//
//bool cmp2(Node a, Node b) {
//	return a.stay < b.stay;
//}
//
//int TimeToSecond(int h,int m,int s) {
//	return h * 3600 + m * 60 + s;
//}
//
//int main() {
//	int n, k;
//	int maxtime = -1;
//	scanf("%d %d", &n, &k);
//	vector<Node> car;
//	int h, m, s;
//	string tmpId;
//	char state[4];
//	for (int i = 0; i < n; i++) {
//		cin >> record[i].ID;
//		scanf("%d:%d:%d %s", &h, &m, &s, state);
//		record[i].stay = TimeToSecond(h, m, s);
//		record[i].flag = strcmp(state, "in") == 0 ? 1 : -1;
//	}
//	sort(record, record + n, cmp1);
//	map<string, int> mapp;//carID to stay time
//	for (int i = 0; i < n - 1; ++i) {
//		if (record[i].ID == record[i + 1].ID&&record[i].flag == 1 && record[i + 1].flag == -1) {
//			car.push_back(record[i]);
//			car.push_back(record[i + 1]);
//			mapp[record[i].ID] += (record[i + 1].stay - record[i].stay);
//			if (maxtime < mapp[record[i].ID]) {
//				maxtime = mapp[record[i].ID];
//			}
//		}
//	}
//	sort(car.begin(), car.end(),cmp2);
//	vector<int> cnt(n);
//	for (int i = 0; i < car.size(); ++i) {
//		if (i == 0)
//			cnt[i] += car[i].flag;
//		else
//			cnt[i] = cnt[i - 1] + car[i].flag;
//	}
//	int loc = 0;
//	while (k != 0) {
//		scanf("%d:%d:%d", &h, &m, &s); 
//		int q = TimeToSecond(h, m, s);
//		int j;
//		for (j = loc; j < car.size(); ++j) {
//			if (car[j].stay > q) {
//				printf("%d\n", cnt[j-1]);
//				break;
//			}
//			else if (j == car.size() - 1) {
//				printf("%d\n", cnt[j]);
//			}
//		}
//		loc = j;
//		k--;
//	}
//	for (auto it = mapp.begin(); it != mapp.end(); it++) {
//		if (it->second == maxtime) {
//			cout << it->first<<" ";
//		}
//	}
//	printf("%02d:%02d:%02d", maxtime / 3600, (maxtime % 3600) / 60, maxtime % 60);
//	return 0;
//}