"""
An XOR linked list is a more memory efficient doubly linked list. Instead of each node holding next and prev fields,
it holds a field named both, which is an XOR of the next node and the previous node. Implement an XOR linked list;
it has an add(element) which adds the element to the end, and a get(index) which returns the node at index.
If using a language that has no pointers (such as Python), you can assume you have access to get_pointer and
dereference_pointer functions that converts between nodes and memory addresses.

But I will simulate memory address and Value using dictionary as, dict[mem_addr] = data
"""


class XORLinkedList:
    MEMORY = dict()

    class Node:
        def __init__(self, value):
            self.value = value
            self.both = None

        def __repr__(self):
            return "[{}]".format(self.value)

    def __init__(self, iterable):
        head_node = self.Node(iterable[0]) if len(iterable) != 0 else None
        second_node = self.Node(iterable[1]) if len(iterable) > 1 else None

        self.endNodeAddr = None
        self.beforeEndNodeAddr = None

        if head_node:
            self.headNodeAddr = id(head_node)
            self.MEMORY[self.headNodeAddr] = head_node
            self.endNodeAddr = self.headNodeAddr
        else:
            self.headNodeAddr = None

        if second_node:
            self.secondNodeAddr = id(second_node)
            self.MEMORY[self.secondNodeAddr] = second_node
            self.endNodeAddr = self.secondNodeAddr
            self.beforeEndNodeAddr = self.headNodeAddr
        else:
            self.secondNodeAddr = None

        curr = self.MEMORY.get(self.secondNodeAddr)
        prev = self.MEMORY.get(self.headNodeAddr)

        for k in iterable[2:]:
            new_node = self.Node(k)
            new_node_addr = id(new_node)
            curr.both = new_node_addr ^ id(prev)
            self.MEMORY[new_node_addr] = new_node
            prev = curr
            curr = new_node

        self.endNodeAddr = id(curr)
        self.beforeEndNodeAddr = id(prev)

    def __repr__(self):
        xor_ll = []
        head_node = self.MEMORY.get(self.headNodeAddr)
        second_node = self.MEMORY.get(self.secondNodeAddr)
        if head_node:
            xor_ll.append(str(head_node))
        else:
            return "EmptyXORLinkedList"

        if second_node:
            xor_ll.append(str(second_node))
        else:
            return str(head_node)

        prev = head_node
        curr = second_node
        next_node = self.MEMORY.get(id(prev) ^ curr.both) if curr.both else None
        while next_node:
            xor_ll.append(str(next_node))
            prev = curr
            curr = next_node
            next_node = self.MEMORY.get(id(prev) ^ curr.both) if curr.both else None

        return "-xor-".join(xor_ll)

    def add(self, value):
        new_node = self.Node(value)
        new_node_addr = id(new_node)
        self.MEMORY[new_node_addr] = new_node
        if self.headNodeAddr is None:
            self.headNodeAddr = self.endNodeAddr = new_node_addr
            return
        elif self.secondNodeAddr is None:
            self.beforeEndNodeAddr = self.headNodeAddr
            self.secondNodeAddr = self.endNodeAddr = new_node_addr
            return

        end_node = self.MEMORY[self.endNodeAddr]
        end_node.both = self.beforeEndNodeAddr ^ new_node_addr
        self.beforeEndNodeAddr = self.endNodeAddr
        self.endNodeAddr = new_node_addr

    def get(self, index):
        head_node = self.MEMORY.get(self.headNodeAddr)
        second_node = self.MEMORY.get(self.secondNodeAddr)
        if index == 0 and head_node:
            return head_node

        if index == 1 and second_node:
            return second_node

        prev = head_node
        curr = second_node
        next_node = self.MEMORY.get(id(prev) ^ curr.both) if curr.both else None
        i = 2
        while next_node:
            if i == index:
                return next_node
            prev = curr
            curr = next_node
            next_node = self.MEMORY.get(id(prev) ^ curr.both) if curr.both else None
            i += 1


if __name__ == '__main__':
    xor_l = XORLinkedList([7, 0, 2])
    xor_l.add(5)
    xor_l.add(8)
    xor_l.add(2)
    xor_l.add(1)
    print(xor_l)
    print("Element at index 2 : {}".format(xor_l.get(2)))
