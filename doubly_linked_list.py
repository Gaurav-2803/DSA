class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        self.back = None


class DoublyLinkedList:
    """Doubly Linked List"""

    def __init__(self):
        self.head = None
        self.tail = None
        self._length = 0

    def __len__(self) -> int:
        """Return Length of DLL"""
        return self._length

    def __str__(self) -> int:
        """Return DLL in String"""
        values = []
        current = self.head
        while current:
            values.append(str(current.data))
            current = current.next

        values.append("None")
        return " -> ".join(values)

    def traverse(self) -> None:
        current = self.head
        while current:
            print(current.data, end=" -> ")
            current = current.next
        print("None")

    def append(self, element) -> None:
        """Insert element in DLL from End"""
        new_node = Node(element)

        if self.head is None:
            self.head = self.tail = new_node
            self._length += 1
            return

        new_node.back = self.tail
        self.tail.next = new_node
        self.tail = new_node
        self._length += 1

    def insert(self, element, idx) -> None:
        if idx < 0 or idx > self._length:
            return

        new_node = Node(element)

        # Empty list
        if self._length == 0:
            self.head = self.tail = new_node
            self._length += 1
            return

        # Insert at head
        if idx == 0:
            new_node.next = self.head
            self.head.back = new_node
            self.head = new_node
            self._length += 1
            return

        # Insert at tail
        if idx == self._length:
            new_node.back = self.tail
            self.tail.next = new_node
            self.tail = new_node
            self._length += 1
            return

        # Traverse to node at index `idx`
        if idx <= self._length // 2:
            current = self.head
            for _ in range(idx):
                current = current.next
        else:
            current = self.tail
            for _ in range(self._length - idx):
                current = current.back

        # Insert BEFORE current
        new_node.back = current.back
        new_node.next = current
        current.back.next = new_node
        current.back = new_node

        self._length += 1

    def delete(self, index: int) -> None:
        """Delete element by index"""
        if self.head is None or index < 0 or index >= self._length:
            return

        if index == 0:
            self.head = self.head.next
            if len(self) == 1:
                self.tail = None
            else:
                self.head.back = None

            self._length -= 1
            return

        if index <= self._length // 2:
            current = self.head
            for _ in range(index):
                current = current.next
        else:
            current = self.tail
            for _ in range(self._length - index - 1):
                current = current.back

        if current != self.tail:
            current.next.back = current.back
        else:
            self.tail = current.back

        current.back.next = current.next
        current.next = current.back = None
        self._length -= 1

    def convert_arr_to_dll(self, arr):
        """Convert array into DLL"""
        for element in arr:
            self.append(element)


dll = DoublyLinkedList()
dll.append("0")
dll.append("1")
dll.append("2")
dll.append("3")
dll.append("4")
print(str(dll))
dll.delete(3)
print(str(dll))
dll.insert(3, 3)
print(str(dll))
# dll.append(1)
# dll.append(1.0)
# dll.convert_aar_to_dll([21, 324, 324, "svdvd", ["d", 3]])
# dll.traverse()
# print(len(dll))
