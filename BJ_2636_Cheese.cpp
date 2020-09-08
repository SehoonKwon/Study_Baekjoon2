//#include <iostream>
//#include <cstring>
//#include <queue>
//#include <vector>
//using namespace std;
//
////2638�� �����ʹ� �ٸ��� �� ĭ�̶� ���˽� ����
//
//int N, M;
//int Array[101][101];
//int visit[101][101];
//int dx[] = { 0,0,-1,1 };
//int dy[] = { 1,-1,0,0 };
//int time = 0;
//int cnt = 0, r_cnt = 0;
//
//struct point
//{
//	int x, y;
//};
//
//void input()
//{
//	cin >> N >> M;
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			cin >> Array[i][j];
//			if (Array[i][j] == 1) cnt++;
//		}
//	}
//}
//
//bool Finish()
//{
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//			if (Array[i][j] == 1) return false;
//	}
//
//	return true;
//}
//
////ġ�� ���� üũ => �������̱� ����! ��� �ٱ� ������ ���� ��������ٰ� ��������. ���ΰ���� ġ� �ѷ��׿��� ���ٸ���
//void in_check()
//{
//	visit[0][0] = true;
//	queue<point> q;
//	q.push({ 0, 0 });
//
//	while (!q.empty())
//	{
//		int X = q.front().x;
//		int Y = q.front().y;
//		q.pop();
//
//		for (int i = 0; i < 4; i++)
//		{
//			int nx = X + dx[i];
//			int ny = Y + dy[i];
//
//			if (nx > -1 && nx < M && ny > -1 && ny < N)
//			{
//				if (visit[ny][nx] == false)
//				{
//					if (Array[ny][nx] == 0)
//					{
//						visit[ny][nx] = true;
//						Array[ny][nx] = -1;
//						q.push({ nx, ny });
//					}
//
//					else if (Array[ny][nx] > 0)
//					{
//						Array[ny][nx]++;
//					}
//				}
//			}
//		}
//	}
//
//	return;
//}
//
////������ �ٷ� �� ġ�� ������ ���� void -> int ������ �ٲ���
//int remove()
//{
//	int kill = 0;
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			if (Array[i][j] > 1)
//			{
//				Array[i][j] = -1;
//				r_cnt++;
//				kill++;
//			}
//		}
//	}
//
//	return kill;
//}
//
//void recovery()
//{
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			if (Array[i][j] == -1) Array[i][j] = 0;
////			else if (Array[i][j] > 0) Array[i][j] = 1;
//		}
//	}
//}
//
//void solve()
//{
//	// �������� üũ -> ġ�� �ܺ�üũ + ���˸� üũ -> ���˸� ���� -> �ݺ�
//	
//	int kill = 0;
//	while (1)
//	{
//		if (r_cnt == cnt)
//		{
//			cout << time << endl;
//			cout << kill << endl;
//			return;
//		}
//
//		memset(visit, 0, sizeof(visit));
//		in_check();
//		kill = remove();
//		recovery();
//		time++;
//	}
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	input();
//
//	solve();
//
//	return 0;
//}