#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/types.h>
#include <unistd.h>

int main( int argc, char* argv[] )
{
    int fd = open("quine.c", O_RDONLY);
    
    char line[80];

    int rs;

while (rs > 0)
{
    rs = read(fd, line, 80);

    printf("%s\n", line);
} 
close(fd);

printf("GTFO\n");

return 1;

}



