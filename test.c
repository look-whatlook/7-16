#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int(*pa)(int, int) = Add;
//	printf("%d\n", Add(2, 3));
//	printf("%d\n", pa(2, 3));
//	printf("%d\n", (*pa)(2, 3));
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	//一个数组存放4个函数的地址==函数指针的数组
//	//int (*pa)(int, int) = Add;//Sub/Mul/Div
//	int (*parr[4])(int, int) = { Add,Sub,Mul,Div };
//	int i = 0;
//	for (i = 0; i < 4; i++) //parr==Add 地址相同
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
//	return 0;
//}
//
//void menu()
//{
//	printf("**************************\n");
//	printf("**   1. add      2. sub **\n");
//	printf("**   3. mul      4. div **\n");
//	printf("**   5. xor      0. exit**\n");
//	printf("**************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int Xor(int x, int y)
//{
//	return x^y;
//}

//int main()
//{
//	int input=0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入俩个操作数:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;		
//		case 2:
//			printf("请输入俩个操作数:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;		
//		case 3:
//			printf("请输入俩个操作数:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;		
//		case 4:
//			printf("请输入俩个操作数:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;		
//		case 5:
//			printf("请输入俩个操作数:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Xor(x, y));
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int (*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div,Xor };
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("请输入俩个操作数:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
//	return 0;
//}

//void Calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入俩个操作数:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 5:
//			Calc(Xor);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}

void print(char* str)
{
	printf("hehe:%s", str);
}
void test(void (*p)(char*))
{
	printf("test\n");
	p("bit");
}


int main()
{
	test(print);
	return 0;
}


