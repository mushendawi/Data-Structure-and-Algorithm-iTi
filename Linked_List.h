#ifndef LINKED_LIST_H
#define LINKED_LIST_H


#include "Node.h"
using namespace std;
class Linked_List
{
    public:
        Node * head;
        Node * tail;
        Node * getNodeUsingData(int data){
            Node *current=head;
            while(current != NULL){
                if(current->Data==data){
                    return current;
                }
                //Jump
                current=current->Next;
            }
            return NULL;
        }


    public:
        Linked_List() {
            head=tail=NULL;
        }
        void add(int data){
            //Create Node
            Node * node = new Node(data); //Create Object Node , Data=data , next,prev=null

                if(head == NULL){//First Node
                    head=tail=node;
                    //node->Next=node->prev=NULL;
                }
                else{//Not First Node
                    tail->Next =node; //Old->Next=NewNode
                    node->Prev=tail; //newNode->prev=old(Node)
                    tail=node;//tail=node;
                }
        }
        void display(){
            Node * current =head;//NULL
            if(current == NULL){
                cout<<"Linked List is Empty \n";
                return ;
            }
            while(current != NULL){
                //Display
                cout<<current->Data<<"\t";
                //Increment Jump Node
                current=current->Next;
            }
            cout<<endl;
        }


    void removeNode(int data){
        //Search Linked List
        Node * node = getNodeUsingData(data);
        if(node == NULL){
            cout<<"Element Not Found , Can't Remove \n";
            return;
        }
        else{
            //Remove First
            if(node == head){
                if(node == tail){
                    tail=head=NULL;
                }
                else{
                    head=node->Next;
                    head->Prev=NULL;
                }

            }
            else if (node == tail){ //Remove Last
                tail=node->Prev;
                tail->Next=NULL;
            }
            else{//Remove Mid
                Node * A=node->Prev;
                Node * B=node->Next;
                A->Next=B;
                B->Prev=A;
            }

            delete(node);

        }

    }

    int search_using_data(int data){
        Node * node = getNodeUsingData(data);
        if(node == NULL){
            return 0;
        }
        else{
            return 1;
        }
    }


    void InsertAfter(int data, int afterData) {
        Node* after = getNodeUsingData(data);
        if (after == NULL)
        {
            cout<<"\nData Not Found.\n Can't Add New Data!\n";
        }
        else
        {
            Node* node = new Node(afterData);
            if (after == tail)
            {
                node->Next = NULL;
                node->Prev = tail;
                tail->Next = node;
                tail = node;
            }
            else
            {
                node->Next = after->Next;
                after->Next->Prev = node;
                node->Prev = after;
                after->Next = node;
            }
        }

    }


    void InsertBefore(int data, int beforeData) {
        Node* before = getNodeUsingData(data);
        if (before == NULL)
        {
            cout<<"\nData Not Found.\n Can't Add New Data!\n";
        }
        else
        {
            Node* node = new Node(beforeData);
            if (before == head)
            {
                node->Next = head;
                node->Prev = NULL;
                head->Prev = node;
                head = node;
            }
            else
            {
                node->Next = before;
                node->Prev = before->Prev;
                before->Prev->Next = node;
                before->Prev = node;
            }
        }
    }

    int GetCount()
    {
        Node* current = head;
        int c = 0;
        while(current != NULL)
        {
            current = current->Next;
            c++;
        }
        return c;
    }


    int GetDataByIndex(int index)
    {
        int data;
        Node* current = head;

        if(current == NULL)
        {
            cout<<"\nEmpty List!\n";
            return -1;
        }
        else
        {
            for(int i = 0; i <= index; i++)
            {
                if(current == NULL)
                {
                    cout<<"\nIndex Out-of-Range!\n";
                    return -1;
                }
                data = current->Data;
                current = current->Next;
            }
            return data;
        }
    }

    Node* GetNodeByIndex(int index)
    {
        Node* current = head;
        for(int i = 0; i < index; i++)
        {
            if(current == NULL)
            {
                cout<<"\nIndex Out-of-Range!\n";
                return NULL;
            }
            current = current->Next;
        }
        return current;
    }

    protected:

};


#endif // LINKED_LIST_H
