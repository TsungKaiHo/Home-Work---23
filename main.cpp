//
//  main.cpp
//  Home Work 23
//
//  Created by 何宗愷 on 2019/5/30.
//  Copyright © 2019 何宗愷. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    FILE *pfile;
    int c;
    int sum=0;
    char poem[50];
    
    pfile=fopen("data.txt", "r");
    
    if (pfile==NULL)
        
    {
        printf("檔案開啟失敗!!\n");
        
        exit(1);
    }
    
    rewind(pfile);
    
    while ((fgets(poem, 50, pfile)) != NULL)
        
    printf("%s", poem);
    
    printf("\n");
    
    fclose(pfile);
    
    return 0;
    
}
