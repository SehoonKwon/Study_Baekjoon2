//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//vector<int> v1, v2;
//
//int N, A, B;
////int Array[100001] = { 0 };
//
//int main()
//{
//	cin >> N >> A >> B;
//
//	int Jimin = A;
//	int Hansoo = B;
//
//	for (int i = 1; i < N+1; i++)
//	{
//		v1.push_back(i);
//	}
//
//	////////��ʸ�Ʈ ����
//	int cnt = 1;
//	int Max = 0;
//	int flag = 0;
//	
//	while (flag == 0)
//	{
//		if (v2.empty())
//		{
//			//�����̶� �Ѽ� ��ȣ�� 1������ ��� (���� ���ɼ�)
//			if (Jimin - Hansoo == 1 || Jimin - Hansoo == -1)
//			{
//				Max = max(Jimin, Hansoo);
//
//				if ((Max % 2) == 0) //�ٴ°��
//				{
//					flag = 1;
//					break;
//				}
//
//			}
//
//			for (int i = 1; i < v1.size(); i = i + 2)
//			{
//				v2.push_back((i + 1) / 2);
//			}
//
//			if ((Jimin % 2) == 0) Jimin = Jimin / 2;
//			else Jimin = Jimin / 2 + 1;
//
//			if ((Hansoo % 2) == 0) Hansoo = Hansoo / 2;
//			else Hansoo = Hansoo / 2 + 1;
//
//			v1.clear();
//			cnt++;
//		}
//
//		else
//		{
//			//�����̶� �Ѽ� ��ȣ�� 1������ ��� (���� ���ɼ�)
//			if (Jimin - Hansoo == 1 || Jimin - Hansoo == -1)
//			{
//				Max = max(Jimin, Hansoo);
//
//				if ((Max % 2) == 0) //�ٴ°��
//				{
//					flag = 1;
//					break;
//				}
//
//			}
//
//			for (int i = 1; i < v2.size(); i = i + 2)
//			{
//				v1.push_back((i + 1) / 2);
//			}
//
//			if ((Jimin % 2) == 0) Jimin = Jimin / 2;
//			else Jimin = Jimin / 2 + 1;
//
//			if ((Hansoo % 2) == 0) Hansoo = Hansoo / 2;
//			else Hansoo = Hansoo / 2 + 1;
//
//			v2.clear();
//			cnt++;
//		}
//	}
//
//	cout << cnt;
//
//	return 0;
//}