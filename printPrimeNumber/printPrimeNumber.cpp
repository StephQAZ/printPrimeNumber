﻿// printPrimeNumber.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include "stdlib.h"
#include <iostream>

using namespace std;

//判断输入数是否为质数
//返回值
//0：不是质数
//1：是质数
int checkPrimeNumber(int n) {
	if (n == 2) {
		return 1;
	}
	else if (n % 2 == 0) {
		return 0;
	}
	else {
		for (int i = 3; i < sqrt(n); i++) {
			if (n % i == 0) {
				return 0;
			}
		}
		return 1;
	}
}

int main()
{
	int totalNum = 100;
	for (int i = 2; i < totalNum; i++) {
		if (checkPrimeNumber(i)) {
			cout << "the number is:" << i << endl;
		}
	}

	system("pause");

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
