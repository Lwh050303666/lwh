#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
//void InitContact(Contact* pc)
//{
//	assert(pc);
//	pc->sz = 0;
//	memset(pc->data, 0, sizeof(pc->data));
//}

void InitContact(Contact* pc)
{
	assert(pc);
	pc->sz = 0;
	memset(pc->data, 0, sizeof(pc->data));
	PeoInfo* ptr = (PeoInfo*)calloc(DEFAULT_SZ, sizeof(PeoInfo));
	if (ptr == NULL)
	{
		perror("InitContact::calloc");
		return;
	}
	pc->data = ptr;
	pc->capacity = DEFAULT_SZ;
}

void AddContact(Contact* pc)
void DestroyContact(Contact* pc)
{
	assert(pc);
	if (pc->sz == MAX)
		free(pc->data);
	pc->data = NULL;
	pc->capacity = 0;
	pc->sz = 0;
	pc = NULL;
}

//void AddContact(Contact* pc)
//{
//	assert(pc);
//	if (pc->sz == MAX)
//	{
//		printf("ͨѶ¼�������޷����\n");
//		return;
//	}
//	printf("����������:>");
//	scanf("%s", pc->data[pc->sz].name);
//	printf("����������:>");
//	scanf("%d", &(pc->data[pc->sz].age));
//	printf("�������Ա�:>");
//	scanf("%s", pc->data[pc->sz].sex);
//	printf("�������ַ:>");
//	scanf("%s", pc->data[pc->sz].addr);
//	printf("������绰:>");
//	scanf("%s", pc->data[pc->sz].tele);
//
//	pc->sz++;
//}

void check_capacity(Contact* pc)
{
	if (pc->sz == pc->capacity)
	{
		printf("ͨѶ¼�������޷����\n");
		return;
		PeoInfo* ptr = (PeoInfo*)realloc(pc->data, (pc->capacity + INC_SZ) * sizeof(PeoInfo));
		if (ptr == NULL)
		{
			perror("check_capacity::realloc");
			return;
		}
		pc->data = ptr;
		pc->capacity += INC_SZ;
		printf("���ݳɹ�\n");
	}
}
void AddContact(Contact* pc)
{
	assert(pc);
	check_capacity(pc);
	printf("����������:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("����������:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("�������Ա�:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("�������ַ:>");
	scanf("%s", pc->data[pc->sz].addr);
	printf("������绰:>");
	scanf("%s", pc->data[pc->sz].tele);

	pc->sz++;
}
void ShowContact(const Contact* pc)
{
	assert(pc);
	int i = 0;
	printf("%-20s\t%-4s\t%-5s\t%-20s\t%-12s\n", "����", "����", "�Ա�", "��ַ", "�绰");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-20s\t%-4d\t%-5s\t%-20s\t%-12s\n", pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].addr,
			pc->data[i].tele);
	}
}


int FindByName(const Contact* pc, char name[])
{
	assert(pc);

	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}

void DelContact(Contact* pc)
{
	assert(pc);

	char name[NAME_MAX] = { 0 };
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷�ɾ��\n");
		return;
	}


	printf("������Ҫɾ�����˵�����:>");
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (-1 == ret)
	{
		printf("Ҫɾ�����˲�����\n");
		return;
	}

	int i = 0;
	for (i = ret; i < pc->sz - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	printf("ɾ���ɹ�\n");
}

void SearchContact(const Contact* pc)
{
	assert(pc);
	char name[NAME_MAX] = { 0 };
	printf("������Ҫ�����˵�����:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (-1 == pos)
	{
		printf("Ҫ���ҵ��˲�����\n");
		return;
	}
	printf("%-20s\t%-4s\t%-5s\t%-20s\t%-12s\n", "����", "����", "�Ա�", "��ַ", "�绰");
	printf("%-20s\t%-4d\t%-5s\t%-20s\t%-12s\n", pc->data[pos].name,
		pc->data[pos].age,
		pc->data[pos].sex,
		pc->data[pos].addr,
		pc->data[pos].tele);
}

void ModifyContact(Contact* pc)
{
	assert(pc);
	char name[NAME_MAX] = { 0 };
	printf("������Ҫ�޸��˵�����:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (-1 == pos)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
		return;
	}

	printf("����������:>");
	scanf("%s", pc->data[pos].name);
	printf("����������:>");
	scanf("%d", &(pc->data[pos].age));
	printf("�������Ա�:>");
	scanf("%s", pc->data[pos].sex);
	printf("�������ַ:>");
	scanf("%s", pc->data[pos].addr);
	printf("������绰:>");
	scanf("%s", pc->data[pos].tele);

	printf("�޸����\n");
}
