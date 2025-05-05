#include <iostream>
#include <vector>

void printSubset(const std::vector<int>& subset) {
    for (int num : subset) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

void generateSubsets(const std::vector<int>& arr, std::vector<int>& subset, int index) {
    if (index == arr.size()) {
        if (!subset.empty()) {
            printSubset(subset);
        }
        return;
    }

    subset.push_back(arr[index]);
    generateSubsets(arr, subset, index + 1);

    subset.pop_back();
    generateSubsets(arr, subset, index + 1);
}

int main() {
    int N;
    std::cin >> N;
    std::vector<int> arr(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> arr[i];
    }

    std::vector<int> subset;
    generateSubsets(arr, subset, 0);

    return 0;
}