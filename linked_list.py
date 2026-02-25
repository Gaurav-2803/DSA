class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class LinkedList:
    """Singly Linked List"""

    def __init__(self) -> None:
        self.head = None
        self.tail = None
        self._length = 0

    def __len__(self):
        """Return length of linked list"""
        return self._length

    def traverse(self) -> None:
        """Print linked list"""
        current = self.head
        while current:
            print(current.data, end=" -> ")
            current = current.next
        print("None")

    def append(self, element) -> None:
        """Append element at end"""
        new_node = Node(element)

        if self.head is None:
            self.head = self.tail = new_node
        else:
            self.tail.next = new_node
            self.tail = new_node

        self._length += 1

    def insert(self, element, idx) -> None:
        """Insert element by index"""
        if idx < 0 or idx > len(self):
            return

        new_node = Node(element)

        # Insert at head
        if idx == 0:
            new_node.next = self.head
            self.head = new_node
            if len(self) == 0:
                self.tail = new_node
            self._length += 1
            return

        # Insert at tail
        if idx == len(self):
            self.tail.next = new_node
            self.tail = new_node
            self._length += 1
            return

        # Insert in middle
        current = self.head
        for _ in range(idx - 1):
            current = current.next

        new_node.next = current.next
        current.next = new_node
        self._length += 1

    def find(self, element) -> None:
        """Find element by value"""
        current = self.head
        while current:
            if current.data == element:
                print(f"Found {element} at {current}")
                return
            current = current.next
        print(f"{element} is not present in Linked List")

    def delete(self, index) -> None:
        """Delete element by index"""
        if index < 0 or index >= len(self) or self.head is None:
            return

        if index == 0:
            self.head = self.head.next
            if len(self) == 1:
                self.tail = None
            self._length -= 1
            return

        current = self.head
        for _ in range(index - 1):
            current = current.next

        if current.next == self.tail:
            self.tail = current

        current.next = current.next.next
        self._length -= 1

    def remove(self, element) -> None:
        """Remove element by value"""
        if self.head is None:
            return

        if self.head.data == element:
            self.head = self.head.next
            if len(self) == 1:
                self.tail = None
            self._length -= 1
            return

        current = self.head
        while current.next:
            if current.next.data == element:
                if current.next == self.tail:
                    self.tail = current
                current.next = current.next.next
                self._length -= 1
                return
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
ll.insert(-1, 0)
ll.traverse()
ll.insert(-15, 2)
ll.traverse()
ll.insert(-20, 4)
ll.traverse()
