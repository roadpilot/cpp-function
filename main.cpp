//Write a function int max_of_four(int a, int b, int c, int d) which returns the maximum of the four arguments it receives.

#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int least_of_four(int a, int b, int c, int d) {
    int least = a;
    // if (a>least){least = a;}
    if (b<least){least = b;}
    if (c<least){least = c;}
    if (d<least){least = d;}
    return least;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = least_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}