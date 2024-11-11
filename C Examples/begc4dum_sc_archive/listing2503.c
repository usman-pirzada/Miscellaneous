#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main()
{
    int e;

    e = rename("blorfus","fragus");
    if( e != 0 )
    {
        printf("Error! ");
        switch(errno)
        {
            case EPERM:
                puts("Operation not permitted");
                break;
            case ENOENT:
                puts("File not found");
                break;
            case EACCES:
                puts("Permission denied");
                break;
            case EROFS:
                puts("Read only file");
                break;
            case ENAMETOOLONG:
                puts("Filname is too long");
                break;
            default:
             puts("Too ugly to describe");
        }
	    exit(1);
    }
    puts("File renamed");
    return 0;
}
