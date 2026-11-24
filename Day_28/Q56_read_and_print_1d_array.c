/* Q56: Read and print 1D array
   Standalone C solution. Compile with: gcc Q56_read_and_print_1d_array.c -o program
*/
#include <stdio.h>
int main(void) {
    int n,a[1000]; scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++) printf("%d%s",a[i],i==n-1?"":" ");
    return 0;
}
