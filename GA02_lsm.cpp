#include <iostream>
/*
	�ۼ���: �̻�
	�ۼ���: 2019-11-06
*/
using namespace std;
int main()
{
	
	//������ 1~50000�� ��Ģ�� �ƴ� ��� �̸� ����Ѵ�.
	/*int* co = new int[cn]; 
	for (int i = 0; i < cn; i++)
	{
		cin >> co[i];
	}*/

	int cn = 0, price = 0, ck=0;//cn �� ������ ���� price�� ��ġ�� ��, ck�� check����
	int coin_count = 0;
	/*cn = 10; price = 28495;*/
	int co[10] = { 1,5,10,50,100,500,1000,5000,10000,50000 };

	//���� �Է¹޴� ���� ���� ���� �ƴ� ��� ���α׷� ����
	cin >> cn >>price;
	if (cn > 10 || cn < 1 || price < 1 || price>100000000)
		return 0;
	//�Ʒ� ���� ã�� ���Ҷ� �� ���� ū �������� Ŭ�� ���� ū �������� �ʱⰪ ����
	ck = cn - 1;
	
	
	//���� ����� ���� ã�� ����
	for (int i = 0; i < cn; i++)
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