#pragma once

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>


#define MAX 100
#define NAME_MAX 20
#define SEX_MAX 5
#define ADDR_MAX 30
#define TELE_MAX 12

#define DEFAULT_SZ 3
#define INC_SZ 2
typedef struct PeoInfo
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char addr[ADDR_MAX];
	char tele[TELE_MAX];
}PeoInfo;

//typedef struct Contact
//{
//	PeoInfo data[MAX];
//	int sz;
//}Contact;
typedef struct Contact
{
	PeoInfo data[MAX];
	PeoInfo* data;
	int sz;
	int capacity;
}Contact;

void InitContact(Contact* pc);
void DestroyContact(Contact* pc);
void AddContact(Contact* pc);
void DelContact(Contact* pc);

void ShowContact(const Contact* pc);

void SearchContact(const Contact* pc);

void ModifyContact(Contact* pc);
