#include <iostream>
using namespace std;
class Line
{
public:
    void setlength(double len);
    double getlength(void);
    Line();
    ~Line();

private:
    double length;
};
Line::Line(void)
{
    cout << "Object is created" << endl;
}
Line::~Line(void)
{
    cout << "Object is deleted" << endl;
}
void Line ::setlength(double len)
{
    length = len;
}
double Line::getlength(void)
{
    return length;
}

int main()
{
    Line line;
    line.setlength(6.0);
    cout << "Length of line: " << line.getlength() << endl;

    return 0;
}