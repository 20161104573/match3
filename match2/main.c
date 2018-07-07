//
//  main.c
//  match2
//
//  Created by 20161104573 on 18/6/26.
//  Copyright © 2018年 20161104573. All rights reserved.
//

#include<stdio.h>
#define N 4
int main(){
    int a[N]={0};
    int i,min,max,sum;
    sum=0;
    for(i=0;i<N;i++)
    {
        printf("请输入裁判给的分数:");
        scanf("%d",&a[i]);
        if(a[i]<0||a[i]>100)
        {
            printf("输入有误，请重新输入：");
            scanf("%d",&a[i]);
        }
    }
    min=a[0];
    max=a[0];
    for(i=0;i<N;i++)
    {
        if(min>a[i])
            min=a[i];
        if(max<a[i])
            max=a[i];
        sum+=a[i];
    }
    printf("该选手的平均分为:%d",(sum-min-max)/(N-2));
    return 0;
}
