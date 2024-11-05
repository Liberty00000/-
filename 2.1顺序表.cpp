/*#include <iostream>

using namespace std;

// 定义元素类型
typedef char ElemType;

// 定义顺序表结构
struct SqList {
    ElemType* data; // 存储元素的动态数组
    int length;     // 当前长度
    int maxSize;    // 最大容量
};

// 初始化顺序表
void InitList(SqList*& L) {
    L = new SqList; // 分配顺序表内存
    L->maxSize = 100; // 设置最大容量
    L->length = 0; // 初始化长度为0
    L->data = new ElemType[L->maxSize]; // 分配数据存储空间
}

// 释放顺序表
void DestroyList(SqList* L) {
    if (L) {
        delete[] L->data; // 释放数据存储空间
        delete L; // 释放顺序表结构体
    }
}

// 判断顺序表是否为空
bool ListEmpty(SqList* L) {
    return L->length == 0; // 若长度为0，返回true
}

// 返回顺序表的元素个数
int ListLength(SqList* L) {
    return L->length; // 返回当前长度
}

// 输出顺序表
void DispList(SqList* L) {
    for (int i = 0; i < L->length; ++i) {
        cout << L->data[i] << " "; // 输出每个元素
    }
    cout << endl;
}

// 获取顺序表中的第i个元素
bool GetElem(SqList* L, int i, ElemType& e) {
    if (i < 1 || i > L->length) return false; // 越界检查
    e = L->data[i - 1]; // 获取第i个元素
    return true;
}

// 在顺序表中查找元素e
int LocateElem(SqList* L, ElemType e) {
    for (int i = 0; i < L->length; ++i) {
        if (L->data[i] == e) return i + 1; // 返回位置（从1开始）
    }
    return 0; // 未找到返回0
}

// 在顺序表第i个位置插入元素e
bool ListInsert(SqList*& L, int i, ElemType e) {
    if (i < 1 || i > L->length + 1) return false; // 越界检查
    if (L->length >= L->maxSize) return false; // 超过最大容量
    for (int j = L->length; j >= i; --j) {
        L->data[j] = L->data[j - 1]; // 移动元素
    }
    L->data[i - 1] = e; // 插入元素
    L->length++; // 更新长度
    return true;
}

// 从顺序表删除第i个元素
bool ListDelete(SqList*& L, int i, ElemType& e) {
    if (i < 1 || i > L->length) return false; // 越界检查
    e = L->data[i - 1]; // 获取待删除元素
    for (int j = i; j < L->length; ++j) {
        L->data[j - 1] = L->data[j]; // 移动元素
    }
    L->length--; // 更新长度
    return true;
}

// 主程序
int main() {
    SqList* L;
    ElemType e;

    // (1) 初始化顺序表
    InitList(L);
    cout << "(1)初始化顺序表完成" << endl;
    // (2) 依次插入 a, b, c, d, e 元素
    ListInsert(L, 1, 'a');
    ListInsert(L, 2, 'b');
    ListInsert(L, 3, 'c');
    ListInsert(L, 4, 'd');
    ListInsert(L, 5, 'e');
    cout << "(2)依次插入a,b,c,d,e完成" << endl;
    // (3) 输出顺序表
    cout << "(3)顺序表: ";
    DispList(L);

    // (4) 输出顺序表长度
    cout << "(4)顺序表长度: " << ListLength(L) << endl;

    // (5) 判断顺序表是否为空
    cout << "(5)顺序表是否为空: " << (ListEmpty(L) ? "是" : "否") << endl;

    // (6) 输出顺序表的第3个元素
    if (GetElem(L, 3, e)) {
        cout << "(6)第3个元素: " << e << endl;
    }

    // (7) 输出元素a的位置
    cout << "(7)元素a的位置: " << LocateElem(L, 'a') << endl;

    // (8) 在第4个元素位置上插入f元素
    ListInsert(L, 4, 'f');
    cout << "(8)在第4个位置插入f元素" << endl;
    // (9) 输出顺序表
    cout << "(9)顺序表: ";
    DispList(L);

    // (10) 删除顺序表的第3个元素
    if (ListDelete(L, 3, e)) {
        cout << "(10)删除的第3个元素: " << e << endl;
    }

    // (11) 输出顺序表
    cout << "(11)顺序表: ";
    DispList(L);

    // (12) 释放顺序表
    DestroyList(L);

    return 0;
}
*/