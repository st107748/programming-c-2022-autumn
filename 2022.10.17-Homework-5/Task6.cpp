#include<iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    float k = 0;
    int max = 0;
    int res = 0;
    std::cin >> n;
    
    int a[n] {0};
    float b[n] {0};
    
    for (int i = 0; i < n; ++i)
    {
        std::cin >> a[i];
    }
    
    for (int i = 0; i < n; ++i)
    {
        std::cin >> b[i];
    }
    
    for (int i = 0; i < n; ++i)
    {
        k = a[i] * b[i] / 100;
        if (k >= max)
        {
            max = k;
            res = i + 1;
        }
        
    }
    std::cout << res;
    
    return EXIT_SUCCESS;
}
    
    
        
