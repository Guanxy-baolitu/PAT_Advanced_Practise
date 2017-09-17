//#include<stdio.h>
//#include<string>
//#include<vector>
//#include<map>
//#include<algorithm>
//
//using namespace std;
//
//int chargePerHour[25];
//
//struct Time {
//	int month;
//	int day;
//	int hour;
//	int minute;
//	int absoluteTime;
//	void calAbsTime() {
//		absoluteTime =  day * 24 * 60 + hour * 60 + minute;
//	}
//	bool operator <(const Time& b)const {
//		return absoluteTime < b.absoluteTime;
//	}
//};
//
//struct E {
//	char name[21];
//	Time t;
//	bool isStartState;
//	bool operator <(const E& b)const {
//		int tmp = strcmp(name, b.name);
//		if (0 != tmp) {
//			return tmp < 0;
//		}
//		else {
//			return t < b.t;
//		}
//	}
//}Bill[1001];
//
//float calcuBill(E a) {
//	int sum = chargePerHour[a.t.hour] * a.t.minute + chargePerHour[24] * 60 * a.t.day;
//	for (int i = 0; i < a.t.hour; i++) {
//		sum += chargePerHour[i] * 60;
//	}
//	return sum*1.0 / 100;
//}
//
//int main() {
//	int n;
//	//计费规则输入
//	chargePerHour[24] = 0;
//	for (int i = 0; i < 24; i++) {
//		scanf("%d", &chargePerHour[i]);
//		chargePerHour[24] += chargePerHour[i];
//	}
//	scanf("%d", &n);
//	//记录输入
//	char state[12];
//	for (int i = 0; i < n; i++) {
//		scanf("%s", Bill[i].name);
//		scanf("%d:%d:%d:%d", &Bill[i].t.month, &Bill[i].t.day, &Bill[i].t.hour, &Bill[i].t.minute);
//		Bill[i].t.calAbsTime();
//		scanf("%s", state);
//		if (state[1] == 'n') {
//			Bill[i].isStartState = true;
//		}
//		else {
//			Bill[i].isStartState = false;
//		}
//	}
//	//整理
//	sort(Bill, Bill + n);
//	map<string, vector<E>> customers;
//	for (int i = 1; i < n; i++) {
//		if (strcmp(Bill[i].name, Bill[i - 1].name) == 0 && Bill[i - 1].isStartState == 1 && Bill[i].isStartState == 0) {
//			string theName = Bill[i].name;
//			customers[theName].push_back(Bill[i - 1]);
//			customers[theName].push_back(Bill[i]);
//		}
//	}
//	for (auto it : customers) {
//		vector<E> temp = it.second;
//		printf("%s %02d\n", it.first.c_str(), temp[0].t.month);
//		float total = 0;
//		for (int i = 1; i < temp.size(); i += 2) {
//			float thisBill = calcuBill(temp[i])-calcuBill(temp[i - 1]);
//			printf("%02d:%02d:%02d %02d:%02d:%02d %d $%.2f\n", 
//				temp[i - 1].t.day, temp[i - 1].t.hour, temp[i - 1].t.minute, 
//				temp[i].t.day, temp[i].t.hour, temp[i].t.minute, 
//				temp[i].t.absoluteTime - temp[i - 1].t.absoluteTime, thisBill);
//			total += thisBill;
//		}
//		printf("Total amount: $%.2f\n",total);
//	}
//	return 0;
//}