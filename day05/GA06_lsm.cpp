/* 
�ۼ��� : �̻�
�ۼ��� : 2019-12-18
*/
#include <iostream>
#include<algorithm>

using namespace std;

int main() {
	//���� �޴� ����
	int num=0,result=0;
	do{
		cout << "�� �Է�";
		cin >> num;
		if (num <= 0)
		{
			cout << "���� �����Դϴ�."<<endl;
			num = 0;
		}
	} while (!num);
	cout << "N : " << num << endl;

	//���� ���� �ڸ�����ŭ�� �迭 �Ҵ�
	int length = 0, temp=num;
	while (temp)
	{
		temp = temp / 10;
		length++;
	}
	int* ar = new int[length];
	for (int i = 0; i < length; i++)
	{
		ar[i] = num % 10;
		num /= 10;
	}
	        
	//���� ���ڰ� 30�� ����� �³� �Ǵ��ϴ� ����.
	sort(ar, ar + length, greater<int>());
	for (int i = 0; i < length; i++)
	{
		result *= 10;
		result += ar[i];
	}
	if (!(result/30))result = -1;
	
	//���� ���
	cout << "������ " << result << endl;
}