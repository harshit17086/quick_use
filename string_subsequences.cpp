#include <iostream>
#include <vector>

using namespace std;

void generateSubsequences(string& str, int index, string current, vector<string>& subsequences) {
    if (index == str.length()) {
        subsequences.push_back(current);
        return;
    }

    // Exclude the current character
    generateSubsequences(str, index + 1, current, subsequences);

    // Include the current character
    current += str[index];
    generateSubsequences(str, index + 1, current, subsequences);
}

int main() {
    string inputString = "pqrs";
    vector<string> allSubsequences;

    generateSubsequences(inputString, 0, "", allSubsequences);

    // Displaying all subsequences
    for (auto subsequence : allSubsequences) {
        cout << subsequence << endl;
    }

    return 0;
}