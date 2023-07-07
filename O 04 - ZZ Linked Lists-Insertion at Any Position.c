class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def insert(self, position, data):
        new_node = Node(data)

        if position == 0:
            new_node.next = self.head
            self.head = new_node
        else:
            prev_node = self.head
            for _ in range(position - 1):
                prev_node = prev_node.next

            new_node.next = prev_node.next
            prev_node.next = new_node

    def print_list(self):
        if self.head is None:
            print("null")
        else:
            current = self.head
            elements = []
            while current:
                elements.append(str(current.data))
                current = current.next
            print("->".join(elements))


# Read input
n = int(input())
linked_list = LinkedList()

# Insert elements into the linked list
for _ in range(n):
    position, data = map(int, input().split())
    linked_list.insert(position, data)

# Print the elements in the linked list
linked_list.print_list()
