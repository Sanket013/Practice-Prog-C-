#include <iostream>
using namespace std;
class Line
{
public:
    void setLength(double len);
    double getLength(void);
    Line(double len);

private:
    double length;
};

void Line::setLength(double len)
{
    length = len;
}
double Line::getLength(void)
{
    return length;
}
Line::Line(double len)
{
    cout << "object has been created " << len << endl;
    length = len;
}
int main()
{
    Line line(10.0);
    cout << "Lenght of line " << line.getLength() << endl;
    line.setLength(6.0);
    cout << "Lenght of line " << line.getLength() << endl;
    return 0;
}