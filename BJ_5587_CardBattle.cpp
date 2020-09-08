//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int N;
//int Card[201] = { 0 };
//
//int main()
//{
//	cin >> N;
//
//	int *S = new int[N];
//	int *K = new int[N];
//
//	for (int i = 1; i < 2 * N + 1; i++)
//	{
//		Card[i] = i;
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> S[i];
//		Card[S[i]] = 0;
//	}
//
//	int K_cnt = 0;
//	for (int i = 1; i < 2 * N + 1; i++)
//	{
//		if (Card[i] != 0)
//		{
//			K[K_cnt] = Card[i];
//			K_cnt++;
//		}
//		if (K_cnt == N) break;
//	}
//
//	sort(S, S + N);
//	sort(K, K + N);
//
//	//Game Start
//	int table_card = 0;
//	int S_cnt = N;
//
//	//ù ������ �����
//	table_card = S[0];
//	S[0] = 0;
//	S_cnt--;
//	int flag = 1; //flag 1 �ٻ��� ����
//
//	//����� ī�� �� Ȯ��
//	if (S_cnt == 0)
//	{
//		cout << K_cnt << endl << S_cnt;
//		delete[] S;
//		delete[] K;
//		return 0;
//	}
//
//	while (1)
//	{
//		if (flag == 1)
//		{		//2��° �ٻ��� ī�� ����
//			for (int i = 0; i < N; i++)
//			{
//				if (K[i] > table_card)
//				{
//					table_card = K[i];
//					K[i] = 0;
//					K_cnt--;
//					flag = 0; //����� ����
//					break;
//				}
//
//				//�ٻ��� �����ε� �� ī�尡 ���°��
//				if (i == N - 1 && flag == 1)
//				{
//					flag = 0; //����� ���ʷ�
//					table_card = 0;
//				}
//			}
//
//			//�ٻ��� ī�� �� Ȯ��
//			if (K_cnt == 0)
//			{
//				cout << K_cnt << endl << S_cnt;
//				delete[] S;
//				delete[] K;
//				return 0;
//			}
//		}
//
//		else //3��° �ٽ� ����� ����
//		{
//			for (int i = 0; i < N; i++)
//			{
//				if (S[i] > table_card)
//				{
//					table_card = S[i];
//					S[i] = 0;
//					S_cnt--;
//					flag = 1; //�ٻ��� ����
//					break;
//				}
//
//				//����̰� �� ī�尡 ���°��
//				if (i == N - 1 && flag == 0)
//				{
//					flag = 1; // ����� ���ʷ� �� �ѱ�
//					table_card = 0;
//				}
//			}
//
//			//����� ī�� �� Ȯ��
//			if (S_cnt == 0)
//			{
//				cout << K_cnt << endl << S_cnt;
//				delete[] S;
//				delete[] K;
//				return 0;
//			}
//		}
//	}
//	return 0;
//}