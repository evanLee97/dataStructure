#include <iostream>
#define MaxSize 50 //定义表的最大长度
#define InitSize 100 //表长度的初始定义
using namespace std;
int main() {

}
//静态分配
typedef struct{
    int data [MaxSize]; //顺序表的元素
    int length; //顺序表的长度
}SqList;//顺序表的类型

//动态分配
typedef struct {
    int *data;
    int length;
    int Maxsize;
}SeqList;


