#include "queue.h"

int main(){
    Cqueue q;
    q.dequeue();
    q.enqueue(10);
    q.enqueue(12);
    q.enqueue(13);
    q.enqueue(56);
    q.enqueue(18);

    q.display();

    q.dequeue();
    q.dequeue();
    q.display();

    std::cout <<"\nFront Element: " << q.front() << std::endl;
    std::cout <<"\nRear Element: " << q.rear() << std::endl;

    q.enqueue(77);
    q.enqueue(78);
    q.display();
    std::cout <<"\nFront Element: " << q.front() << std::endl;
    std::cout <<"\nRear Element: " << q.rear() << std::endl;

    q.enqueue(80);

return 0;
}