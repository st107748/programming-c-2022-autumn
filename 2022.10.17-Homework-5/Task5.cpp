#include<iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    int x = 0;
    int ras = 0;
    int k = -1000;
    int t = 1000;
    int res = 0;
    
    std::cin >> n;
    
    int a[n] {0};
    
    for (int i = 0; i < n; ++i)
    {
        std::cin >> a[i];
    }
    
    std::cin >> x;
    
    for (int i = 0; i < n; ++i)
    {
        ras = a[i] - x;
        if (ras == 0)
        {
            res = a[i];
            break;
        }
        if (ras < 0)
        { 
            if (ras > k)
            {
                k = ras;
                res = a[i];
            }
        }
        
        if (ras > 0)
        {
            if (ras < t)
            {
                t = ras;
                res = a[i];
            }
        }
    }
    std::cout << res;
    
    return EXIT_SUCCESS;
}
    
    
        
