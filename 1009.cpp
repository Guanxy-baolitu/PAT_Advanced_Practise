//#include<stdio.h>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//struct Node {
//	int ex;
//	double co;
//	bool operator <(const Node& b) {
//		return ex > b.ex;
//	}
//}product[11][2];
//
//int main() {
//	map<int, double> m;
//	vector<Node> v(121);
//	int k1, k2;
//	scanf("%d", &k1);
//	for (int i = 0; i < k1; i++) {
//		scanf("%d%lf", &product[i][0].ex,&product[i][0].co);	
//	}
//	scanf("%d", &k2);
//	for (int i = 0; i < k2; i++) {
//		scanf("%d%lf", &product[i][1].ex, &product[i][1].co);
//	}
//	for(int i=0;i<k1;i++)
//		for (int j = 0; j < k2; j++) {
//			int newEx = product[i][0].ex + product[j][1].ex;
//			double newCo= product[i][0].co * product[j][1].co;
//			if (m.find(newEx) != m.end()) {
//				m[newEx] += newCo;
//			}
//			else
//				m[newEx] = newCo;		
//		}
//	int ex = 0;
//	for (auto it = m.begin(); it != m.end(); it++) {
//		v[ex].ex = (*it).first;
//		v[ex].co = (*it).second;
//		ex++;
//	}
//	sort(v.begin(), v.begin()+ex);
//	ex = 0;
//	for (auto it = v.begin(); it != v.end(); it++)
//		if ((*it).co != 0.0)
//			ex++;
//	printf("%d", ex);
//	for (int i = 0; i < ex; i++)
//		printf(" %d %.1f", v[i].ex, v[i].co);
//	return 0;
//}