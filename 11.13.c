//统计二进制中1的个数
//#include <stdio.h>
//int get_1(unsigned int n)
//{//无符号整数就会使负数的符号位变成有效位
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);//独特的算法，实现一次最右边的一就会消掉；
//		count++;
//	}
	/*while (n)
	{
		if((n % 2)==1);
		{
			count++;
		}
		n = n / 2;
	}*/
	/*return  count;*/
	/*int i;
	int count = 0;
	for (i = 0;i < 32;i++)
	{
		if (((n >> i) & 1) == 1)
			count++;

	}
	return count;*/

//int main()
 //       00000000000000000000000000010111
//1的补码是00000000000000000000000000000001
	//利用按位与&只要有1存在和1按位(2进制位）与结果就为1否则为0；
	/*int n;
	scanf_s("%d", &n);
	int count = get_1(n);
	printf("一的个数为%d", count);
	return 0;
}*/
//#include <stdio.h>
//int get_1(int c)
//{
//	int i;
//	int count = 0;
//	for (i = 0;i < 32;i++)
//	{
//		if (((c >> i) & 1) == 1)
//			count++;
//
//	}
//	return count;
//}

//int get_diff(int a, int b)
//{
//	int c = a ^ b;
//	return get_1(c);
//}
//int main()
//{
//	int a, b;
//	scanf_s("%d%d", &a, &b);
//	int count=get_dif(a, b);
//	printf("%d", count);
//	return 0;
//}
//int get_dif(int a, int b)
//{
//	int c = a ^ b;
//	int count = 0;
//	while (c)
//	{
//		c = c & (c - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a, b;
//	scanf_s("%d%d", &a, &b);
//	int count=get_dif(a, b);
//	printf("%d", count);
//	return 0;
//}
//  000000000000000000000000000101
// 000000000000000000000000000001 ` ` ` ` ` ` ` ` ` ` ` ` ` `                         
//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	int i;
//	printf("奇数项：\n");
//	for (i = 30;i >= 0;i-=2)
//	{
//		if ((n >> i) & 1 == 1)
//		{
//			printf(" 1 ");
//		}
//		else
//		{
//			printf(" 0 ");
//		}
//	}
//	printf("\n");
//	printf("偶数项：\n");
//	for (i = 31;i >= 1;i-=2)
//	{
//		if ((n >> i) & 1 == 1)
//		{
//			printf(" 1 ");
//		}
//		else
//		{
//			printf(" 0 ");
//		}
//	}
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	//不创建变量交换两个数；
//	int a = 3;
//	int b = 5;
//	printf("a=%d b=%d\n", a, b);
//	//加减法--  这种方法有问题，会导致溢出
//	//a = a + b;//a和b都非常大的时候相加可能会导致a的值溢出；
//	//b = a - b;
//	//a = a - b;
//	//异或法；
//	a = a ^ b;//a与b^相当于产生一个密码；这个密码赋给a；密码可以与合成这个密码的数再异或就会形成另一个合成这个密码的数
//	b = a ^ b;//这个密码与b异或就会形成原来的然后把a的值赋给b完成互换
//    a = a ^ b;     //现在这个b相当于a的值了,密码与a异或产生b的值赋给a
//	printf("a=%d b=%d", a, b);
//	return 0;
//
//}
//#include <stdio.h>
//int main()
//{
//	int i, n;
//	for (i = 1;i <= 9;i++)
//	{
//		for (n = 1;n <= 9;n++)
//		{
//			printf(" %d * %d=%d ",i,n,i*n);
//			
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main(
//#include <stdio.h>
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{/*
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d", *p);
//		p++;
//	}*/
//	/*int *p =test();
//
//	printf("%d", *p);*/
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d", &arr[9] - &arr[0]);
	//int a = 10;
	//int* pa = &a;//初始化；
	//int* pa = NULL;
	//if (pa != NULL)
	//{
	//	
	//}
	/*return 0;
}*/
//求字符串的长度；；
//计数器函数；
//递归
//利用指针运算来求
//#include <stdio.h>
//#include <string.h>
//int my_strlen(char* str)
//{
//	char * star=str;
//	while (*str++ != '\0')
//		;//1.2.3.4.5.6.7
//	return str - star-1;
//	//int count = 0;
//	//while (*str != '\0')//实质就是求到\0之前有多少个元素；
//	//{
//	//	str++;
//	//	count++;
//	//}
//	//return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		
//		*(p + i) = i + 1;
//	
//	}
//	p = arr;
//	for (i = 0;i < sz;i++)
//	{
//	/*	printf("%d", arr[i]);*/
//		printf("%d", *p);
//			p++;
//
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
	/*return 0;
	* 
}*/
//unsigned long pulArray[] = { 6,7,8,9,10 };
//unsigned long* pulPtr;
//pulPtr = pulArray;
//*(pulPtr + 3) += 3;
//printf(“% d, % d\n”, *pulPtr, *(pulPtr + 3));
//#include <stdio.h>cint sz)
//{
//	int* p = arr;
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d", *p);
//		p++;
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//char Reserve(char* p, int len)
//{ 
//	int i = 0;
//	for (i = 0;i < len;i++)
//	{
//		 printf("%c", *(p + len - 1 - i));
//	}
//	return *(p + len - 1 - i);
//}
//int main()
//{
//	char arr[] = "abcef";
//		int len = strlen(arr);
//	Reserve(arr,len);
//	return 0;
//}

//{#include <stdio.h>
//int main()
	/*int i = 0;
	for (i = 100;i <= 100000;i++)
	{
		int a, b, c, d;
		d = i;
		a = i % 10;
		b = i / 10 % 10;
		c = i / 100;
		if (a * a * a + b * b * b + c * c * c == d)
		{
			printf("%d ", d);
		}
	}*/
		/*int j = 0;
		int ret = 0;
		int x = i;
		int n = x;
		for (j = 0;j < 3;j++)
		{
			
			int m = x % 10;
			ret = ret + m * m * m;
			x= x/ 10;
		}
		if (n == ret)
		{
			printf("%d ", ret);
		}
//	/*}*/
//	return 0;

//
// #include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0;i <100000;i++)
//	{
//		
//		int m = i;
//		int n = 0;
//		int sum = 0;
//		while (m)
//		{
//			m = m / 10;
//			n++;//首先计算出位数是多少;
//		}
//
//		m = i;//m的值已经改变；
//		while (m)
//		{
//			sum = sum + pow(m % 10, n);
//			m = m / 10;
//		}
//		if (i==sum)
//		{
//			printf("%d ", sum);
//		}
//	}
//	return 0;
//
//}
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	for (int i = 0;i <= 100000;i++)
//	{
//		int n = 0;
//		int m = i;
//		int sum = 0;
//		while (m)
//		{
//			m /= 10;
//			n++;
//		}
//		m = i;
//		while (m)
//		{
//			sum += pow(m % 10, n);
//			m /= 10;
//		}
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//pow（x，y）x的y次幂 库函数 需要引用头文件 #include <math.h>
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0;i <= 100000;i++)
//	{
//		int n = 0;
//		int m = i;
//		while (m)
//		{
//			m /= 10;//n表示m是几位数；
//			n++;
//
//		}
//		m = i;
//		int sum = 0;
//		while (m)
//		{
//			sum = sum + pow(m % 10, n);
//			m = m / 10;
//		}
//		if (i == sum)
//			printf("%d ", i);
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int a;
//
//	scanf_s("%d", &a);
//	int m = a;
//	int S = 0;
//	S = a + (a * 10 + a) + (a * 100 + a * 10 + a) + (a * 1000 + a * 100 + a * 10 + a) + (a * 10000 + a * 1000 + a * 100 + a * 10 + a);
//	printf("%d", S);
//	int i = 0;
//	
//	return 0;
//}
	//             *
	//            ***
//	             *****
	//          *******
	//         *********     
	//        ***********
	///        *********
	//          *******
	//           *****
	//            ***
	//             *
	//
	//
	//
//	int i = 0;
//	for (i = 1;i <=6;i++)
//	{
//		int j;
//		for (j = 1;j <=2*i-1;j++)
//		{
//			printf("     *   ");
//		}
//		/*while ((2 * i - 1) != 11)
//		{
//			printf("*");
//		}*/
//
//		printf("\n");
//	}
//	return 0;
//}

//#include <string.h>
//void Reserve(char* str, int len)
//{
//	char* left = str;//利用指针方法来让字符串逆序；
//	char* right = str + len - 1;
//	
//	while (left < right)
//	{
//		char temp;
//		temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char str[] = "hello world";
//	int len = strlen(str);
//	Reserve(str, len);
//	printf("%s", str);
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	int len = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i < len;i++)
//	{
//		printf(" %d", *p);
//		p++;
//
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int line;
//	scanf_s("%d", &line);
//	//先打印上半身；先打印空格，在打印*；
//	int i = 0;
//	for (i = 0;i < line;i++)
//	{
//		int j = 0;//打印空格；空格依次减一最上面6个空格；
//		for (j = 0;j < line - 1 - i;j++)
//		{
//			printf(" ");
//		}
//		//打印完空格再打印*号，*号是按照1 3 5 7 9 顺序增加；
//		for (j = 0;j < 2 * i + 1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//
//	}
//	//再打印下半身；先打印空格空格依次增加；一开始为0；
//	for (i = 0;i < line;i++)
//	{
//		int j;
//		for (j = 0;j <=i;j++)
//		{
//			printf(" ");
//		}
//		for (j = 0;j < 2 * line - 3 - 2 * i;j++)
//		{
//			printf("*");
//
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a;
//	int n;
//	scanf_s("%d%d", &a, &n);
//	int sum = 0;
//	int i;
//	int temp = 0;
//	for (i = 0;i < n;i++)
//	{
//		temp = temp* 10 + a;//temp 是指第n项的数 第1项是2，第二项是20+2 第三项是220+2第四项是2220+2
//		sum = sum + temp;//sum是所有temp项相加的和
//	}
//	printf("%d", sum);
//	return 0;
//}
//#include <stdio.h>
//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return n;
//	}
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//    int sum=Fib(n);
//	printf("%d", sum);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int y, m;
//	while (scanf_s("%d%d", &y, &m))
//	{
//		switch (m)
//		{
//		case 2:   if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//
//		{
//			printf("29");
//		}
//			  else
//			printf("28");break;
//		case 4:
//		case 6:
//		case 9:
//		case 11:printf("30");break;
//		defalut:printf("31");
//		
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//void reverse(char* p, int len)
//{
//	int left = 0;
//	int right = len - 1;
//	char temp;
//	while (left < right)
//	{
//		
//		temp = *(p + left);
//		*(p + left) = *(p + right - 1);
//		*(p + right - 1) = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[1000] = { 0 };
//	int len = strlen(arr);
//	//scanf("%s",arr);
//	gets(arr);
//	reverse(arr,len);
//	printf("%s\n", arr);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i;
//	int arr[3][3];
//	scanf_s("%d", &arr);
//	int sum = 0;
//	for (i = 0;i < 10;i++)
//	{
//		int j = 0;
//		for (j = 0;j < 10;j++)
//		{
//			if (arr[i][j] >= 0)
//			{
//				sum += arr[i][j];
//			}
//
//	   }
//	}
//	printf("%d", sum);
//	return 0;
//}
//
/*
	int a[] = { 1,2,3,4 };
	int b[] = { 4,5,6,7 };
	int c[] = { 7,8,9,10 };
	int*p [] = { a,b,c };
	int i;
	for (i = 0;i < 3;i++)
	{
		int j;
		for (j = 0;j < 4;j++)
		{
			printf("%d", *(p[i] + j));
		}
		printf("\n");
	}*/
	
//#include <stdio.h>
//	struct Stu
//	{
//		char name[20];
//		int age;
//		char sex[10];
//		float score;
//
//	}s4, s5;;//全局变量
//int main()
//{
//	struct Stu s1 = { "zhangsan",11,"nan",95.5f };
//	struct Stu s2 = { "wangcai",20,"nu",66.2f };
//		//局部变量；
//	printf("%s %d %s %.1f\n", s2.name, s2.age, s2.sex,s2.score );
//	                                                           
//	return 0;
//	}
//#include <stdio.h>
//struct S
//{
//	int a;
//	char c;
//};
//struct P
//{
//	double d;
//	struct S s;
//	float f;
//
//};
//void print1(struct P p)
//{                                                                  
//	printf("%lf %d %c %f\n", p.d, p.s.a, p.s.c, p.f);
//}
//void print2(struct P* p1)
//{
//	printf("%lf %d %c %f\n", p1->d, p1->s.a, p1->s.c, p1->f);
//}
//int main()
//{
//	struct P p = { 5.5,{10,'a'},3.14f };
//	
//	   print1(p);//传值；
//		print2(&p);//传址
//	return 0;
//}
//#include <stdio.h>
//void scc_(int arr[])
//{
//	int i;
//	for (i = 0;i < 10;i += 2)
//	{
//		printf("%d", arr[i]);
//	}
//	int j;
//	for (j = 1;j < 10;j += 2)
//	{
//		printf("%d", arr[j]);
//	}
//
//
//}
//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	scc_(arr);
//	return 0;
//	
//
//}
//int main()
//{
//	int arr[]={0};
//	scanf_s("%d", &arr);
//	printf("%d", arr);
//	return 0;
//}#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,(3,4),5 };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}
//int main()
//{
//	int a[5]={1,2,3,4,5};
//	int b[5]={6,7,8,9,10};
//	int temp;
//	int i = 0;
//	for (i = 0;i < 5;i++)
//	{
//		temp = a[i];
//		a[i] = b[i];
//		b[i] = temp;
//	}
//	for (i = 0;i < 5;i++)
//	{
//		printf("%d", a[i]);
//	}
//	printf("\n");
//	for (i = 0;i < 5;i++)
//	{
//		printf("%d", b[i]);
//	}
//	return 0;
//}//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。

//void init(int arr)
//{
//	int* p=arr;
//	int i;
//	for (i = 0;i < 5;i++)
//	{
//		*p = 0;
//		p++;
//	}
//}
//
//	int* p = arr;
//	int i;
//	for (i=0;i<5;i++)
//	{
//		printf("%d", *(p+4)-i);
//	}
//}
//
//int main()
//{
//	int arr[5]={1,2,3,4,5};
//	void init(arr);
//	print(arr);
//	reverse(arr);
//	return 0;
//}
//int main()
//{
//	int a[10] = { 0 };
//	int b[10] = { 0 };
//	printf("请输入数字：");
//	for (int i = 0;i < 10;i++)
//	{
//		scanf_s("%d", &a[i]);
//	}
//	printf("\n");
//	printf("请输入数字：");
//	for (int i = 0;i < 10;i++)
//	{
//		scanf_s("%d", &b[i]);
//	}
//	for (int i = 0;i < 10;i++)
//	{
//		int temp = a[i];
//		a[i] = b[i];
//		b[i] = temp;
//	}
//	for (int i = 0;i < 10;i++)
//	{
//		printf("%d", a[i]);
//	}
//	for (int i = 0;i < 10;i++)
//	{
//		printf("%d", b[i]);
//	}
//
//	return 0;
//}
//void Init(int arr[], int sz, int set)
//{      
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = set;
//	}9+
//}
//void Init(int arr[], int sz)
//{        
//	int i;
//	for (i = 0;i < sz;i++)
//	{
//		arr[i] = 0;
//	}
//}
//void  Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//void  Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//	}
//}
//int main()
//{   int arr[] = {1,2,3,4,5};
//    int sz = sizeof(arr) / sizeof(arr[0]);
//   Init(arr, sz);
//   Print(arr, sz);
//   Reverse(arr, sz);
//   return 0;
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i;
//	for(i = 0;i < 9;i++)
//	{
//		int j;
//		for (j = 0;j < 9-i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10][10];
//	int sum = 0;
//	int n, m;
//	scanf_s("%d%d", &n, &m);
//	for (int i = 0;i < n;i++)
//	{
//		for (int j = 0;j < m;j++)
//		{
//			scanf
//			if (arr[i][j] > 0)
//			{
//				sum = sum + arr[i][j];
//			}
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}
/*nt main() {
	int n;
	scanf("%d", n);
	if (n % 5 != 0)
	{
		printf("NO");
	}
	else
	{
		printf("YES");
	}

	return 0;
}*/

//int main()
//{
//	int second, h, m, s;
//	scanf_s("%d", &second);
//	 h = second / 3600;//小时
//	 m = (second % 3600) / 60;//先算出有多少还剩多少秒；秒/60算出来有多少分；s%3600%60算出还剩多少秒；
//	 s = (second % 3600) % 60;
//	printf("%d %d %d", h, m, s);
//	return 0;
//}
//int main()
//{
//	int n;
//	while ((scanf_s("%d\n", &n)) != EOF)
//	{
//		for (int i = 0;i < n;i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		
//	}
//	return 0;
//}
 /*main()
{
	int t;
	while ((scanf_s("%d", &t))!=- 1)
	{
		if (t > 0)
			printf("1\n");
		if (t == 0)
			printf("0.5\n");
		if (t < 0)
			printf("0\n");
	}
	return 0;int
}*/
//int main()
//{
//	
//	int i;
//	for (i = 1;i < 100;i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int a, b, c;
//	scanf_s("%d%d%d", &a, &b, &c);
//	if (a < b);
//	{
//		int t = a;
//		a = b;
//		b = t;
//	}
//	if (a < c)
//	{
//		int t = a;
//		a = c;
//		c = t;
//	}
//	if (b < c)
//	{
//		int t = b;
//		b = c;
//		c = t;
//	}
//	printf("%d %d %d", a, b, c);
//
//	return 0;
//
//#include <stdio.h>
//int main()
//{
//
//	int i;
//	for (i = 100;i < 200;i++)
//	{
//		int j;
//		for (j = 2;j < i;j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i==j)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//
//}
//int main()
//{
//	int i;
//	for (i = 1000;i < 2000;i++)
//	{
//		if (((i % 4 == 0)&&(i % 100 != 0)) || (i % 400 == 0))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a, b;
//	int c = 1;
//	scanf_s("%d%d", &a, &b);
//	while (c)
//	{
//		c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("%d",a);
//	return 0;
//}
//int main()
//{
//	int n, m;
//	scanf_s("%d%d", &n, &m);
//	int arr1[10][10];
//	int arr2[10][10];
//		for (int i = 0;i < n;i++)
//		{
//			for (int j = 0;j < m;j++)
//			{
//				scanf_s("%d", &arr1[i][j]);
//			}
//			printf("\n");
//		}
//	 for (int i = 0;i < n;i++)
//	{
//		for (int j = 0;j < m;j++)
//		{
//			scanf_s("%d", &arr2[i][j]);
//		}
//		printf("\n");
//	}
//	 for (int i = 0;i < n;i++)
//	 {
//		 for (int j = 0;j < m;j++)
//		 {
//			 if (arr1[i][j] == arr2[i][j]&&i==n&&j==m)
//				 printf("YES");
//			 else
//				 printf("NO");
//		 }
//	 }
//	return 0;
//	
//}
//#include <stdio.h>
////#include <string.h>
//#include<assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	while (*src!='\0')
//	{
//		*dest = *src; ==  *dest++=*src++
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}
//char* my_strcpy(char* dest,const char* src)保护str内容不被修改
//{                                 本来就是我给你，不是你给我；
////	if (src == NULL || dest == NULL)
////	{
////		retrun;//要判断指针的有效性；防止传了空指针；/缺点，每次循环都会进行；
////	}//断言assert,
//	assert(src != NULL);
//	assert(dest != NULL);//中可以放一个表达式，结果假报错，真什么都不发生；
//	assert(dest && src);
// char *ret=dest;
//	while (*dest++ = *src++)//等于\0时为假停止
//	
//		;
//		
//	return ret;
//	
//}
////int main()
//{//strcpy 拷贝字符串；
//	char arr1[20] = "************";
//	char arr2[] = "hello";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
// printf("%s\n", my_strcpy(arr1, arr2););
//	char arr3[20]={0};
//	char* p=NULL;
//	my_strcpy(arr3, p);
//	return 0;
//}
//int main()
//{
//	char arr1[20] = { 0 };
//	char *p= "hello";//常量内容不能改
//	my_strcpy(arr1, p);
//	//my_strcpy(p, arr1);
//	return 0;
//}
//int main()
//{
//	const int num = 10;
//    int* const  p = &num;
//	*p = 20;
//	int n = 100;
//	/*p = &n;*/
//	printf("%d", num);
//	return 0;
//}
//const放在*左边时，const修饰的是指针指向的内容，不能通过指针来改变了，但是指针变量本身可以修改；

//const放在*右边，const修饰的是指针变量本身，表示吱吱吱变量本身的内容不能呗修改
//，但是可以通过指针来改变
//unsigned int my_strlen(const char* arr)
//{//size_t ==unsigned int ;
//	assert(arr!=NULL);
//	int count = 0;
//	while (*arr++ != '\0')
//	{
//		count++;
//		
//	}
//	return count;
//}//链式表达式
//int main()
//{
//	char arr[] = "abcdef";
//	/*int len = my_strlen(arr);
//	printf("%d", len);*/
//	printf("%d", my_strlen(arr));
//	return 0;
//}
//阅读好的代码
//int main()
//{
//	int arr1[10][10] = { 0 };
//	int arr2[10][10] = { 0 };
//	int n, m;
//	scanf_s("%d%d", &n, &m);
//	for (int i = 0;i < n;i++)
//	{
//		for (int j = 0;j < m;j++)
//		{
//			scanf_s("%d", &arr1[i][j]);
//		}
//	}
//	for (int i = 0;i < n;i++)
//	{
//		for (int j = 0;j < m;j++)
//		{
//			scanf_s("%d", &arr2[i][j]);
//			if (arr1[i][j] != arr2[i][j])
//			{
//				printf("NO");
//				return 0;
//			}
//		}
//	}
//	printf("YES");
//	return 0;
////先将元素录入，再进行判断；
//int main()
//{
//	int arr[10][10] = { 0 };
//	int n;
//	scanf("%d", &n);
//	for (int i = 0;i < n;i++)
//	{
//		for (int j = 0;j < n;j++)
//		{
//			scanf("%d", &arr[i][j]);
//			
//		}
//	}
//	for (int i = 0;i < n;i++)
//	{
//		for (int j = 0;j < i;j++)
//		{
//			if (arr[i][j] != 0)
//				printf("No\n");
//			return 0;
//		}
//	}
//	printf("Yes\n");
//	return 0;
//}
//边输入便判断；
//int main()
//{
//	int arr[10][10 = { 0 };
//	int n;
//	int i, j;
//	scanf("%d", &n);
//	for (i = 0;i < n;i++)
//	{
//		for (j = 0;j < n;j++)
//		{
//			scanf("%d", &arr[i][j]);
//			if (i > j)
//			{
//				if (arr[i][j] != 0)
//				{
//					printf("NO\n");
//					return 0;
//				}
//			}
//		}
//	}
//	printf("YES\n");
//	return 0;
//
//}
//int main()
//{
//
//	int n;
//	scanf_s("%d", &n);
//	int c;
//	c = n / 2;
//	int sum = 0;
//	printf("%d", n + c);
//	return 0;
//}
//#include <stdio.h>
//int main()
// {
//
//	int n, m;
//	scanf_s("%d%d", &n, &m);
//	int arr1[10] = { 0 };
//	int arr2[10] = { 0 };
//	int arr3[20] = { 0 };
//	for (int i = 0;i < n;i++)
//	{
//		scanf_s("%d", &arr1[i]);
//	}
//	for (int i = 0;i < m;i++)
//	{
//		scanf_s("%d", &arr2[i]);
//	}
//	for (int i = 0;i < n + m;i++)
//	{
//		if (i < n	)
//		{
//			arr3[i] = arr1[i];
//		}
//		else
//		{
//			arr3[i] = arr2[i - n];
//		}
//	}
//	//arr3是arr1和arr2里面元素的和；在进行冒泡排序；一共有n+m个元素，要进行n+m-1趟数每趟要几次交换呢
//	for (int i = 0;i < n + m - 1;i++)
//	{
//		for (int j = 0;j < n + m - 1 - i;j++)
//		{
//			if (arr3[j] > arr3[j+1])
//			{
//				int temp = arr3[j];
//				arr3[j] = arr3[j + 1];
//				arr3[j + 1] = temp;
//				
//			}
//		}
//	}
//	for (int i = 0;i < n + m;i++)
//	{
//		printf("%d ", arr3[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//#include<assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(*src && dest);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = { 0 };
//	char arr2[] = "hahahahahaha";
//	printf("%s", my_strcpy(arr1, arr2));
//	return 0;
//}
//#include <stdio.h>
//#include<assert.h>
//
//int my_strlen(const char* arr)
//{  
//	assert(arr != NULL);
//	int count = 0;
//	while (*arr++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello";
//	printf("%d", my_strlen(arr));
//	return 0;
//}
#include <stdio.h>
//int main()
//{
//	int n;
//	int count1 = 0;
//	int count2 = 0;
//	scanf("%d", &n);
//	int i;
//	int arr[1000] = { 0 };
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0;i < n-1;i++)
//	{
//		if (arr[i + 1] - arr[i] >= 0)
//			count1++;
//		else if (arr[i + 1] - arr[i] <= 0)
//			count2++;
//			
//	}
//	if (count1 == n - 1 || count2 = n - 1)
//		printf("sorted");
//	else
//		printf("unsorted");
//	return 0;
//
//}
//int Max(int n, int m)
//{
//	return (n > m ? n : m);
//}
//int main()
//{
//	int n, m;
//	scanf_s("%d%d", &n, &m);
//	int max=Max(n, m);
//	printf("%d", max);
//	return 0;
//}
//void rel_(int n, int m)
//{
//	if (n > m)
//		printf("%d>%d\n", n, m);
//	if (n == m)
//		printf("%d=%d\n", n, m);
//	if (n < m)
//		printf("%d<%d\n", n, m);
//}
//int main()
//{
//	int n, m;
//	while (scanf_s("%d%d", &n, &m) != -1)
//	{
//		rel_(n, m);
//	}
//	return 0;
//}
// /*or_(int n)
//{void
//	if (n % 2 != 0)
//		printf("Odd\n");
//	else
//		printf("Even\n");
//}
//int main()
//{
//	int n;
//	while (scanf_s("%d", &n)!=-1)
//	{
//		or_(n);
//	}
//	return 0;
//}*/
//void score_(int n)
//{
//	if (n > 90)
//		printf("Perfect\n");
//}
//int main()
//{
//	int n;
//	while (scanf_s("%d", &n) != -1)
//	{
//		score_(n);
//	}
//	
//	return 0;
//}
////int main()
////{
////	int i, j;
////	
////	for (i = 1;i <=9;i++)
////	{
////		for (j = 1;j <= 9;j++)
////		{
////			printf(" %d * %d =%d", i, j, i * j);
////		}
////		printf("\n");
////	}
////
////	return 0;
////}
//int diff_(int n,int m)
//{
//	return n ^ m;
//}
//int Count(int n)
//{
//	int count = 0;
//	/*int i = 0;
//	int count = 0;
//	for (i = 0;i < 32;i++)
//	{
//		if((n>>i)&1==1)
//			count++;
//	}*/
//	while (n != 0)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	
//	return count;
//}
//int main()
//{
//	int n, m;
//	scanf_s("%d%d", &n,&m);
//	int ret = diff_(n,m);
//	int count=Count(ret);
//		printf("%d",count);
//	return 0;
//}
int main()
{//00000000000000000000000000001
	int n;
	scanf_s("%d", &n);
	int i;
	for (i = 30; i >= 0;i -= 2)
	{
		printf("%d", (n >> i) & 1);
	}
	printf("\n");
	for (i = 31; i > 0;i -= 2)
	{
		printf("%d", (n >> i) & 1);
	}
	return 0;
}