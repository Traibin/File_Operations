#include<iostream>
#include<fstream>
#include<string>
using namespace std;
//�ı��ļ�  ���ļ�
void test()
{
	//1������ͷ�ļ�

	//2������������
	ifstream ifs;

	//3�����ļ� ���ж��Ƿ�򿪳ɹ�
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())//is_open�����ж��Ƿ��
	{
		//·��д��ͻᱨ��
		cout << "�ļ���ʧ��" << endl;
		return;
	}
	//4��������
	////��һ��
	//char buf[1024] = { 0 };
	//while (ifs >> buf)
	//{
	//	cout << buf << endl;
	//}
	////�ڶ���
	///*char buf[1024] = { 0 };*/
	//while (ifs.getline(buf, sizeof(buf)))
	//{
	//	cout << buf << endl;
	//}
	//������
	string buff;
	while (getline(ifs, buff))
	{
		cout << buff << endl;

	}
	////������
	//char c;
	//while ((c = ifs.get()) != EOF)//EOF  end of file �ļ�β
	//{
	//	cout << c;
	//}

		//5���ر��ļ�
		ifs.close();
}
int main()
{
	test();
	system("pause");
	return 0;
}