#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>
using namespace std;

class Matrix
{
    public:
        Matrix(int size);
        virtual ~Matrix();

        void fill();//模板方法
        friend ostream& operator<<(ostream& out, const Matrix& m);

    protected:
        virtual int findPosition() = 0;//利用多态实现具体的算法逻辑

        int _size;
        int *_data;
        int row;
        int col;
        char dir;


};

#endif // MATRIX_H
