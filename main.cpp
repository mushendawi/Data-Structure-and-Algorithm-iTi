#include <iostream>

using namespace std;

#include <Stack.h>
#include <Queue.h>

int main()
{
    cout<<"\n#####################";
    cout<<"\n### Stack Program ###";
    cout<<"\n#####################\n";

    Stack S;
    int data;

    cout<<"\n--- push 3 - 5 - 7 - 9 ---\n";
    S.push(3);
    S.push(5);
    S.push(7);
    S.push(9);
    S.display(); // 4 elements

    cout<<"\n--- pop ---\n"; // 1
    if(S.pop(data) == 1)
        cout<<data<<endl;
    else
        cout<<"pop failure!\n";

    cout<<"\n--- pop ---\n"; // 2
    if(S.pop(data) == 1)
        cout<<data<<endl;
    else
        cout<<"pop failure!\n";

    cout<<"\n--- pop ---\n"; // 3
    if(S.pop(data) == 1)
        cout<<data<<endl;
    else
        cout<<"pop failure!\n";

    cout<<"\n--- pop ---\n"; // 4
    if(S.pop(data) == 1)
        cout<<data<<endl;
    else
        cout<<"pop failure!\n";

    cout<<"\n--- pop ---\n"; // 5 >> failure (only had 4 elements)
    if(S.pop(data) == 1)
        cout<<data<<endl;
    else
        cout<<"pop failure!\n";

    cout<<"\n--- peak ---\n"; // failure (only had 4 elements)
    if(S.peak(data) == 1)
        cout<<data<<endl;
    else
        cout<<"peak failure!\n";

    cout<<"\n--- display ---\n";
    S.display(); // empty


    cout<<"\n--- push 10 - 20 - 30 - 40 ---\n";
    S.push(10);
    S.push(20);
    S.push(30);
    S.push(40);
    S.display(); // 4 elements

    cout<<"\n--- peak ---\n"; // peak with no change
    if(S.peak(data) == 1)
        cout<<data<<endl;
    else
        cout<<"peak failure!\n";

    cout<<"\n--- display ---\n";
    S.display(); // still 4 elements


    cout<<"\n#####################";
    cout<<"\n### Queue Program ###";
    cout<<"\n#####################\n";

    Queue Q(5);
    int f, r;

    cout<<"\n--- enQueue 1 - 2 - 3 - 4 - 5 ---\n";
    Q.enQueue(1);
    Q.enQueue(2);
    Q.enQueue(3);
    Q.enQueue(4);
    Q.enQueue(5);
    Q.display();


    cout<<"\n--- GetFront ---\n";
    f = Q.GetFront();
    cout<<f<<endl;

    cout<<"\n--- GetRear ---\n";
    r = Q.GetRear();
    cout<<r<<endl;


    cout<<"\n--- enQueue 6 - 7 ---\n";
    Q.enQueue(6);
    Q.enQueue(7);
    Q.display();

    cout<<"\n--- deQueue 1 - 2 - 3 ---\n";
    Q.deQueue(data);
    Q.deQueue(data);
    Q.deQueue(data);
    Q.display();

    cout<<"\n--- GetFront (index) ---\n";
    f = Q.GetFront();
    cout<<f<<endl;

    cout<<"\n--- GetRear (index) ---\n";
    r = Q.GetRear();
    cout<<r<<endl;

    cout<<"\n--- enQueue 6 - 7 ---\n";
    Q.enQueue(6);
    Q.enQueue(7);
    Q.display();

    return 0;
}
