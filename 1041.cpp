//#include<stdio.h>
//#include<map>
//
//using namespace std;
//
//struct Node {
//	int value;
//	int sequence;
//	bool operator <(const Node& b)const {
//		return value < b.value;
//	}
//	bool operator >(const Node& b)const {
//		return value > b.value;
//	}
//	bool operator ==(const Node& b)const {
//		return value == b.value;
//	}
//};
//
//int main() {
//	int n;
//	scanf("%d",&n);
//	int tmp, num;
//	map<Node, int> M;
//	for (int i = 0; i < n;i++) {
//		scanf("%d",&tmp);
//		Node a;
//		a.value = tmp;
//		a.sequence = i;
//		if (M.find(a) != M.end()) 
//			M[a]+=1;
//		else
//			M[a] = 1;
//	}
//	map<Node, int>::iterator it;
//	int small=111111, winner;
//	bool has = false;
//	for ( it= M.begin(); it != M.end(); it++) {
//		if ((*it).second == 1) {
//			has = true;
//			if ((*it).first.sequence < small) {
//				small = (*it).first.sequence;
//				winner = (*it).first.value;
//			}
//		}
//	}
//	if(has)
//		printf("%d", winner);
//	else
//		printf("None");
//	return 0;
//}