//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<limits.h>
//using namespace std;
//
//struct player {
//	int arriveTime;
//	int servedTime;
//	int playingLen;
//	bool isVip;
//	bool operator <(const player& b)const {
//		return arriveTime < b.arriveTime;
//	}
//};
//
//bool cmpL(player a, player b) {
//	return a.servedTime < b.servedTime;
//}
//
//struct table {
//	int countPlayer;
//	int nextTime;
//	bool isVip;
//};
//
//int timeToSec(int hour, int min, int sec) {
//	return hour * 3600 + min * 60 + sec;
//}
//
//void printTime(int s) {
//	printf("%02d:", s / 3600);
//	s %= 3600;
//	printf("%02d:", s / 60);
//	s %= 60;
//	printf("%02d ", s);
//}
//
//const int openTime= timeToSec(8, 0, 0);
//const int closeTime = timeToSec(21, 0, 0);
//int main() {
//	int n,k,kv;
//	scanf("%d", &n);
//	vector<player> pv(n);
//	for (int i = 0; i < n; i++) {
//		int hour, min, sec,len;
//		int is;
//		scanf("%d:%d:%d%d%d", &hour, &min, &sec,&pv[i].playingLen, &is);
//		pv[i].arriveTime = timeToSec(hour, min, sec);
//		pv[i].servedTime = 0;
//		pv[i].isVip = ((is == 1) ? true : false);
//	}
//	scanf("%d%d", &k,&kv);
//	vector<table> tv(k);
//	for (int i = 0; i < k; i++) {
//		tv[i].isVip = false;
//		tv[i].nextTime = openTime;
//		tv[i].countPlayer = 0;
//	}
//	for (int i = 0; i < kv; i++) {
//		int idx;
//		scanf("%d", &idx);
//		tv[idx-1].isVip = true;
//	}
//	sort(pv.begin(), pv.end());
//	int nowTime = openTime;
//	int sbFinishTime=INT32_MAX;
//	int it = 0, itend = 0, jt = 0, nextVip = 0;
//	while (nowTime < closeTime&&it<n) {//每次循环用一个桌或徒增岁月
//		int nextTable, nextPlayer;
//		//空桌
//		sbFinishTime = INT32_MAX;
//		int firstEmpty = -1;
//		for (int i = 0; i < k; i++) {
//			if (tv[i].nextTime < pv[it].arriveTime&&firstEmpty == -1)
//				firstEmpty = i;
//			if (tv[i].nextTime < sbFinishTime) {
//				sbFinishTime = tv[i].nextTime;
//				nextTable = i;
//			}
//		}
//		if(firstEmpty!=-1)
//			nextTable = firstEmpty;
//		nowTime = max(sbFinishTime, pv[it].arriveTime);
//		//有无队
//		nextVip = -1;
//		itend = it;
//		while (itend!=n&&pv[itend].arriveTime <= nowTime) {
//			if (pv[itend].isVip) {
//				nextVip = itend;
//			}
//			itend++;
//		}
//		nextPlayer = it;
//		//非VIP桌，队首为VIP
//		int si = k;
//		if (tv[nextTable].isVip==false&&pv[it].isVip&&pv[it].servedTime==0) {
//			for ( si= 0; si < k; si++) {
//				if (tv[si].isVip&&tv[si].nextTime<=pv[it].arriveTime) {
//					nextTable = si;
//					break;
//				}
//			}
//		}
//		//VIP桌，队内有VIP
//		if (tv[nextTable].isVip && nextVip !=-1&&pv[nextVip].servedTime == 0&&nextVip!=it) {
//			nextPlayer = nextVip;
//			it--;
//		}
//		pv[nextPlayer].servedTime = max(sbFinishTime,pv[nextPlayer].arriveTime);
//		do {
//			it++;
//		} while (it<n&&pv[it].servedTime != 0);
//		tv[nextTable].nextTime = pv[nextPlayer].servedTime + pv[nextPlayer].playingLen * 60;
//		if (pv[nextPlayer].servedTime >= closeTime)
//			continue;
//		tv[nextTable].countPlayer++;
//	}
//	sort(pv.begin(), pv.end(), cmpL);
//	for (int i = 0; i < n; i++) {
//		if (pv[i].servedTime >= closeTime)
//			break;
//		if (pv[i].servedTime == 0)
//			continue;
//		printTime(pv[i].arriveTime);
//		printTime(pv[i].servedTime);
//		printf("%d\n", (pv[i].servedTime - pv[i].arriveTime+30) / 60);
//	}
//	for (int i = 0; i < k; i++) {
//		if (i != 0)
//			printf(" ");
//		printf("%d", tv[i].countPlayer);
//	}
//	return 0;
//}