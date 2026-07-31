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

    def post_order_iter_2stack(self, node):
        arr = []

        if node is None:
            return arr

        s1, s2 = [], []
        s1.append(node)
        while s1:
            curr = s1.pop()
            if curr.left:
                s1.append(curr.left)
            if curr.right:
                s1.append(curr.right)
            s2.append(curr)

        while s2:
            arr.append(s2.pop().data)

        return arr

    def post_order_iter_1stack(self, node):
        arr = []

        if node is None:
            return arr

        stack = []
        curr = node
        while stack or curr:
            if curr:
                stack.append(curr)
                curr = curr.left
            else:
                temp = stack[-1].right
                if temp is None:
                    temp = stack.pop()
                    arr.append(temp.data)

                    while stack and temp == stack[-1].right:
                        temp = stack.pop()
                        arr.append(temp.data)
                else:
                    curr = temp

        return arr

    def depth_of_tree_dfs(self, node):
        if not node:
            return 0
        return 1 + max(
            self.depth_of_tree_dfs(node.left), self.depth_of_tree_dfs(node.right)
        )

    def is_tree_balanced(self, root):
        if not root:
            return True
        return (
            abs(self.depth_of_tree_dfs(root.left) - self.depth_of_tree_dfs(root.right))
            > 1
        )

    def diameter_of_tree(self, root):
        diameter = 0

        def dfs(node):
            nonlocal diameter

            if node is None:
                return 0

            left = dfs(node.left)
            right = dfs(node.right)

            # Diameter passing through this node
            diameter = max(diameter, left + right)

            # Height of this subtree
            return 1 + max(left, right)

        dfs(root)
        return diameter

    def max_path_sum(self, root: Node):
        maxPath = 0

        def max_path(node: Node):
            nonlocal maxPath

            if node is None:
                return 0

            left = max_path(node.left)
            right = max_path(node.right)

            # Diameter passing through this node
            maxPath = max(maxPath, node.data + left + right)

            # Height of this subtree
            return root.data + max(left, right)

        return max(max_path(root), maxPath)


""" 
        1
    2       3
4       5 6     7
         10          8
        11               9   
                            12
"""
# root = Node(1)
# root.left = Node(2)
# root.right = Node(3)
# root.left.left = Node(4)
# root.left.right = Node(5)
# root.right.left = Node(6)
# root.right.left.left = Node(10)
# root.right.left.left.left = Node(11)
# root.right.right = Node(7)
# root.right.right.right = Node(8)
# root.right.right.right.right = Node(9)
# root.right.right.right.right.right = Node(12)

""" 
                -10
            9           20
                     15     7
"""
root = Node(-10)
root.left = Node(9)
root.right = Node(20)
root.right.left = Node(15)
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
print(bst.post_order_iter_2stack(root))

print("Post : ", end="")
print(bst.post_order_iter_1stack(root))

print("Depth : ", end="")
print(bst.depth_of_tree_dfs(root))

print("Is Tree Balanced : ", end="")
print(bst.is_tree_balanced(root))

print("Diameter of Tree : ", end="")
print(bst.diameter_of_tree(root))

print("Max Path Sum of Tree : ", end="")
print(bst.max_path_sum(root))
