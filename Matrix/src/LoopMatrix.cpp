#include "LoopMatrix.h"

LoopMatrix::LoopMatrix(int size) : Matrix(size)
{
    //ctor
}

LoopMatrix::~LoopMatrix()
{
    //dtor
}

int LoopMatrix::findPosition()
{
    switch(dir)
    {
    case 'D':
    {
        if(row < _size && _data[(row + 1) * _size + col] == 0)
            row++;
        else
        {
            dir = 'R';
            col++;
        }

        break;
    }

    case 'R':
    {
        if(col < _size &&  _data[row * _size + col + 1] == 0)
            col++;
        else
        {
            dir = 'U';
            row--;
        }

        break;
    }

    case 'U':
    {
        if(row > 0 && _data[(row-1) * _size + col] == 0)
            row--;
        else
        {
            dir = 'L';
            col--;
        }

        break;
    }

    case 'L':
    {
        if(col > 0 && _data[row * _size + col -1] == 0)
            col--;
        else
        {
            dir = 'D';
            row++;
        }

        break;
    }
    }

    return _size * row + col;
}
