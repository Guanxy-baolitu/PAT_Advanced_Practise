//#include<stdio.h>
//#include<vector>
//#include<algorithm>
//#define N 501
//#define Inf 99999999
//using namespace std;
//
//struct node {
//	double price;
//	int distance;
//	bool operator<(const node& b) {
//		return distance < b.distance;
//	}
//}Gas[N];
//
//int main() {
//	double capa, dis, Davg;
//	int n;
//	scanf("%lf%lf%lf%d", &capa, &dis, &Davg, &n);
//	bool start = false;
//	for (int i = 0; i < n; ++i) {
//		scanf("%lf", &Gas[i].price);
//		scanf("%d", &Gas[i].distance);
//		if (Gas[i].distance == 0) {
//			start = true;
//		}
//	}
//	if (start == false) {
//		printf("The maximum travel distance = 0.00\n");
//		return 0;
//	}
//	sort(Gas, Gas + n);
//	Gas[n].price = 0;
//	Gas[n].distance = dis;
//	double sumPrice = 0.0, nowPrice = Gas[0].price, nowCapa = 0;
//	double nowDis = 0, canGetMaxDis, leftDis=0.0;
//	int nowGas = 0;
//	while (nowDis < dis) {
//		canGetMaxDis = nowDis + capa*Davg;
//		double minPrice = Inf, minPriceDis = 0;
//		bool hasGas = false;
//		for (int i = nowGas; i <= n &&Gas[i].distance <= canGetMaxDis; ++i) {
//			if (Gas[i].distance <= nowDis) continue;
//			if (Gas[i].price<nowPrice) {
//				sumPrice += (Gas[i].distance - nowDis - leftDis)*nowPrice / Davg;
//				leftDis = 0.0;
//				nowPrice = Gas[i].price;
//				nowDis = Gas[i].distance;
//				nowGas = i;
//				hasGas = true;
//				break;
//			}
//			if (Gas[i].price < minPrice) {
//				minPrice = Gas[i].price;
//				minPriceDis = Gas[i].distance;
//			}
//		}
//		if (hasGas==false) {//inferior case
//			if (minPrice != Inf) {
//				sumPrice += (nowPrice*(capa - leftDis / Davg));
//				leftDis = capa*Davg - (minPriceDis - nowDis);
//				nowPrice = minPrice;
//				nowDis = minPriceDis;
//			}
//			else {
//				nowDis += capa*Davg;
//				printf("The maximum travel distance = %.2f\n", nowDis);
//				return 0;
//			}
//		}
//	}
//	printf("%.2f\n", sumPrice);
//	return 0;
//}