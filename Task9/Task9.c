#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/utsname.h>

int main(int argc,char** argv)
{
    struct utsname info;
    uname(&info);
    char buff[999];
    gethostname(buff, 999);
    printf("-----------------------------------\n");
    printf("System name: %s\n",info.sysname);
    printf("Machine name: %s\n",info.nodename);
    printf("Release: %s\n",info.release);
    printf("Version: %s\n",info.version);
    printf("Machine type: %s\n",info.machine);
    printf("Host name: %s\n",buff);
    printf("Host ID: %ld\n",gethostid());   
    printf("-----------------------------------\n");
    return 0;
}