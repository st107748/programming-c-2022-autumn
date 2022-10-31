#include<iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    int max = 1;
    int min = 5;
    
    
    std::cin >> n;
    
    int a[n] {0};
    
    for (int i = 0; i < n; ++i)
    {
        std::cin >> a[i];
    }
    
    for (int i = 0; i < n; ++i)
    {
        if (a[i] >= max)
        {
            max = a[i];
        }
    }
    
    for (int i = 0; i < n; ++i)
    {
        if (a[i] <= min)
        {
            min = a[i];
        }
    }
    
    for (int i = 0; i < n; ++i)
    {
        if (a[i] == max)
        {
            std::cout << min << " ";
        }
        else
        {
            std::cout << a[i] << " ";
        }
    }
    
   
    return EXIT_SUCCESS;
}

