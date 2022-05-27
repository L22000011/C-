/*析构函数只能由一个，不能重载
（构造函数和其他成员函数可以重载）

1.一般默认的析构函数可以自动清除
2.如果在类的对象由动态分配内存（new），自己手动设计合适的释放
3.析构函数是在对象消亡时，自动被调用，用来释放对象占用的空间。
*/

//eg
#include <string.h>
#include <iostream.h>
class Teacher
{
private:
char *name;
int age;
public:
Teacher(char *newName, int newAge) {
//用new为name成员分配堆内存
name = new char[strlen(newName)+1];
//name = new char[strlen(newName) + 1];
strcpy(name, newName);
age = newAge;
cout<<"执行构造函数Teacher()"<<endl;
};
~Teacher()
{
delete name ;
cout<<"执行析构函数~Teacher()"<<endl;
};
void show();
};
void Teacher::show()
{
cout<<"姓名："<<name<<endl<<"年龄："<<age<<endl; }
void main()
{
Teacher teacher("张立三", 25);
teacher.show();
cout<<endl; }
