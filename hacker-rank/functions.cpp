#include <iostream> 
#include <cstdio>

int max_of_four(int a, int b, int c, int d)
{ 
    int args[] = {a, b, c, d};
    int s = args[0];
    for (int i = 0; i < 4; i++) 
        if (s < args[i])
            s = args[i];
    return s;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
