//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<string.h>
//using namespace std;
//struct Node {
//	char name[9];
//	int age;
//	int wealth;
//	bool operator <(const Node& b)const {
//		if (wealth != b.wealth)
//			return wealth > b.wealth;
//		if (age != b.age)
//			return age < b.age;
//		int tmp = strcmp(name, b.name);
//		return tmp < 0;
//	}
//
//}buf[100001];
//
//int main() {
//	int N, K;
//	scanf("%d %d", &N, &K);
//	char tmpN[9];
//	int tmpA, tmpW;
//	int ageCount[201] = {0};
//	for (int i = 0; i < N;i++) {
//		scanf("%s %d %d", buf[i].name, &buf[i].age, &buf[i].wealth);
//	}
//	sort(buf,buf+N);
//	vector<Node> v;
//	for (int i = 0; i < N; i++) {
//		if (ageCount[buf[i].age] < 100) {
//			v.push_back(buf[i]);
//			ageCount[buf[i].age]++;
//		}
//	}
//	int n, low, high;
//	vector<Node> result;
//	for (int i = 1; i <= K;i++) {
//		printf("Case #%d:\n",i);
//		scanf("%d %d %d", &n, &low, &high);
//		if (n == 0 ) {
//			printf("None\n");
//		}
//		else {
//			result.clear();
//			for (vector<Node>::iterator it = v.begin(); it != v.end(); it++) {
//				if((*it).age>=low&& (*it).age<=high)
//					result.push_back(*it);
//			}
//			if (result.empty()==true)
//				printf("None\n");
//			else {
//				n = n < result.size() ? n:result.size();
//				for (int i = 0; i < n; i ++) {
//					printf("%s %d %d\n", result[i].name, result[i].age, result[i].wealth);
//				}
//			}
//		}
//	}
//	return 0;
//}