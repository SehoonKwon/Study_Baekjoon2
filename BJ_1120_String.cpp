//#include <iostream>
//#include <string>
//#include <deque>
//using namespace std;
//
////�� ���� �ƹ� ���ڳ� ���� �� �ִ� -> ���̰� �׻� 0 -> ���� ������ �ּڰ��� �ʱ� ���¿��� ���� ���� �ּڰ�
//
//string A, B;
//
//int main()
//{
//	cin >> A >> B;
//	
//	int N = B.size() - A.size();
//	int AN = A.size();
//
//	int min = 99999;
//	int cnt = 0;
//
//	for (int j = 0; j < N + 1; j++)
//	{
//		cnt = 0;
//		for (int i = 0; i < AN; i++)
//		{
//			if (A[i] != B[j+i]) cnt++;
//		}
//
//		if (min > cnt) min = cnt;
//	}
//
//	cout << min;
//
//	return 0;
//}