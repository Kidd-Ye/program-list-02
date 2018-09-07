//
//  main.cpp
//  Delete_Six
//
//  Created by kidd on 2018/9/7.
//  Copyright © 2018年 Kidd. All rights reserved.
//顺序表的算法设计：长度为n的顺序表L，编写一个时间复杂度为O(n)、空间复杂度为O(1)的算法，删除线性表中所有值为6的数据元素。

#include <iostream>
#define LIST_SIZE 10
typedef struct
{
    int data[LIST_SIZE];
    int length;
}List;


void Delete_Six(List &list){
    int num = 0;
    for (int i = 0; i < list.length; i++) {
        if (list.data[i] != 6) {
            list.data[num] = list.data[i];
            num += 1;
        }
    }
    list.length = num;
}

void PrintList(List list){
    for (int i = 0; i < list.length; i++) {
        printf("%d ",list.data[i]);
    }
    printf("\n");
}

int main(int argc, const char * argv[]) {
    List L;
    int list[] = {1,6,4,8,6,5,6};
    for (int i = 0; i < 7; i++) {
        L.data[i] = list[i];
    }
    L.length = 7;
    PrintList(L);
    printf("删除所有为6的元素：");
    Delete_Six(L);
    PrintList(L);
    return 0;
}
