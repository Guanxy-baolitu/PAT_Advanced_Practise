//#include<stdio.h>
//#include <map>
//using namespace std;
//
//int main() {
//	int N, M;
//	scanf("%d %d",&N,&M);
//	int tmp;
//	multimap<int, int> V;
//	while (N != 0) {
//		scanf("%d",&tmp);
//		pair<int, int> p(tmp, N);
//		V.insert(p);
//		N--;
//	}
//
//	int v1, v2;
//	int i;
//	int small=520;
//	for (multimap<int, int>::iterator it = V.begin(); it != V.end(); it++) {
//		v1 = (*it).first;
//		v2 = M - v1;
//		if (((v2 == v1)&&V.count(v2) > 1) || (v2 != v1)&& V.count(v2) > 0)
//			if (v1 < small)
//				small = v1;
//	}
//	if (small != 520)//´æÔÚ
//		printf("%d %d", small, M - small);
//	else
//		printf("No Solution");
//	return 0;
//}