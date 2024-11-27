#ifndef QUEUE_H
#define QUEUE_H


class Queue
{
    private:
        int Size;
        int Front;
        int Rear;
        int* Que;

    public:
        Queue(int s)
        {
            Size = s;
            Que = new int[Size];
            Front = -1;
            Rear = -1;
        }

        int isEmpty()
        {
            if((Front == -1) && (Rear == -1))
                return 1;
            else
                return 0;
        }

        int isFull()
        {
            if((Rear - Front == Size - 1) || (Front == Rear + 1))
                return 1;
            else
                return 0;
        }

        int enQueue(int data)
        {
            if(isFull())
                return 0;
            else if(isEmpty())
            {
                Front = Rear = 0;
                Que[Rear] = data;
            }
            else
            {
                Rear = (Rear+1)%Size;
                Que[Rear] = data;
                return 1;
            }
        }

        int deQueue(int &data)
        {
            if(isEmpty())
                return 0;
            else
            {
                data = Que[Front];
                Front = (Front+1)%Size;
                return 1;
            }
        }

        int GetFront()
        {
            return Front;
        }

        int GetRear()
        {
            return Rear;
        }

        void display()
        {
            int i = Front-1;
            while(i != Rear)
            {
                i = (i+1)%Size;
                cout<<endl<<Que[i]<<endl;

            }
        }

};

#endif
