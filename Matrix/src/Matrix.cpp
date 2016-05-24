#include "Matrix.h"

Matrix::Matrix(int size):_size(size), row(-1), col(0),dir('D')
{
    _data = new int[_size * _size];
    for(int i = 0; i < _size * _size; i++)
    {
        _data[i] = 0;
    }
}

Matrix::~Matrix()
{
    delete []_data;
}



ostream& operator<<(ostream& out, const Matrix& m)
{
    for(int i = 0; i < m._size; i++)
    {
        for(int j = 0; j < m._size; j++)
        {
            out << *(m._data + i * m._size + j) << '\t';
        }
        out << endl;
    }
    return out;
}

void Matrix::fill()
{
    for(int i = 1; i <= _size * _size; i++)
    {
        int pos = this->findPosition();
        _data[pos] = i;
    }
}
