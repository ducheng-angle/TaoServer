#ifndef _UTILITY_H
#define _UTILITY_H

#include "header.h"
#include "log.h"

#ifndef GNSERVER_CONFIG_PATH
#define GNSERVER_CONFIG_PATH "/etc/gn_server.conf"
#endif

void parse_cmdline(int argc, char *argv[]);

void print_usage();

int daemonize();

int get_profile_string(const char *app, const char *key, 
						 const char *default_str, char *ret_str, unsigned int ret_str_size,  
						 const char *file_path); //����app�����µ�key�ؼ��ִ������ļ��ж�ȡ��Ӧ��Ϣ

int get_processors_num();						 


#endif

