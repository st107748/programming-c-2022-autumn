#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

class Matrix
{
private:
    int n; // ����� ����� 
    int m; // ����� ��������

    vector <vector<double>> a;

public:

    Matrix()
    {
        n = 0;
        m = 0;
    }

    Matrix(int n, int m)
    {
        vector <vector<double>> b(n);
        for (int i = 0; i < n; ++i)
        {
            b[i].resize(m);
            for (int j = 0; j < m; ++j)
            {
                double k;
                cin >> k;
                b[i][j] = k;
            }
        }

        this->a = b;
        this->n = n;
        this->m = m;
    }

    void GetMatrix()
    {
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cout << this->a[i][j] << " ";
            }
            cout << endl;
        }
    }


    vector<double> operator* (const vector<double>& v1)
    {
        if (this->m != v1.size())
        {
            cout << "error";
            return v1;
        }

        else
        {
            vector<double> v2(this->n);
            for (int i = 0; i < this->n; ++i)
            {
                for (int j = 0; j < this->m; ++j)
                {
                    v2[i] += this->a[i][j] * v1[j];
                }
            }
            return v2;
        }

    }

    Matrix operator| (const Matrix& b)
    {
        Matrix c;
        int h;
        int k;
        h = max(this->n, b.n);
            
        k = this->m + b.m;
        c.n = h;
        c.m = k;
        c.a.resize(h);
        for (int i = 0; i < h; ++i)
        {
            c.a[i].resize(k);
        }

        for (int i = 0; i < h; ++i)
        {
            for (int j = 0; j < k; ++j)
            {
                if (i < this->n && j < this->m)     
                {
                    c.a[i][j] = this->a[i][j];
                }
                if (i >= this->n && j < this->m)
                {
                    c.a[i][j] = 0;
                }
                if (i < b.n && j >= this->m)
                {
                    c.a[i][j] = b.a[i][j - this->m];
                }
                if (i > b.n && j >= this->m)
                {
                    c.a[i][j] = 0;
                }
            }
        }
        return c;


    }

    double MatrixNorm() const
    {
        
        double max = -1;

        for (int i = 0; i < n; ++i)
        {
            double ti = 0;
            for (int j = 0; j < m; ++j)
            {
                
                ti += abs(this->a[i][j]);
                
                
            }
            if (max < ti)
            {
                max = ti;
            }
        }
        return max;
        
    }

};

int main()
{
    int m, n;
    cin >> n >> m;
    Matrix a(n, m);
    cout << a.MatrixNorm() << endl;
    return EXIT_SUCCESS;
}
