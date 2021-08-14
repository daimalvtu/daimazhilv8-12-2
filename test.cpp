#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>

//折半查找算法
//int zheban(int x,int arr[],int n)
//{
//	int low = 0;
//	int high = n;
//	int a=0 ;
//	int i = 0;
//	//while(low<=high)用于不是定义函数的时候用
//	while (arr[a] != x)
//	{
//		a = (low + high) / 2;
//		if (low > high)
//			break;
//		else if (arr[a] > x)
//			high = a - 1;
//		else if (arr[a] < x)
//			low = a + 1;
//		 
//	}
//	return a;
//	if (low > high)
//		printf("找不到");
//	
//}
//int main()
//{
//	int acc[13] = {1,2,3,4,5,6,7,8,9,10,11,12};
//	int b = 4;
//计算数组元素个数
//	int se = sizeof(acc) / sizeof(acc[0]);
//	int c = zheban(b,acc,se);
//	printf("%d\n", c);
//}
/*int main()
{
	return 0*/;
//}
////编写代码，演示多个字符从两端移动，向中间汇聚
//int main()
//{
//	char arr1[] = "welcome to bit llllll";
//	char arr2[]="#####################";
//	/*int a = strlen(arr2);
//	printf("%d", a);*/
//	int left = 0;
//	int right = strlen(arr1)-1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n",arr2);
//		Sleep(1000);//休息函数，单位为毫秒(第一个字母s要大写)
//		system("cls");//执行系统命令的函数，cls是清空屏幕的意思
//	}
//	printf("%s\n",arr2);
//	return 0;
//
//}
//模拟用户登录，只允许输入三次密码，如果正确，则提示登录成功，如果三次均输入错误，则退出程序
//int main()
//{
//	int i = 0;
//	char password[] = { 0 };
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：\n");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("密码输入正确\n");
//			break;
//		}
//		else
//			printf("密码输入错误\n");
//	}
//	if (3 == i)
//	{
//		printf("密码三次输入错误，锁定状态\n");
//	}
//	return 0;
//}
int main（）
{
	return 0;
}