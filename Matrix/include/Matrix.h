#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>
using namespace std;

class Matrix
{
    public:
        Matrix(int size);
        virtual ~Matrix();

        void fill();//ģ�巽��
        friend ostream& operator<<(ostream& out, const Matrix& m);

    protected:
        virtual int findPosition() = 0;//���ö�̬ʵ�־�����㷨�߼�

        int _size;
        int *_data;
        int row;
        int col;
        char dir;


};

#endif // MATRIX_H
