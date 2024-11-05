/*#include <iostream>

using namespace std;

// ����Ԫ������
typedef char ElemType;

// ����˳���ṹ
struct SqList {
    ElemType* data; // �洢Ԫ�صĶ�̬����
    int length;     // ��ǰ����
    int maxSize;    // �������
};

// ��ʼ��˳���
void InitList(SqList*& L) {
    L = new SqList; // ����˳����ڴ�
    L->maxSize = 100; // �����������
    L->length = 0; // ��ʼ������Ϊ0
    L->data = new ElemType[L->maxSize]; // �������ݴ洢�ռ�
}

// �ͷ�˳���
void DestroyList(SqList* L) {
    if (L) {
        delete[] L->data; // �ͷ����ݴ洢�ռ�
        delete L; // �ͷ�˳���ṹ��
    }
}

// �ж�˳����Ƿ�Ϊ��
bool ListEmpty(SqList* L) {
    return L->length == 0; // ������Ϊ0������true
}

// ����˳����Ԫ�ظ���
int ListLength(SqList* L) {
    return L->length; // ���ص�ǰ����
}

// ���˳���
void DispList(SqList* L) {
    for (int i = 0; i < L->length; ++i) {
        cout << L->data[i] << " "; // ���ÿ��Ԫ��
    }
    cout << endl;
}

// ��ȡ˳����еĵ�i��Ԫ��
bool GetElem(SqList* L, int i, ElemType& e) {
    if (i < 1 || i > L->length) return false; // Խ����
    e = L->data[i - 1]; // ��ȡ��i��Ԫ��
    return true;
}

// ��˳����в���Ԫ��e
int LocateElem(SqList* L, ElemType e) {
    for (int i = 0; i < L->length; ++i) {
        if (L->data[i] == e) return i + 1; // ����λ�ã���1��ʼ��
    }
    return 0; // δ�ҵ�����0
}

// ��˳����i��λ�ò���Ԫ��e
bool ListInsert(SqList*& L, int i, ElemType e) {
    if (i < 1 || i > L->length + 1) return false; // Խ����
    if (L->length >= L->maxSize) return false; // �����������
    for (int j = L->length; j >= i; --j) {
        L->data[j] = L->data[j - 1]; // �ƶ�Ԫ��
    }
    L->data[i - 1] = e; // ����Ԫ��
    L->length++; // ���³���
    return true;
}

// ��˳���ɾ����i��Ԫ��
bool ListDelete(SqList*& L, int i, ElemType& e) {
    if (i < 1 || i > L->length) return false; // Խ����
    e = L->data[i - 1]; // ��ȡ��ɾ��Ԫ��
    for (int j = i; j < L->length; ++j) {
        L->data[j - 1] = L->data[j]; // �ƶ�Ԫ��
    }
    L->length--; // ���³���
    return true;
}

// ������
int main() {
    SqList* L;
    ElemType e;

    // (1) ��ʼ��˳���
    InitList(L);
    cout << "(1)��ʼ��˳������" << endl;
    // (2) ���β��� a, b, c, d, e Ԫ��
    ListInsert(L, 1, 'a');
    ListInsert(L, 2, 'b');
    ListInsert(L, 3, 'c');
    ListInsert(L, 4, 'd');
    ListInsert(L, 5, 'e');
    cout << "(2)���β���a,b,c,d,e���" << endl;
    // (3) ���˳���
    cout << "(3)˳���: ";
    DispList(L);

    // (4) ���˳�����
    cout << "(4)˳�����: " << ListLength(L) << endl;

    // (5) �ж�˳����Ƿ�Ϊ��
    cout << "(5)˳����Ƿ�Ϊ��: " << (ListEmpty(L) ? "��" : "��") << endl;

    // (6) ���˳���ĵ�3��Ԫ��
    if (GetElem(L, 3, e)) {
        cout << "(6)��3��Ԫ��: " << e << endl;
    }

    // (7) ���Ԫ��a��λ��
    cout << "(7)Ԫ��a��λ��: " << LocateElem(L, 'a') << endl;

    // (8) �ڵ�4��Ԫ��λ���ϲ���fԪ��
    ListInsert(L, 4, 'f');
    cout << "(8)�ڵ�4��λ�ò���fԪ��" << endl;
    // (9) ���˳���
    cout << "(9)˳���: ";
    DispList(L);

    // (10) ɾ��˳���ĵ�3��Ԫ��
    if (ListDelete(L, 3, e)) {
        cout << "(10)ɾ���ĵ�3��Ԫ��: " << e << endl;
    }

    // (11) ���˳���
    cout << "(11)˳���: ";
    DispList(L);

    // (12) �ͷ�˳���
    DestroyList(L);

    return 0;
}
*/