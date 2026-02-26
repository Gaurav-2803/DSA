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
        self.length = 0

    def __len__(self) -> int:
        """Return Length of DLL"""
        return self.length

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
            self.length += 1
            return

        new_node.back = self.tail
        self.tail.next = new_node
        self.tail = new_node
        self.length += 1

    def delete(self, index: int) -> None:
        """Delete element by index"""
        if self.head is None or index < 0 or index >= self.length:
            return

        if index == 0:
            self.head = self.head.next
            if len(self) == 1:
                self.tail = None
            else:
                self.head.back = None

            self.length -= 1
            return

        current = self.head
        for _ in range(index):
            current = current.next

        if current != self.tail:
            current.next.back = current.back
        else:
            self.tail = current.back

        current.back.next = current.next
        current.next = current.prev = None
        self.length -= 1

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
dll.traverse()
dll.delete(3)
dll.traverse()
# dll.append(1)
# dll.append(1.0)
# dll.convert_aar_to_dll([21, 324, 324, "svdvd", ["d", 3]])
# dll.traverse()
# print(len(dll))
