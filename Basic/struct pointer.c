//
//  struct pointer.c
//  class work
//
//  Created by Pankaj Devrath on 11/7/17.
//  Copyright © 2017 Pankaj Devrath. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
struct std
{
    int roll_no;
    char name[20];
    int age;
    
};
int main()
{
    struct std *p;
    p=(struct std*)malloc ( sizeof(struct std));
    scanf("%d %d",&p->age,&p->roll_no);
    scanf("%s",&p->name);
    printf("%d \n%d\n",p->age,p->roll_no);
    printf("%s\n",p->name);
    return 0;
    
}
