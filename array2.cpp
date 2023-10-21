#include <iostream>
#include <string>
#include <cctype>

bool isPalindrome(std::string s) {
    // Remove spaces, punctuation, and convert to lowercase
    std::string cleanedStr;
    for (char c : s) {
        if (isalnum(c)) { // Check if the character is alphanumeric
            cleanedStr += tolower(c); // Convert to lowercase and add to cleaned string
        }
    }

    // Check if the cleaned string is a palindrome
    int left = 0;
    int right = cleanedStr.length() - 1;
    while (left < right) {
        if (cleanedStr[left] != cleanedStr[right]) {
            return false; // Not a palindrome
        }
        left++;
        right--;
    }
    return true; // It's a palindrome
}

int main() {
    std::string inputStr = "A man a plan a canal Panama";
    bool result = isPalindrome(inputStr);

    if (result) {
        std::cout << "Is the input a palindrome? Yes" << std::endl;
    } else {
        std::cout << "Is the input a palindrome? No" << std::endl;
    }

    return 0;
}
