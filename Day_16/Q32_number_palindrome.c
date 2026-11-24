/* Q32: Number palindrome
   Standalone C solution. Compile with: gcc Q32_number_palindrome.c -o program
*/
#include <stdio.h>
int main(void) {
    long long n, t, rev=0; scanf("%lld", &n); t=n;
    if (n<0) { printf("Not palindrome"); return 0; }
    while (t) { rev=rev*10+t%10; t/=10; }
    printf(rev==n ? "Palindrome" : "Not palindrome");
    return 0;
}
