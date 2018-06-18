#include <stdio.h>
#include <time.h>
/*
int main ()
{
    int s,x=98;
    time_t current_time;
    struct tm * time_info;
    char timeString[8];
    
    time(&current_time);
    time_info = localtime(&current_time);
    
    strftime(timeString, 8, "%H:%M:%S", time_info);
    puts(timeString);
    s=timeString[6]+timeString[7];
    x=x/7;
    printf("%d\n",x);
//    int x=7;
  //  x=x/
    
    
    return 0;
}*/

/*int main(void)
{
    time_t mytime;
    mytime = time(NULL);
    printf(ctime(&mytime));
    
    return 0;
}*/



int main(void)
{
    time_t yyyy;
    yyyy = time(NULL);
    //printf(ctime(&yyyy));
    printf("%ld\n",yyyy);
    
    return 0;
}

