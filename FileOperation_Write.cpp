#include<iostream>
#include<fstream>
using namespace std;
//�ı��ļ�  д�ļ�
void test()
{
	//1������ͷ�ļ� fstream

	//2������������
	ofstream ofs;

	//3��ָ���򿪷�ʽ
	ofs.open("test.txt", ios::out);

	//4��д����
	ofs << "����������" << endl;

	//5���ر��ļ�
	ofs.close();
}
int main()
{
	test();
	system("pause");
	return 0;
}