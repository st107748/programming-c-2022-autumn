#include<iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    int sum = 0;
    int k = 0;
    
    std::cin >> n;
    
    int a[n] {0};
    
    for (int i = 0; i < n; ++i)
    {
        std::cin >> a[i];
    }
    
    a[0] = a[n];
    a[n + 1] = a[1];
    
    for (int i = 1; i <= n; ++i)
    {
        sum = a[i] + a[i - 1] + a[i + 1];
        
        if (sum >= k)
        {
            k = sum;
        }
    }
    
    std::cout << k;
   
    return EXIT_SUCCESS;
}

