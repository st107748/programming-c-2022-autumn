#include<iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    
    std::cin >> n;
    
    for (int a = 0, i = 1; a < n; i += 1)
    {    
        for (int g = 0; g < i; g += 1, a += 1)
        {  
            if (a == n)
            {
               break;
            }
            std::cout << i;  
        }
        
    }
    
    return EXIT_SUCCESS;
}
