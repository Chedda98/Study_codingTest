//��¥: 2019-10-30
//�ۼ��� �̻�
//�׸��� �˰���: ATM 

#include <iostream>
#include <stdlib.h>
using namespace std;

int compare(const void *a, const void *b)
{
	int num1 = *(int*)a;
	int num2 = *(int*)b;
	if (num1 > num2)
		return 1;
	else if (num1 < num2)
		return -1;
	else
		return 0;
}

int main() {

	string intro = "��� ���� �Է��ϼ���.(1<=N<=1000) ";
	string intro2 = "�� ����� ����ð��� ���⸦ �������� �Է��ϼ���.";
	int pNum = 0;
	cout << intro;
	cin >> pNum;
	//�迭 ����
	int *ar=new int[pNum];
	cout << intro2;
	for (int i = 0; i < pNum; i++)
	{
		cin >> ar[i];
	}
	//����
	qsort(ar, pNum, sizeof(int), compare);
	
	int result = 0;
	for (int i = 0; i < pNum; i++)
	{
		result += (pNum-i)*ar[i];
	}
	cout << result;
	return 0;
}