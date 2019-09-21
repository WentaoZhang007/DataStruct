/*******************************************************************************
*
* FileName : test_for_string.cpp
* Comment  : �Զ����ַ�����String��Ӧ��
* Version  : 1.0
* Author   : haibindev.cnblogs.com
* Date     : 2007-5-31 3:34
*
*******************************************************************************/

#include <iostream>
#include "String.h"

using namespace std;

String f(String a, String b)
{
	try {
	a[2]='x';
	char c=b[3];
	cout<<"in f: "<<a<<' '<<b<<' '<<c<<'\n';
	}
	catch (String::Range) {
		cout<<"error: the subscript is out of range!\n";
	}
	return b;
}

int main()
{
	String x,y;
	cout<<"Please enter two strings:\n";
	cin>>x>>y;
	cout<<"input: "<<x<<' '<<y<<'\n';
	String z=x;
	y=f(x,y);
	//ͨ����ֵ���ݵĲ����ں����еĲ�����Ӧ�ı����ǵ�ֵ
	if (x!=z) cout<<"x corrupted!\n";
	x[0]='!';
	if (x == z) cout<<"write failed!\n";
	cout<<"exit: "<<x<<' '<<y<<' '<<z<<'\n';
	x+=y;
	cout<<x<<'\n';
	String w;
	cin>>w;
	cout<<w<<endl;
	cout<<char(w[1])<<endl;
	char* s=w.c_star();
	cout<<s<<endl;
	return 0;
}

