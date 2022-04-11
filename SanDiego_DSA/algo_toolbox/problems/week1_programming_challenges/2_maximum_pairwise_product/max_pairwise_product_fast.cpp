#include <iostream>
#include <vector>
#include <algorithm>

long long MaxPairwiseProductFast(const std::vector<int>& numbers) {
    int max_idx1 = 0;
    int max_idx2 = 0;
    int n = numbers.size();
    for(int i = 1; i < n; i++){
        if(numbers[max_idx1] < numbers[i]){
            max_idx1 = i;
        }
    }

    if(max_idx1 == 1){max_idx2=2;}
    else{max_idx2 = 1;}

    for(int j = 1; j < n; j++){
        if(numbers[max_idx2] < numbers[j] && numbers[max_idx2] != numbers[max_idx1] ){
            max_idx2 = j;
        }
    }
    return (long long)numbers[max_idx1]*numbers[max_idx2];
}

long long MaxPairwiseProduct(const std::vector<int>& numbers) {
    long long max_product = 0;
    int n = numbers.size();

    for (int first = 0; first < n; ++first) {
        for (int second = first + 1; second < n; ++second) {
            max_product = std::max(max_product,
                (long long)numbers[first] * numbers[second]);
        }
    }
    return (long long)max_product;
}

int main() {

    /*
    int n;
    std::cout << "How long is the sequence: ";
    std::cin >> n;
    std::cout << "Enter the sequence: ";
    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    std::cout << (long long)MaxPairwiseProductFast(numbers) << "\n";
    return 0;
    */

    // Stress Test
}
