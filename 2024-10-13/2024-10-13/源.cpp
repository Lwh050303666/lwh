#define CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//void GetMemory(char** p, int num)
//{
//    *p = (char*)malloc(num);
//}
//
//void Test(void)
//{
//    char* str = NULL;
//    GetMemory(&str, 100);
//    strcpy(str, "hello");
//    printf(str);
//    free(str);
//    str = NULL;
//}
//
//int main()
//{
//    Test();
//    return 0;
//}
//void Test(void)
//{
//    char* str = (char*)malloc(100);
//    strcpy(str, "hello");
//    free(str);
//    str = NULL;
//
//    if (str != NULL)
//    {
//        strcpy(str, "world");
//        printf(str);
//    }
//}
//
//int main()
//{
//    Test();
//    return 0;
//}
#include <stdio.h>

//int main()
//{
//	//1. ���ļ�
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//2. д�ļ�
//	fputs("I am a student\n", pf);
//	fputs("are you ok??", pf);
//
//	//3. �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//int main()
//{
//	//1. ���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//2. ���ļ�
//	char arr[20] = "xxxxxxxxxxxxx";
//	fgets(arr, 10, pf);
//	printf("%s\n", arr);
//
//	//3. �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//int main()
//{
//	char arr[20] = { 0 };
//	fgets(arr, 20, stdin);
//	fputs(arr, stdout);
//
//	return 0;
//}
/// struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//
//int main()
//{
//	struct S s = { "lisi", 18, 88.0f };
//	//1. ���ļ�
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//2. д�ļ�
//	fprintf(pf,"%s %d %.1f", s.name, s.age, s.score);
//	//printf("%s %d %f", name, age, score);
//	//3. �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//int main()
//{
//	printf("hehe\n");
//	printf("%d", 100);
//	printf("%d %c", 100, 'x');
//	printf("%d %c %f", 100, 'x', 3.14f);
//
//	return 0;
//}
//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};


//int main()
//{
//	struct S s = {0};
//	//1. ���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//2. ���ļ�
//	//scanf("%s %d %f", s.name, &(s.age), &(s.score));
//	//���ļ��ж�ȡ��Ϣ����ŵ�s�ĸ�����Ա��
//	fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.score));
//
//	//��ӡ����Ļ��
//	//printf("%s %d %.1f\n", s.name, s.age, s.score);
//	fprintf(stdout, "%s %d %.1f\n", s.name, s.age, s.score);
//
//	//3. �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	char arr[100] = { 0 };
//	struct S s = { "wangwu", 23, 66.6f };
//	
//	//��ʱ����
//	struct S tmp = { 0 };
//
//	//��s�еĸ�������ת�����ַ����������arr��
//	sprintf(arr, "%s %d %f", s.name, s.age, s.score);
//	//printf("%s\n", arr);
//
//	//���ַ���arr����ȡ��ʽ�������ݣ������tmp��
//	sscanf(arr, "%s %d %f", tmp.name, &(tmp.age), &(tmp.score));
//	printf("%s %d %f\n", tmp.name, tmp.age, tmp.score);
//
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct S s = { "cuihua", 25, 88.8f };
//	//�Զ����Ƶ���ʽд���ļ���
//
//	//1. ���ļ�
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//2.д�ļ�
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	//3.�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//int main()
//{
//	struct S s = {0};
//	//��ȡ�����Ƶ���Ϣд���ļ���
//
//	//1. ���ļ�
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//2.���ļ�
//	fread(&s, sizeof(struct S), 1, pf);
//
//	printf("%s %d %f\n", s.name, s.age, s.score);
//
//	//3.�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//int main()
//{
//	//1. ���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//2.���ļ�
//	int ch = 0;
//	ch = fgetc(pf);//a
//	printf("%c\n", ch);
//	ch = fgetc(pf);//b
//	printf("%c\n", ch);
//
//	//��λ�ļ�ָ��
//	//fseek(pf, 4,SEEK_SET);
//	//fseek(pf, 2, SEEK_CUR);
//	fseek(pf, -2, SEEK_END);
//	ch = fgetc(pf);//e
//	printf("%c\n", ch);
//
//	//3.�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//int main()
//{
//	//1. ���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//2.���ļ�
//	int ch = 0;
//	ch = fgetc(pf);//a
//	printf("%c\n", ch);
//	ch = fgetc(pf);//b
//	printf("%c\n", ch);
//
//	//��λ�ļ�ָ��
//	fseek(pf, -2, SEEK_END);
//	ch = fgetc(pf);//e
//	printf("%c\n", ch);
//
//	//����ļ�ָ��������ļ�����ʼλ�õ�ƫ����
//	printf("%d\n", ftell(pf));
//
//	//���ļ�ָ�����¶�λ���ļ�����ʼλ��
//	rewind(pf);
//	ch = fgetc(pf);//a
//	printf("%c\n", ch);
//
//	//3.�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//�����ļ�
//test1.txt    --->  test2.txt
//
//int main()
//{
//	//���ļ�
//	FILE* pfread = fopen("test1.txt", "r");
//	if (pfread == NULL)
//	{
//		perror("fopen\n");
//		return 1;
//	}
//
//	FILE* pfwrite = fopen("test2.txt", "w");
//	if (pfwrite == NULL)
//	{
//		perror("fopen\n");
//		fclose(pfread);
//		return 1;
//	}
//	//��/д�ļ�
//	int ch = 0;
//	while ((ch = fgetc(pfread)) != EOF)
//	{
//		fputc(ch, pfwrite);
//	}
//
//	//�ر��ļ�
//	fclose(pfread);
//	pfread = NULL;
//
//	fclose(pfwrite);
//	pfwrite = NULL;
//
//	return 0;
//}
//
//int main()
//{
//	//1. ���ļ�
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//2.���ļ�
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)//a
//	{
//		printf("%c ", ch);
//	}
//
//
//	//int ret = feof(pf);
//	//printf("%d\n", ret);
//
//	if (ferror(pf))
//	{
//		printf("��ȡ�ļ���ʱ�������˴���\n");
//		return 1;
//	}
//
//	//3.�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//	return 0;
//}
//#include <stdio.h>
//#include <windows.h>
////VS2022 WIN11��������
//
//int main()
//{
//    FILE* pf = fopen("test.txt", "w");
//
//    fputs("abcdef", pf);//�Ƚ�abcdedf�������������
//    printf("˯��10��-�Ѿ�д�����ˣ���test.txt�ļ��������ļ�û������\n");
//    Sleep(10000);
//    printf("ˢ�»�����\n");
//    fflush(pf);//ˢ�»�����ʱ���Ž����������������д���ļ������̣�
//    //ע��fflush �ڸ߰汾��VS�ϲ���ʹ����
//    printf("��˯��10��-��ʱ���ٴδ�test.txt�ļ����ļ���������\n");
//    Sleep(10000);
//
//
//    fclose(pf);
//    //ע��fclose�ڹر��ļ���ʱ��Ҳ��ˢ�»�����
//    pf = NULL;
//
//    return 0;
//}
//�����ⲿ����
extern int Add(int x, int y);

int main()
{
	int a = 11;
	int b = 22;
	int c = Add(a, b);
	printf("%d\n", c);

	return 0;
}









































































































































