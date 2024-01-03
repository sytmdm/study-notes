#pragma  once
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<string>
using namespace std;

class MyString
{
	//�������ơ����������
	friend ostream& operator<< (ostream& cout, MyString & str);
	friend istream& operator>> (istream& cin, MyString & str);
public:
	MyString(const char * str);
	MyString(const MyString & str);

	~MyString();

	//����=�����
	MyString& operator = (const char * str);
	MyString& operator=(const MyString & str);

	//����[]�����
	char& operator[](int index);

	//���� +�����
	MyString operator+(const char * str);
	MyString operator+(const MyString& str);

	//���� == �����
	bool operator==(const char * str);
	bool operator==(const MyString & str);

	void getSize();


private:
	char * pString; //ִ�ж�����ָ��
	int m_Size; // �ַ�����С

};


