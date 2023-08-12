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

    def insert(self, new_node):
        # If head is none
        if self.head is None:
            self.head = new_node

        # Insert node untill node.next is not none
        else:
            last_node = self.head
            while last_node.next is not None:
                last_node = last_node.next
            last_node.next = new_node

    def delete_last(self):
        last_node = self.head
        while last_node.next is not None:
            prev_node = last_node
            last_node = last_node.next

        prev_node.next = None
        del last_node

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
Linked_list.insert(first_node)
Linked_list.insert(sec_node)
Linked_list.insert(third_node)

# Insert at head
Linked_list.insert_head(fourth_node)

# Insert in between or at specific position
Linked_list.insert_at(fifth_node, 2)

# Delete last node
Linked_list.delete_last()

# Print List
Linked_list.print_list()
