#include <iostream>
/*
	�ۼ���: �̻�
	�ۼ���: 2019-11-20
*/
using namespace std;
int main()
{

	int price = 0, ck = 0;
	int coin_count = 0;
	int co[6] = { 1,5,10,50,100,500 };
	cout << "������ �Է��ϼ���";
	cin >> price;

	if (price < 1 || price>1000)
		return 0;
	price = 1000 - price;


	//���� ����� ���� ã�� ����
	for (int i = 0; i < 6; i++)
	{
		if (co[i] - price > 0)
		{
			break;
		}
		ck = i;
	}
	//�������� �������
	for (int i = 5; i >= 0; i--)
	{
		coin_count += price / co[i];
		cout << co[i] << "��¥�� " << price / co[i] << "�� //���� ���μ�" << coin_count << endl;
		price %= co[i];
		if (price == 0)break;
	}



	cout << "�� ������ ����: " << coin_count << endl;
	return 0;
}