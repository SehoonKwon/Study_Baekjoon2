//#include <iostream>
//using namespace std;
//
//int N, M, L;
//int cnt[1001] = { 0 };
//int Totalcnt = 0;
//
//void Start(int x)
//{
//	cnt[x] = cnt[x] + 1;
//	if (cnt[x] == M)
//	{
//		cout << Totalcnt;
//		return;
//	}
//
//	//������ ���� �����ؾ� ���� �˸��� ��
//	Totalcnt++;
//
//	//Ȧ����
//	if ((cnt[x] % 2) == 1)
//	{
//		if (x + L <= N)
//			Start(x + L);
//		else
//			Start(x + L - N);
//	}
//	//¦����
//	else
//	{
//		if (x - L > 0)
//			Start(x - L);
//		else
//			Start(N + x - L);
//	}
//}
//
//
//int main()
//{
//	cin >> N >> M >> L;
//
//	Start(1);
//
//	return 0;
//}