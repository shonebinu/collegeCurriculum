#include <iostream>
#define MAX_ROWS 10
#define MAX_COLS 10

using namespace std;

class Matrix {
    int m_rows, m_cols;
    int m_data[MAX_ROWS][MAX_COLS];
    public:
        friend Matrix operator+(Matrix, Matrix);
        void input();
        void output();
};

void Matrix::input() {
    cout<<"Enter the number of rows and columns: ";
    cin>>m_rows>>m_cols;
    for (int i = 0; i < m_rows; i++)
        for(int j = 0; j < m_cols; j++) {
            cout << "array[" << i << "][" << j << "]: ";
            cin >> m_data[i][j];
        }
    cout<<endl;
}

void Matrix::output() {
    cout<<"Matrix: "<<endl;
    for (int i = 0; i < m_rows; i++) {
        for (int j = 0; j < m_cols; j++) {
            cout<<m_data[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

Matrix operator+(Matrix a, Matrix b) {
    if (a.m_rows != b.m_rows || a.m_cols != b.m_cols) {
        cout<<"Error: Matrix dimensions do not match."<<endl;
        return Matrix();
    }
    Matrix result;
    for (int i = 0; i < a.m_rows; i++) {
        for (int j = 0; j < a.m_cols; j++) {
            result.m_data[i][j] = a.m_data[i][j] + b.m_data[i][j];
        }
    }
    result.m_rows = a.m_rows, result.m_cols = a.m_cols;
    return result;
}

int main() {
    Matrix a, b, c;
    a.input();
    b.input();
    c = a+b;
    a.output();
    b.output();
    c.output();
    return 0;
}