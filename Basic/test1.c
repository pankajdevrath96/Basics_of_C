//
//  test1.c
//  class work
//
//  Created by Pankaj Devrath on 10/8/17.
//  Copyright © 2017 Pankaj Devrath. All rights reserved.
//

#include <stdio.h>

int main() {
    int output = 0;
    long ip1;
    scanf("%ld", &ip1);
    int ip2_size = 0;
    int ip2_i;
    scanf("%d\n", &ip2_size);
    int ip2[ip2_size];
    for(ip2_i = 0; ip2_i < ip2_size; ip2_i++) {
        int ip2_item;
        scanf("%d", &ip2_item);
        
        ip2[ip2_i] = ip2_item;
    }
    output = fnumber(ip1,ip2_size,ip2);
    printf("%d\n", output);
    return 0;
}
 
