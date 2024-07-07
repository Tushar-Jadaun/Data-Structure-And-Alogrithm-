#include <iostream>
#include <vector>
#include <unordered_set>

std::vector<int> find_duplicates(const std::vector<int>& arr) {
    std::unordered_set<int> seen;
    std::vector<int> duplicates;
    for (int item : arr) {
        if (seen.find(item) != seen.end()) {
            duplicates.push_back(item);
        } else {
            seen.insert(item);
        }
    }
    return duplicates;
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 3, 2, 6, 7, 8, 2};
    std::vector<int> duplicates = find_duplicates(arr);

    std::cout << "Duplicates: ";
    for (int item : duplicates) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    return 0;
}
