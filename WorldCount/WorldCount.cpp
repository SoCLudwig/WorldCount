#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(int argc, char* argv[])
{
	//�ļ���
	fstream fin;
	fin.open(argv[2]);
	int counter = 0;//������
	//ͳ���ַ�����
	if (argv[1][1] == 'c')
	{
		char ch;
		while (fin && fin.get(ch))
		{
			//cout << ch;
			counter++;
		}
		cout << "�ַ�����" << counter << endl;

	}
	//ͳ�Ƶ�����
	else
	{
		char ch;
		char side;//���һλ�ٽ��ж�
		int flagAlph = 0;
		int flagChar = 0;
		//���ַ�����ĸ����״̬��
		while (fin && fin.get(ch))
		{
			side = ch;
			if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
			{
				flagAlph++;
				flagChar = 0;
			}
			else
			{
				flagChar++;
			}
			//һ������ĸ���Ϳ�ʼ��⣬��������ַ���ֹͣ
			if (flagAlph != 0 && flagChar != 0)//��⵽�����ַ�
			{
				counter++;
				flagAlph = 0;
			}
		}
		//�ٽ����������һλ����ĸ
		if ((side >= 'a' && side <= 'z') || (side >= 'A' && side <= 'Z'))
		{
			counter++;
		}
		cout << "��������" << counter << endl;
	}
	fin.close();
	return 0;
}