#ifndef LOOPMATRIX_H
#define LOOPMATRIX_H
#include "Matrix.h"

class LoopMatrix : public Matrix
{
    public:
        LoopMatrix(int size);
        virtual ~LoopMatrix();

    protected:
        virtual int findPosition();

    private:
};

#endif // LOOPMATRIX_H
