#include "stack.h"

int main()
{
    std::cout << "INTEGER STACK:\n---------------" << std::endl;
    std::cout << std::endl;
    ArrayStack<int> a;
    a.pop();
    std::cout << "Display 1 if Empty, 0 if not: " << a.isEmpty() << std::endl; // evaluate 1 if true and 0 if false
    std::cout << std::endl;
    
    a.push(10);
    a.push(20);
    a.push(30);
    a.push(40);
    a.display();
    std::cout << "The Top element in Stack is: " << a.top() <<std::endl;
    std::cout << "\nDisplay 1 if Empty, 0 if not: " << a.isEmpty() << std::endl; // evaluate 1 if true and 0 if false
    std::cout << "\nDisplay 1 if Full, 0 if not: " << a.isFull() << std::endl; // evaluate 1 if true and 0 if false
    std::cout <<std::endl;

    a.pop();
    a.pop();
    a.display();
    std::cout << "The Top element in Stack is: " << a.top() <<std::endl;
    std::cout <<std::endl;

    std::cout << "\nCHARACTER STACK:\n---------------" << std::endl;
    std::cout << std::endl;

    ArrayStack<char> c;
    c.pop();
    std::cout << "Display 1 if Empty, 0 if not: " << a.isEmpty() << std::endl; // evaluate 1 if true and 0 if false
    std::cout << std::endl;
    
    c.push('R');
    c.push('O');
    c.push('H');
    c.push('A');
    c.push('N');
    c.display();
    std::cout << "The Top element in Stack is: " << c.top() <<std::endl;
    std::cout << "\nDisplay 1 if Empty, 0 if not: " << c.isEmpty() << std::endl; // evaluate 1 if true and 0 if false
    std::cout << "\nDisplay 1 if Full, 0 if not: " << c.isFull() << std::endl; // evaluate 1 if true and 0 if false
    std::cout <<std::endl;

    c.pop();
    c.pop();
    c.display();
    std::cout << "The Top element in Stack is: " << c.top() <<std::endl;
    std::cout <<std::endl;

return 0;
}