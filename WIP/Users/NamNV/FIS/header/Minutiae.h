#ifndef MINUTIAE_H
#define MINUTIAE_H

#define PI 3.1415926535897931

const int IMAGE_HEIGHT = 288;
const int IMAGE_WIDTH = 256;

const int IMAGE_ROWS = 288;
const int IMAGE_COLUMNS = 256;
#include <iostream>
#include <cstring>

class Minutiae
{
    public:
        enum Type {BIFURCATION, RIDGEENDING};
        Minutiae(int locX, int locY, Type type);
        Minutiae();
        Minutiae(int locX, int locY, Type type,double _direct);
        Minutiae(int locX, int locY, double _direct);
        Minutiae GetMinutiaeAfterChange(int deltaX,int deltaY,double angleRotation, int xRoot,int yRoot);
        virtual ~Minutiae();
        int getLocX();
        int getLocY();
        void setLocX(int _locX);
        void setLocY(int _locY);
        double getDirect();
        Type getType();
        void setMarkTrue();
		void setDirect(double _direct);
        bool getMark();
        void setFingerPrintId(int id);
        int getFingerPrintId();
    protected:
    private:
        int locX;
        int locY;
        Type type;
        bool markedForErasing;
        double  direct;
};

#endif // MINUTIAE_H
