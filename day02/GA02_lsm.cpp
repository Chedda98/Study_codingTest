#include <iostream>
/*
	�ۼ���: �̻�
	�ۼ���: 2019-11-06
*/
using namespace std;
int main()
{
	
	int price = 0, ck=0;//cn �� ������ ���� price�� ��ġ�� ��, ck�� check����
	int coin_count = 0;
	/*cn = 10; price = 28495;*/
	int co[6] = { 1,5,10,50,100,500};

	//���� �Է¹޴� ���� ���� ���� �ƴ� ��� ���α׷� ����
	cin >> price;

	if (price < 1 || price>1000)
		return 0;
	//�Ʒ� ���� ã�� ���Ҷ� �� ���� ū �������� Ŭ�� ���� ū �������� �ʱⰪ ����
	price = 1000 - price;
	
	
	//���� ����� ���� ã�� ����
	for (int i = 0; i < 6; i++)
	{
		if (co[i] - price > 0)
		{
			ck = i;
			break;
		}
	}
	//�������� �������
	for (int i = ck;i>=0; i--)
	{
		coin_count += price / co[i];
		cout << co[i] << "��¥�� "<< price / co[i]<< "�� //���� ���μ�" << coin_count << endl;
		price %= co[i];
		if (price == 0)break;
	}
	
	

	cout << "�� ������ ����: " << coin_count << endl;
	return 0;
}