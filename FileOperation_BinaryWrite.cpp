#include<iostream>
#include<fstream>
#include<string>
using namespace std;
//二进制文件 写文件
class Person
{
public:
	char m_Name[64];
	int m_Age;
};
void test()
{
	//1、包含头文件

	//2、创建流对象
	ofstream ofs;
	//ofstream ofs("Person.txt", ios::out | ios::binary);也可以这样，因为ofstream有一个构造函数
	
	//3、打开文件
	ofs.open("Person.txt", ios::out | ios::binary);

	//4、写文件
	Person p = { "张三",18 };
	ofs.write((const char*)&p, sizeof(Person));

	//5、关闭文件
	ofs.close();

}
int main()
{
	test();
	system("pause");
	return 0;
}