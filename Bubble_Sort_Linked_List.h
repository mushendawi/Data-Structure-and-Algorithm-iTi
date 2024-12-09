#ifndef BUBBLE_SORT_LINKED_LIST_H
#define BUBBLE_SORT_LINKED_LIST_H

#include "Linked_List.h"
void Swap_Nodes(int x, int y, Linked_List &L)
{
    Node* A;
    Node* B;
    if (x >= y)
    {
        A = L.GetNodeByIndex(y);
        B = L.GetNodeByIndex(x);
    }
    else
    {
        A = L.GetNodeByIndex(x);
        B = L.GetNodeByIndex(y);
    }

    if(A->Next == B)
    {
        if (A->Prev)
            A->Prev->Next = B;
        if (B->Next)
            B->Next->Prev = A;

        if (L.head == A)
            L.head = B;
        if (L.tail == B)
            L.tail = A;

        A->Next = B->Next;
        B->Prev = A->Prev;
        B->Next = A;
        A->Prev = B;

        return;
    }

    Node* A_Next = A->Next;
    Node* A_Prev = A->Prev;
    Node* B_Next = B->Next;
    Node* B_Prev = B->Prev;

    if (A_Prev)
        A_Prev->Next = B;
    if (A_Next)
        A_Next->Prev = B;
    if (B_Prev)
        B_Prev->Next = A;
    if (B_Next)
        B_Next->Prev = A;

    if (L.head == A)
        L.head = B;
    if (L.tail == B)
        L.tail = A;

    A->Next = B_Next;
    A->Prev = B_Prev;
    B->Next = A_Next;
    B->Prev = A_Prev;

    return;

}


int Bubble_Sort_Linked_List(Linked_List &L)
{
    int iterations = 0;
    int sorted = 0;
    int size = L.GetCount();
    for (int j = 0; sorted == 0; j++)
    {
        sorted = 1;
        for (int i = 0; i < size-1-j; i++)
        {
            if (L.GetDataByIndex(i) > L.GetDataByIndex(i+1))
            {
                Swap_Nodes(i,i+1,L);
                sorted = 0;
            }
            iterations++;
        }
    }
    return iterations;
}

#endif // BUBBLE_SORT_LINKED_LIST_H
