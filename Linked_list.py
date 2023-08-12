class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class link_list:
    def __init__(self):
        self.head = None

    def list_len(self):
        # Traverse to every node and count them
        curr_node = self.head
        size = 0
        while curr_node is not None:
            curr_node = curr_node.next
            size += 1
        return size

    def is_empty(self):
        return self.list_len() == 0

    def insert_head(self, new_node):
        # Store head node
        temp_node = self.head
        self.head = new_node
        new_node.next = temp_node
        del temp_node

    def insert_at(self, new_node, posi):
        # If insert at position 0 or head node
        if posi < 0 or posi > self.list_len():
            print(f"{posi} is invalid position")
            return

        if posi == 0:
            self.insert_head(new_node)
            return

        # Store current node and traverse untill we reach position
        curr_node = self.head
        count = 0
        while True:
            if count == posi:
                prev_node.next = new_node
                new_node.next = curr_node
                return

            prev_node = curr_node
            curr_node = curr_node.next
            count += 1

    def insert_last(self, new_node):
        # If head is none
        if self.head is None:
            self.head = new_node

        # Insert node untill node.next is not none
        else:
            last_node = self.head
            while last_node.next is not None:
                last_node = last_node.next
            last_node.next = new_node

    def delete_head(self):
        if not self.is_empty():
            temp_node = self.head
            self.head = temp_node.next
            temp_node.next = None
        else:
            print("Linked list is empty")

    def delete_at(self, posi):
        if not self.is_empty():
            if posi == self.list_len() - 1:
                self.delete_last()
                return

            if posi < 0 or posi >= self.list_len():
                print(f"{posi} is invalid position")
                return

            if posi == 0:
                self.delete_head()
                return

            curr_node = self.head
            count = 0
            while True:
                if count == posi:
                    prev_node.next = curr_node.next
                    curr_node.next = None
                    return

                prev_node = curr_node
                curr_node = curr_node.next
                count += 1
        else:
            print("Linked list is empty")

    def delete_last(self):
        if not self.is_empty():
            last_node = self.head
            while last_node.next is not None:
                prev_node = last_node
                last_node = last_node.next

            prev_node.next = None
            del last_node
        else:
            print("Linked list is empty")

    def print_list(self):
        # If No node in linked list
        if self.head is None:
            print("Linked List is empty")
            return

        # Print node data untill its not nonw
        curr_node = self.head
        while curr_node is not None:
            print(curr_node.data, end=", ")
            curr_node = curr_node.next


# Node => Data,next
# firstNode.data => john, firstNode.next => None
first_node = Node("Gaurav")
sec_node = Node("Tilak")
third_node = Node("Harsh")
fourth_node = Node("Kirtan")
fifth_node = Node("Asmita")

# Create Linked List
Linked_list = link_list()

# Insert Nodes
Linked_list.insert_last(first_node)
Linked_list.insert_last(sec_node)
Linked_list.insert_last(third_node)

# Insert at head
Linked_list.insert_head(fourth_node)

# Insert in between or at specific position
Linked_list.insert_at(fifth_node, 2)

# Delete head node
Linked_list.delete_head()

# Delete last node
Linked_list.delete_last()

# Delete last node
Linked_list.delete_at(5)

# Print List
Linked_list.print_list()
