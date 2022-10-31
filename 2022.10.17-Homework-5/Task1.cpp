#include<iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    int x = 0;
    int k = 0;
    
    std::cin >> n;
    
    int a[n] {0};
    
    for (int i = 0; i < n; ++i)
    {
        std::cin >> a[i];
    }
    
    std::cin >> x;
    
    for (int i = 0; i < n; ++i)
    {
        if (a[i] == x)
        {
          ++k;  
        }
    }
    
    std::cout << k;
    
    return EXIT_SUCCESS;
}
