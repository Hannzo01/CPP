// 
#include "PmergeMe.hpp"
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <cctype>

bool isValidNumber(const std::string& str) {
    if (str.empty()) return false;
    for (size_t i = 0; i < str.length(); i++) {
        if (!std::isdigit(str[i])) return false;
    }
    return true;
}

std::vector<int> mergeInsertSort(std::vector<int> v) {
    if (v.size() <= 1) return v;

    std::vector<std::pair<int,int>> pairs;
    int straggler = 0;
    bool has_straggler = false; // CORRECTION: Initialisé à false

    for (size_t i = 0; i < v.size(); i += 2) { // CORRECTION: size_t pour i
        if (i + 1 < v.size()) {
            std::pair<int, int> p(v[i], v[i+1]);
            pairs.push_back(p);
        } else {
            straggler = v[i];
            has_straggler = true; // CORRECTION: '=' au lieu de '=='
        }
    }

    for (size_t i = 0; i < pairs.size(); i++) {
        if (pairs[i].first > pairs[i].second)
            std::swap(pairs[i].first, pairs[i].second);
    }

    std::vector<int> winners;
    for (size_t i = 0; i < pairs.size(); i++) {
        winners.push_back(pairs[i].second);
    }

    std::vector<int> mainChain = mergeInsertSort(winners);

    // Extraction des perdants
    std::vector<int> losers;
    for (size_t i = 0; i < pairs.size(); i++)
        losers.push_back(pairs[i].first);

    // Insertion des perdants
    for (size_t i = 0; i < losers.size(); i++) {
        // CORRECTION: lower_bound prend l'élément à chercher, pas 'it++'
        // On cherche la place de losers[i]
        std::vector<int>::iterator it = std::lower_bound(mainChain.begin(), mainChain.end(), losers[i]);
        mainChain.insert(it, losers[i]);
    }

    if (has_straggler) {
        std::vector<int>::iterator it = std::lower_bound(mainChain.begin(), mainChain.end(), straggler);
        mainChain.insert(it, straggler);
    }

    return mainChain;
}

// Fonction Jacobsthal (prête pour l'optimisation future)
int jacobsthal(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return jacobsthal(n - 1) + 2 * (jacobsthal(n - 2));
}

int main(int argc, char *argv[]) {
    if (argc == 1) {
        std::cerr << "Error" << std::endl;
        return 1;
    }

    std::vector<int> v;
    for (int i = 1; i < argc; i++) {
        if (!isValidNumber(argv[i])) {
            std::cerr << "Error" << std::endl;
            return 1;
        }
        int num = std::atoi(argv[i]);
        if (num <= 0) { // On accepte uniquement les entiers positifs selon ton sujet
            std::cerr << "Error" << std::endl;
            return 1;
        }
        if (std::find(v.begin(), v.end(), num) != v.end()) {
            std::cerr << "Error" << std::endl;
            return 1;
        }
        v.push_back(num);
    }

    std::cout << "Before: ";
    for (size_t i = 0; i < v.size(); i++) {
        std::cout << v[i] << (i == v.size() - 1 ? "" : " ");
    }
    std::cout << std::endl;

    std::vector<int> sorted = mergeInsertSort(v);

    std::cout << "After:  "; // CORRECTION: Décommenté pour voir le résultat
    for (size_t i = 0; i < sorted.size(); i++) {
        std::cout << sorted[i] << (i == sorted.size() - 1 ? "" : " ");
    }
    std::cout << std::endl;

    return 0;
}