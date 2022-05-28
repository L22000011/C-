/*
堆对象：
1.用new和delete可以动态地分配或释放堆内存

new存储在内存的堆区

****************
[new创建的对象数组  不一定要 初始化]

【new创建对象时  会调用 构造函数】
****************

2.用new建立对象（会自动调用构造函数），
利用delete可删除对象（会自动调用析构函数）
3.堆对象一旦创建就一直存在，直到程序运行结束时，堆对象
才可能被自动销毁，或者用delete来释放堆对象。
*/

//eg
class TDate
{
public:
TDate(int m, int d, int y);
void show();
private:
int month, day, year;
};

TDate::TDate(int m, int d, int y)
{
month=m; day=d; year=y;
}
void TDate::show()
{
cout<<month<<“/”
<<day<<“/”
<<year<<endl; }

void main()
{
TDate *pd;
pd = new TDate(1,1,1998);  //new创建对象
pd->show();
delete pd;
}

/*对象数组（数组中的每个元素都是该类的一个对象，则这种数组就是对象数组）
    数组的类型：1.基本数据类型 2.类类型
    定义方式： 类名 数组名[数组大小];    TDate dateArray[30];
*/

//eg
#include <iostream>
using namespace std;
class Test
{
private:
    int num;
    float fl;
public:
    Test();
    int getint() { return num; }
    float getfloat() { return fl; }
    ~Test();
};
Test::Test()
{
    cout << "Initalizing default" << endl;
    num = 0; fl = 1.0;
}
Test::~Test()
{
    cout << "Desdtructor is active" << endl;
}
void main()
{
    Test array[3];  //定义对象数组
    cout << array[1].getint() << " " << array[1].getfloat() << endl;
}



/*类域：1.大于函数域，小于文件域
    2.类域中定义的变量：不能用auto， register，extern
    3.类域中定义的函数：不能用extern修饰
    4.类域中定义的 静态数据成员 和 静态成员函数 具有外部的  “链接属性”


    1.类成员函数的原型在类的定义体中声明，具有类作用域，
    但其实现部分在类的定义体外。
    由于不同类的成员函数可以具有相同的因此，
    需要用作用域运算符“ :: ”来指明该成员函数所属的类
    2.要从类外访问类的成员时，则必须通过对象名或指向对象的指针。
    当通过对象名时，应使用成员运
    算符“ . ”；当通过指针时，应使用箭头运算符“ -> ”
*/

class Myclass{
private:
    int x, y;
public:
    Myclass(int a, int b)
    { x = 1; y = b;}
    void print();
    void myfunc();
}

void Myclass::print()
{
    cout << "x= " << x << "," << "y = "<< y << endl;
}
void Myclass::myfunc()
{
    int x = 9, y =10;
    cout << "In mufunc : x" << x << "," << "y=" << y << endl;
    //输出局部变量

    //输出类的数据成员
    cout << "In mufunc : x" <<Myclass:: x << endl;
            "In mufunc : y" <<Myclass:: y << endl;
}
