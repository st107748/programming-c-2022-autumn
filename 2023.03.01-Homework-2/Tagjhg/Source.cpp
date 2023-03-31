#include<iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    int l = 0;
    int r = 0;
    int k = -1000;
    int h = 0;

    std::cin >> n;

    int a[100]{ 0 };

    for (int i = 0; i < n; ++i)
    {
        std::cin >> a[i];
    }

    std::cin >> l >> r;

    for (int i = l - 1; i <= r - 1; ++i)
    {
        if (a[i] >= k)
        {
            k = a[i];
            h = i + 1;

        }
    }

    std::cout << k << " " << h;
    return EXIT_SUCCESS;
}