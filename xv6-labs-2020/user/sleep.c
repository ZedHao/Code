#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int parse_int(const char* arg) {
    const char* p = arg;
    for ( ; *p ; p++ ) {
        if ( *p < '0' || *p > '9' ) {
            return -1;
        }
    }
    return atoi(arg);
}

int
main(int argc, char *argv[])
{
    if(argc != 2){
        printf("sleep just need time");
    }
    printf("process sleep starting\n");

    int sleepTime;
    sleepTime = parse_int(argv[1]);
    sleep(sleepTime);
    printf("process sleep %d end\n",sleepTime);

    exit(0);
}