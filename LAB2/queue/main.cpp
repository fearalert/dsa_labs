#include "queue.h"

int main(){
    std::cout << "INTEGER QUEUE:\n---------------" << std::endl;
    std::cout << std::endl;

    ArrayQueue<int> q;
    q.dequeue();
    std::cout << "Display 1 if Empty, 0 if not: " << q.isEmpty() << std::endl; // evaluate 1 if true and 0 if false
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    std::cout << "Display 1 if Full, 0 if not: " << q.isFull() << std::endl; // evaluate 1 if true and 0 if false 
    std::cout << "Display 1 if Empty, 0 if not: " << q.isEmpty() << std::endl; // evaluate 1 if true and 0 if false 
    q.display();
    q.dequeue();
    q.dequeue();
    q.display();
    std::cout << "Front Element: "  << q.front() << std::endl;
    std::cout << "Rear Element: "  << q.rear() << std::endl;

    std::cout << std::endl;
    std::cout << std::endl;

    
    std::cout << "CHARACTER QUEUE:\n----------------" << std::endl;
    std::cout << std::endl;

    ArrayQueue<char> c;
    c.dequeue();
    std::cout << "Display 1 if Empty, 0 if not: " << c.isEmpty() << std::endl; // evaluate 1 if true and 0 if false
    c.enqueue('R');
    c.enqueue('O');
    c.enqueue('H');
    c.enqueue('A');
    c.enqueue('N');
    std::cout << "Display 1 if Full, 0 if not: " << c.isFull() << std::endl; // evaluate 1 if true and 0 if false 
    std::cout << "Display 1 if Empty, 0 if not: " << c.isEmpty() << std::endl; // evaluate 1 if true and 0 if false 
    c.display();
    c.dequeue();
    c.dequeue();
    c.display();
    std::cout << "Front Element: "  << c.front() << std::endl;
    std::cout << "Rear Element: "  << c.rear() << std::endl;

    return 0;
}