#include <cstdlib>
#include <iostream>
#include <vector>

int main() {
    struct Node {
        int value = 0;
        int index = 0;
        Node* next = nullptr;
        Node* prev = nullptr;
    };

    const int N = 100;
    std::vector<Node*> nodes;
    nodes.reserve(N);

    // Create nodes
    for (int i = 0; i < N; ++i) {
        nodes.push_back(new Node());
    }

    // Link them into a circular doubly linked list
    for (int i = 0; i < N; ++i) {
        nodes[i]->next = nodes[(i + 1) % N];
        nodes[i]->prev = nodes[(i - 1 + N) % N];
        nodes[i]->index = i;
    }

    Node* head = nodes.front();

    // Node 50 is the starting point
    head = nodes[50];

    // Read from stdin, format is L (left) or R (right) followed by an int and /newline. For example:
    // L14
    // L46
    // L44
    // Left moves back, right moves forward

    char direction;
    int steps;

    while (std::cin >> direction >> steps) {
        std::cout << "Moving " << direction << " by " << steps << " steps." << std::endl;
        Node* current = head;
        std::cout << "Current node index: " << current->index << ", value: " << current->value << std::endl;
        if (direction == 'L') {
            for (int i = 0; i < steps; ++i) {
                current = current->prev ? current->prev : nodes.back();
            }
        } else if (direction == 'R') {
            for (int i = 0; i < steps; ++i) {
                current = current->next ? current->next : nodes.front();
            }
        }
        head = current;
        head->value += 1;
    }

    // Print the value of the first node
    std::cout << "First node value: " << nodes[0]->value << std::endl;

    // Cleanup allocated nodes
    for (Node* p : nodes) delete p;

    return EXIT_SUCCESS;
}
