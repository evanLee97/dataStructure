#include <iostream>
#define MAXSIZE 50 //定义表的最大长度
#define InitSize 100 //表长度的初始定义
using namespace std;
int main() {

}
//静态分配
typedef struct{
    int data [MAXSIZE]; //顺序表的元素
    int length; //顺序表的长度
}SqList;//顺序表的类型

//动态分配
typedef struct {
    int* data;
    int length;
    int size;
}SeqList;

//初始化
bool initList(SeqList&L){
    L.data = new int[MAXSIZE];
    if (!L.data)return false;
    L.length = 0;
    L.size = MAXSIZE;
    return true;
}

int ListLength(const SeqList &L); //求线性表长度
int Locate(const SqList &L,const int &e);//按值查找
bool GetData(const SeqList&L, int i, const int &e);//获得第i个元素
bool ListInsert(SeqList &L, int i, const int &e){
    if (i < 1 || i > L.length ) return false;     //判断i的范围是否有效
    if (L.length > MAXSIZE)return false;          //判断当前顺序表是否已满
    for(int j=L.length; j>=i ; j--)               //将第i个元素后的元素后移
        L.data[j] = L.data[j-1];
    L.data[i-1] = e;                              //在位置i插入e
    L.length++;                                   //线性表长度+1
    return true;
};
void DestroyList(SeqList&L);
void ClearList(SeqList&L);
bool EnptyList(const SeqList &L);
void DispList(const SeqList &L);



