class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class LinkedList:
    def __init__(self) -> None:
        self.head = None
        self.tail = None
        self.length = 0

    """ Return linked list """

    def traverse(self) -> None:
        current = self.head
        while current:
            print(current.data, end=" -> ")
            current = current.next
        print("None")

    """ Append Element in linked list from end """

    def append(self, data) -> None:
        new_node = Node(data)
        if self.head is None:
            self.head = new_node
        else:
            current = self.head
            while current.next:
                current = current.next
            current.next = new_node
        self.tail = new_node
        self.length += 1

    """ Find element by its value """

    def find(self, element: any) -> None:
        current = self.head

        while current:
            if current.data == element:
                print(f"Found {element} at {current}")
                return
            current = current.next
        else:
            print(f"{element} is not present in Linked List")

    """ This Remove the element by its position (0 indexing) """

    def delete(self, index: any) -> None:
        if index < 0 or index >= self.length or self.head is None:
            return None

        if index == 0:
            self.head = self.head.next
            if self.length == 1:
                self.tail = None
            self.length -= 1
            return

        current = self.head
        prev = None
        count = 0

        while current:
            if count == index:
                prev.next = current.next
                if current == self.tail:
                    self.tail = prev
                self.length -= 1
                return
            prev = current
            current = current.next
            count += 1

    """ This Remove the element by its Value """

    def remove(self, element: any) -> None:
        if self.head is None:
            return None
        if self.head.data == element:
            self.head = self.head.next
            if self.length == 1:
                self.tail = None
            self.length -= 1
            return

        current = self.head
        prev = None
        while current:
            if current.data == element:
                prev.next = current.next
                if current == self.tail:
                    self.tail = prev
                self.length -= 1
                return
            prev = current
            current = current.next


ll = LinkedList()
ll.append(1)
ll.append(2)
ll.append(3)
ll.append(4)

ll.traverse()
ll.find(1)
ll.delete(0)
ll.traverse()
ll.remove(3)
ll.traverse()
