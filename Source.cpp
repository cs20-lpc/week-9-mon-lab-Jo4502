#include "LinkedQueue.hpp"
#include <iostream>
using namespace std;

int main() {
    LinkedQueue<int> q;  // create queue of ints

    // test enqueue
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front: " << q.front() << endl;  // should print 10
    cout << "Back: " << q.back() << endl;  // should print 30
    cout << "Length: " << q.getLength() << endl;

    // test dequeue
    q.dequeue();
    cout << "After one dequeue, front: " << q.front() << endl;  // should print 20

    // test copy constructor
    LinkedQueue<int> copyQ(q);
    cout << "Copy front: " << copyQ.front() << ", back: " << copyQ.back() << endl;

    // clear queue
    q.clear();
    cout << "After clear, isEmpty: " << (q.isEmpty() ? "true" : "false") << endl;

    return 0;
}
