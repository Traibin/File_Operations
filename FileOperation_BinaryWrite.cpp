#include<iostream>
#include<fstream>
#include<string>
using namespace std;
//�������ļ� д�ļ�
class Person
{
public:
	char m_Name[64];
	int m_Age;
};
void test()
{
	//1������ͷ�ļ�

	//2������������
	ofstream ofs;
	//ofstream ofs("Person.txt", ios::out | ios::binary);Ҳ������������Ϊofstream��һ�����캯��
	
	//3�����ļ�
	ofs.open("Person.txt", ios::out | ios::binary);

	//4��д�ļ�
	Person p = { "����",18 };
	ofs.write((const char*)&p, sizeof(Person));

	//5���ر��ļ�
	ofs.close();

}
int main()
{
	test();
	system("pause");
	return 0;
}