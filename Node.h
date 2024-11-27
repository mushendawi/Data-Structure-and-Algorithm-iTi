#ifndef NODE_H
#define NODE_H


class Node
{
    public:
        Node * Prev;
        int Data;
        Node(int data){
            Data=data;
            Prev=NULL;
        }
};

#endif // NODE_H
