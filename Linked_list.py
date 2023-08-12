class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class link_list:
    def __init__(self):
        self.head = None

    def insert_head(self, new_node):
        temp_node = self.head
        self.head = new_node
        new_node.next = temp_node
        del temp_node

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

    def print_list(self):
        # If No node in linked list
        if self.head is None:
            print("Linked List is empty")
            return

        # Print node data untill its not nonw
        curr_node = self.head
        while curr_node is not None:
            print(curr_node.data)
            curr_node = curr_node.next


# Node => Data,next
# firstNode.data => john, firstNode.next => None
first_node = Node("Gaurav")
sec_node = Node("Tilak")
third_node = Node("Harsh")
fourth_node = Node("Kirtan")

# Create Linked List
Linked_list = link_list()

# Insert Nodes
Linked_list.insert(first_node)
Linked_list.insert(sec_node)
Linked_list.insert(third_node)

# Insert at head
Linked_list.insert_head(fourth_node)

# Print List
Linked_list.print_list()
