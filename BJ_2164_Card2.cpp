//#include <iostream>
//#include <queue>
//using namespace std;
//
////�������� ���쳪 card1����ó�� ���ͷ� �����ϸ� �ð��ʰ�.
////�̰� �ε����� ����� ������ �� ���ܾ� �ǹǷ� O(N)�� �߰������� �ɷ��� �����ΰ���
////���� ť�� �̿��ؼ� �ٷιٷ� �о��ָ� �ذ� ����. FIFO���°� �ʿ��ϸ� ť�� �̿�����
//
//int N;
//queue<int> q;
//
//int main()
//{
//	cin >> N;
//
//	for (int i = 1; i < N+1; i++)
//		q.push(i);
//
//	while ((q.size() != 1))
//	{
//		q.pop();
//		int temp;
//		temp = q.front();
//		q.pop();
//		q.push(temp);
//	}
//
//	cout << q.front();
//
//	return 0;
//}