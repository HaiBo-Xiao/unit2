// unit2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

//注释，两种//和/*...*/
//断点，F9或者双击左边的灰色小条
int main()
{
	cout << "size of int is  " << sizeof(int) << "bytes"<<endl; 
	cout << "size of long long is " << sizeof(long long) << "bytes"<<endl;
	cout << "size of short is  " << sizeof(short) << "bytes"<<endl;
	cout << "size of char is  " << sizeof(char) << "bytes"<<endl;
	cout << "size of bool is  " << sizeof(bool) << "bytes" << endl;
	//return 0;
	 int x, y, z;
	y = 100;
	z = 50;
	x = y - z;
	cout << "x= " << x << endl;
	x = z - y;
	cout << "x=  " << x << endl;
	int a, b;
	cout << "please input a";

	cin >> a;

	cout << "please input b";
	cin >> b;

	x = a - b >0? a-b : b-a;
	cout << "绝对值是" << x << endl;

	return 0;


}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
