#ifndef PIXEL_H
#define PIXEL_H

public class Pixel
{
    private:
        int startPos;
        int endPos;
        int depth;
        int redValue;
        int greenValue;
        int blueValue;
        int accel;
        int velosity;
    protected:

    public:
        void Initialize();
        void Move(int depth);
        void Move(int depth, int velosity);
        void ChangeColor(int red, int green, int blue);
};

#endif