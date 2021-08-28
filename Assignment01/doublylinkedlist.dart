// To run this program in your computer, you must have dart extension installed
// run the command 'dart doublylinkedlist.dart' on your terminal

// This library allows you to work with files, directories,
// sockets, processes, HTTP servers and clients, and more.
import 'dart:io';

// This class Node constists of three variables
// and a display function to print the data items
// Here data denotes the data item given by the user
// Node? next stores upcoming node address
// Node? prev stores prev node address
class Node {
  int data;
  Node? next; // ? assigns the property nullable
  Node? prev;

// Constructor
  Node(this.data) {}

// Displays the data items
  void display() {
    // print('$data');
    stdout.write('$data '); // to display data in a row
  }
}

// Since, Dart doesn't have pointers.
// Dart is like many object-oriented languages in which it is
// always pass-by-value and that the value of an object is a reference to it.
// All operations can be done by initiating a new Node and
// storing prev node and next nodecan be done with node itself
class DoubleLinkedList {
  Node? Head;
  Node? Tail;
  // A constructor denoting Head and Tail to null
  DoubleLinkedList() {
    Head = null;
    Tail = null;
  }

// checks if the list is empty or not.
  bool isEmpty() {
    return Head == null;
  }

// adds data to the front of the list
  void addToHead(int data) {
    stdout.write("Element Inserted to Head is : $data \n\n");

    Node newNode = new Node(data);
    if (isEmpty()) {
      Tail = newNode;
    } else {
      Head?.prev = newNode;
    }
    newNode.next = Head;
    Head = newNode;
  }

// adds data from the last of the list
  void addToTail(int data) {
    stdout.write("Element Inserted to Tail is : $data \n\n");
    Node newNode = new Node(data);
    if (isEmpty()) {
      Head = newNode;
    } else {
      Tail?.next = newNode;
      newNode.prev = Tail;
    }
    Tail = newNode;
  }

//adds if the data can be added after certain data in the list
  Node? add(int value, int data) {
    stdout.write("\nElement Inserted after the element $value is : $data \n");
    Node? temp = Head;
    while (temp?.data != value) {
      temp = temp?.next;
      if (temp == null) {
        return null;
      }
    }
    Node newNode = new Node(data);
    if (temp == Tail) {
      newNode.next = null;
      Tail = newNode;
    } else {
      newNode.next = temp?.next;
      temp?.next?.prev = newNode;
    }
    newNode.prev = temp;
    temp?.next = newNode;
    return temp;
  }

//Removes element from the front of the list
  Node? removeFromHead() {
    Node? temp = Head;
    if (Head?.next == null) {
      Tail == null;
    } else {
      Head?.next?.prev = null;
    }
    Head = Head?.next;
    return temp;
  }

// Removes element from the back of the list
  Node? removeFromTail() {
    Node? temp = Tail;
    if (Head?.next == null) {
      Head == null;
    } else {
      Tail?.prev?.next = null;
    }
    Tail = Tail?.prev;
    return temp;
  }

  Node? remove(int value) {
    stdout.write("\nRemoved element is:  $value \n");

    Node? temp = Head;
    while (temp?.data != value) {
      temp = temp?.next;
      if (temp == null) {
        return null;
      }
    }

    if (temp == Head) {
      Head = temp?.next;
    } else {
      temp?.prev?.next = temp.next;
    }
    if (temp == Tail) {
      Tail = temp?.prev;
    } else {
      temp?.next?.prev = temp.prev;
    }

    return temp;
  }

// Display data from front to last
  void traverseForward() {
    stdout.write('\nFrom Head to Tail:\n');
    Node? temp = Head;
    while (temp != null) {
      temp.display();
      temp = temp.next;
    }
    stdout.writeln();
  }

// Display data from last to front
  void traverseBackward() {
    stdout.write('\nFrom Tail to Head:\n');
    Node? temp = Tail;
    while (temp != null) {
      temp.display();
      temp = temp.prev;
    }
    stdout.writeln();
  }

// function to retrieve if the Node is present in the list or not.
  Node? retrieve(int value) {
    stdout.write('\n$value was retrieved.\n');
    Node? temp = Head;
    while (temp?.data != value) {
      if (temp?.next == null) {
        stdout.writeln("Can't find node");
        return null;
      } else {
        temp = temp?.next;
      }
    }
    stdout.writeln('Found node with value ${value}');
    return temp;
  }

// function to search if the Node is present in the list or not.
  bool search(int value) {
    stdout.write('\n$value was Searched.\n');
    Node? temp = Head;
    while (temp?.data != value) {
      if (temp?.next == null) {
        stdout.writeln('Cannot Find node with value ${value}');
        return false;
      } else {
        temp = temp?.next;
      }
    }
    stdout.writeln('Found node with value ${value}');
    return true;
  }
}

int main() {
  DoubleLinkedList list = DoubleLinkedList();
  list.addToHead(15);
  list.addToHead(25);
  list.addToHead(35);
  list.addToHead(45);
  list.addToHead(55);
  list.addToHead(65);
  list.addToTail(86);
  list.addToTail(76);
  list.addToTail(60);

  list.traverseForward();
  list.traverseBackward();

  list.removeFromHead();
  list.removeFromTail();
  list.remove(25);
  list.traverseForward();

  list.add(45, 40);
  list.traverseForward();
  list.search(41);

  list.retrieve(55);

  list.traverseBackward();

  return 0;
}
