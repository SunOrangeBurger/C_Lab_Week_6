#include <stdio.h>
int isPalindrome(int num);
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPalindrome(num)) {
        printf("Palindrome");
    } else {
        printf("Not a palindrome");
    }
    return 0;
}
int isPalindrome(int num) {
    int reversed = 0, original = num;
    if (num < 0) return 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}
