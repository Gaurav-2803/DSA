from collections import deque


class Node:
    def __init__(self, data: int) -> None:
        self.left = self.right = None
        self.data = data


class Tree:
    def __init__(self, root) -> None:
        self.root = root

    # Recursive Approach
    def pre_order(self, node):
        if node is None:
            return

        print(node.data)
        self.pre_order(node.left)
        self.pre_order(node.right)

    # Recursive Approach
    def in_order(self, node):
        if node is None:
            return

        self.in_order(node.left)
        print(node.data)
        self.in_order(node.right)

    # Recursive Approach
    def post_order(self, node):
        if node is None:
            return

        self.post_order(node.left)
        self.post_order(node.right)
        print(node.data)

    def level_order(self, node):
        if node is None:
            return
        queue = deque([node])
        while queue:
            current = queue.popleft()
            print(current.data)
            if current.left:
                queue.append(current.left)
            if current.right:
                queue.append(current.right)

    def pre_order_iter(self, node):
        if node is None:
            return
        stack = [node]
        while stack:
            curr = stack.pop()
            print(curr.data)
            if curr.right:
                stack.append(curr.right)
            if curr.left:
                stack.append(curr.left)

    def in_order_iter(self, node):
        if node is None:
            return
        stack = []
        curr = node
        while True:
            if curr:
                stack.append(curr)
                curr = curr.left
            else:
                if not stack:
                    break
                curr = stack.pop()
                print(curr.data)
                curr = curr.right

    def post_order_iter(self, node):
        pass
        if node is None:
            return
        stack = []
        curr = node
        while curr or stack:
            if curr:
                stack.append(curr)
                curr = curr.left
            else:
                temp = stack[-1].right
                if not temp:
                    temp = stack[-1]
                    stack.pop()
                    print(temp)
                    # print(curr.data)
                    # curr=curr.right
                else:
                    curr = temp


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

print("Pre : ", end="")
bst.pre_order(root)

print("In : ", end="")
bst.in_order(root)

print("Post : ", end="")
bst.post_order(root)

print("Level : ", end="")
bst.level_order(root)

print("Pre : ", end="")
bst.pre_order_iter(root)

print("In : ", end="")
bst.in_order_iter(root)

print("Post : ", end="")
bst.post_order_iter(root)
