#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int n = 0, sum=0, ck=0, tp=0;
	cout << "�������� �Է��ϼ���" << endl;
	cin >> n;
	int* tmp = new int[n];
	
	for (int i = 0; i < n; i++)
	{
		cin >> tmp[i];
		sum += tmp[i];
	}
	
	//������ ���� ������� �����Ѵ�.
	sort(tmp,tmp+n,greater<int>());
	//����/������ �б����� ���Ѵ�.
	double check = (double)sum / n;
	for (int i = 0; i < n; i++)
	{
		if (tmp[i] >= check)
		{
			ck++;
			tp = tmp[i];
		}

	}

	cout << "�ִ�� ���� �� �ִ� ����: " <<tp*ck<<endl;






}