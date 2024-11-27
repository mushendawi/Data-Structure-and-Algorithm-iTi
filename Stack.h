#ifndef STACK_H
#define STACK_H

#include <Node.h>

class Stack
{
    private:
        Node* Top;
        int isEmpty()
        {
            if(Top == NULL)
                return 1;
            else
                return 0;
        }

    public:
        Stack()
        {
            Top = NULL;
        }

        void push(int data)
        {
            Node* node = new Node(data);
            node->Prev = Top;
            Top = node;
        }

        int pop(int &data)
        {
            if(isEmpty())
                return 0;
            else
            {
                Node* temp = Top;
                data = Top->Data;
                Top = Top->Prev;
                delete temp;
                return 1;
            }
        }

        int peak(int &data)
        {
            if(isEmpty())
                return 0;
            else
            {
                data = Top->Data;
                return 1;
            }
        }

        void display()
        {
            Node* temp = Top;
            while(temp != NULL)
            {
                cout<<endl<<temp->Data<<endl;
                temp = temp->Prev;
            }
        }

        ~Stack()
        {
            while(Top != NULL)
            {
                Node* temp = Top;
                Top = Top->Prev;
                delete temp;
            }
        }


};

#endif // STACK_H
