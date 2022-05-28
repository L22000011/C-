/*模板：
程序设计中遇到若干个程序结构有同
一种模式时就可以使用模板。
1.函数模板是一类函数的抽象，代表了一类函数
2.这些函数具有相同的功能。
 • 模板函数是一个具体的函数，可以被调用。
 
 3.类模板可以为用户定义一种模式，使得类中某些数据成员，成员函数的参数和返回值取到多种数据类型
*/

template<类型形式参数表>
函数返回值类型 函数模板名(形式参数表)
{ 函数体 }

template<class T>
T max(T a, T b)
{ return (a>=b)?a:b; }


交换的模板
template<class T>
 void swap(T &a, T &b)
{
  T temp = a;
 a = b;
 b = temp;
}


类模板
template<class T, int N> 
void AClass<T, N>::Show()
{
for (int i=0; i<N; i++)
cout<<"values["<<i+1<<"]="<<values[i]<<endl; }



/*STL
容器（container）
迭代器（iterator）
算法（algorithm）
*/
