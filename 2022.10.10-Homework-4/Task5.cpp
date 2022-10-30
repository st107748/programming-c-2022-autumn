#include<iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    double k = 1;
    double b = 1;
    
    std::cin >> n;
     
    for (int i = 1; i <= n; i += 1)
    {
        k *= i;
        b += 1 / k;
    }
    
    printf ("%.5f", b);
    
    return EXIT_SUCCESS;
}
