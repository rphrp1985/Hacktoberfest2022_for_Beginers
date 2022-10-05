

#include <bits/stdc++.h>
using namespace std;

bool isPowerOf2(int n) {
    return (n && !(n & (n - 1)));
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    isPowerOf2(n) ?  printf("It's a power of 2.") : printf("It's not a power of 2."); 
    
    return 0;
}
