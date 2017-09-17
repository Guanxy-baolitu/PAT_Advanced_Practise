//#include<stdio.h>
//#include<algorithm>
//#include<math.h>
//using namespace std;
//
//int segments[10001];
//
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &segments[i]);
//	}
//	sort(segments, segments + n);
//	int loc = 1;
//	float sum = (float)segments[0];
//	while (loc != n) {
//		sum = (sum + segments[loc])*1.0 / 2;
//		loc++;
//	}
//	printf("%d", (int)sum);
//	return 0;
//}