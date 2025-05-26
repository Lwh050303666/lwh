#ifndef _MYSTDIO_H_
#define _MYSTDIO_H_
#include<string.h>
#define SIZE 1024
#define FLUSH_NOW 1
#define FLUSH_LINE 2
#define FLUSH_ALL 4
typedef struct IO_FILE{
  int fileno;
  int flag;
  char outbuffer[SIZE];
  int out_pos;
}_FILE
FILE * _fopen(const char * filename,const char *flag);
int _fwrite(_FILE * fp,const char * s,int len);
void _fclose(_FILE *fp);


#endif
























