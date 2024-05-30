
#include <iostream>
#include <unordered_map>
using namespace std;
int countGoodPairs(int nums[], int size) {
    unordered_map<int, int> numCount;
    int goodPairs = 0;

    for (int i = 0; i < size; ++i) {
        goodPairs += numCount[nums[i]];
        numCount[nums[i]]++; 
    }

    return goodPairs;
}

int main() {
    int numbers[] = { 1,2,3,4,2,3,1,4,4,4,4,1 };
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int goodPairsCount = countGoodPairs(numbers, size);
    cout << "Cont good couples: " << goodPairsCount << endl;

    return 0;
}
