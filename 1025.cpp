//#include<stdio.h>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//struct node {
//	long long id;
//	int score;
//	int local;
//	int localRank;
//	bool operator <(const node& b)const {
//		if(score!=b.score)
//			return score > b.score;
//		return id<b.id;
//	}
//};
//
//
//int main(){
//	int n,k;
//	scanf("%d",&n);
//	vector<node> fin;
//	int rank = 1, tmpT = -1;
//	for (int i =1; i <= n; i++) {
//		scanf("%d", &k);
//		vector<node> v(k);
//		for (int j = 0; j < k; j++) {
//			scanf("%lld%d",&v[j].id,&v[j].score);
//		}
//		sort(v.begin(), v.end());
//		rank = 1; tmpT = -1;
//		for (int j = 0; j < k; j++) {
//			if (tmpT != v[j].score) {
//				rank = j + 1;
//				tmpT = v[j].score;
//			}
//			v[j].localRank = rank;
//			v[j].local = i;
//			fin.push_back(v[j]);
//		}
//	}
//	sort(fin.begin(), fin.end());
//	int N = fin.size();
//	printf("%d\n", N);
//	for (int i = 0; i < N; i++) {
//		printf("%013lld ", fin[i].id);
//		if (tmpT != fin[i].score) {
//			rank = i + 1;
//			tmpT = fin[i].score;
//		}
//		printf("%d %d %d\n", rank,fin[i].local,fin[i].localRank);
//	}
//	return 0;
//}