class Node:
    def __init__(self, data: int) -> None:
        self.left = self.right = None
        self.data = data


class Tree:
    def __init__(self, root) -> None:
        self.root = root

    def pre_order(self, node):
        if node is None:
            return

        print(node.data)
        self.pre_order(node.left)
        self.pre_order(node.right)

    def in_order(self, node):
        if node is None:
            return

        self.in_order(node.left)
        print(node.data)
        self.in_order(node.right)

    def post_order(self, node):
        if node is None:
            return

        self.post_order(node.left)
        self.post_order(node.right)
        print(node.data)


""" 
        1
    2       3
4       5 6     7
"""
root = Node(1)
root.left = Node(2)
root.right = Node(3)
root.left.left = Node(4)
root.left.right = Node(5)
root.right.left = Node(6)
root.right.right = Node(7)

bst = Tree(root)
print("Pre : ", bst.pre_order(root))
print("In : ", bst.in_order(root))
print("Post : ", bst.post_order(root))
