/*================================================================
*   Copyright (C) 2021 hqyj Ltd. All rights reserved.
*   
*   文件名称：hello.c
*   创 建 者：cym
*   创建日期：2021年05月18日
*   描    述：
*
================================================================*/


#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <stdlib.h>
#include <arpa/inet.h>
#include <sys/select.h>
#include <unistd.h>
#include <string.h>


int main(int argc, char *argv[])
{
	printf("hello world\n");
	
	return 0;
}

