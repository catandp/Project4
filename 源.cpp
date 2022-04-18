/*#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//char c1, c2;
	//const char*  str = "abc";
	//float a ;
	//int a;
	//cin >> a;
	//cin >> c1;
	//cin >> c2;
	//cout << setw(10) <<setfill('0')<<setiosflags(ios::right)<< a << endl;
	//cout <<setw(10)<< setprecision(7) << setfill('0') << setiosflags(ios::left) << a << endl;
	//cout << "hex:" << hex << a << endl;//十六进制
	//cout << "oct:" << oct << a << endl;//八进制
	//cout << "dec" << dec << a << endl;//十进制
	//cout << setw(10) << setfill('0') << setiosflags(ios::right) << a<<endl;
	//bool a = false;
	//bool b = true;
	//bool greater(int x, int y) { return x > y; }


	return 0;
}*/
/*#include<iostream>//默认参数
using namespace std;
void add(int x, int y = 1, int z = 2)
{
	cout << x + y + z << endl;
}
int main()
{
	add(1);
	add(1, 2);
	add(1, 2, 3);
	return 0;
}*/
/*#include<iostream>//函数重载
using namespace std;
void add(int x, int y)
{
	cout <<"int:"<< x + y << endl;
}
void add(double x)
{
	cout << "double:" << 10 + x << endl;
}
//double add(double x, double y)
//{
	//return x + y;
//}
int main()
{
	add(11.3);
	add(2,5);
	//add(11.5, 11.5);
	return 0;
}*/
/*#include<iostream>//引用&
using namespace std;
int main()
{
	int a = 10;
	int& b = a;
	cout << "a的地址" <<hex<< &a << endl;
	cout << "b的地址" << hex<<&b << endl;
	cout << "b的值" <<oct<< b << endl;
	return 0;
}*/
/*#include<iostream>//引用作为函数参数的用法
using namespace std;
void exchange(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}
int main()
{
	int a, b;
	cout << "请输入：" << endl;
	cin >> a >> b;
	exchange(a, b);
	cout << "a的值：" << a << "b的值：" << b << endl;
	return 0;
}*/
/*#include<iostream>//字符串
using namespace std;
int main()
{
	string s1 = "我在学习";
	string s2 = "C++";
	string s = "hello c++";
	//s2[7] = 'p';
	//s2[8] = 'p';//将C++中的++变为pp
	cout << s1 + s2 << endl;//两个字符串相连
	if (s1 > s2)//比较两个字符串的大小
		cout << "字符串s1大于字符串s2" << endl;
	else if (s1 < s2)
		cout << "字符串s1小于字符串s2" << endl;
	else
		cout << "字符串s1与字符串s2相等" << endl;
	cout << "s的长度：" << s.length() << endl;
	swap(s1, s2);//字符串的交换其他方法：s1.swap(s2);
	cout << s1 + s2 << endl;
	return 0;
}*/
/*#include<iostream>//new和delete的用法
using namespace std;
int main()
{
	int* p = new int(10);//创建一个新的int对象，初始值为10
	cout << "*p=:" << *p << endl;
	*p = 20;//利用指针改变p的值
	cout << "*p=:" << *p << endl;
	char* pc = new char[10];//创建一个大小为10的char数组
	for (int i = 1; i < 10; i++)
		pc[i] = i + 65;
	for (int i = 0; i < 10; i++)
		cout << pc[i] << " " << endl;
	delete p;//释放int对象
	delete[]pc;//释放char数组
	return 0;

}*/
/*#include<iostream>//强制类型转换static_cast;
using namespace std;
int main()
{
	int a = 1;
	float b = 3.14;
	a = static_cast<int>(b);
	b = static_cast<float>(a);
	cout << "a:" << a << "b:" << b << endl;
	int* p = NULL;
	void* q = NULL;
	//p = static_cast<int*>(q);
	//cout << "p:" << p << endl;
	q = static_cast<void*>(p);
	cout << "q:" << q << endl;
	return 0;
}*/
/*#include<iostream>//对象的创建与使用
using namespace std;
class student//定义了类
{
public:
	void study();
	void exam();
	string _name;
	int _age;
};
void student::study()
{
	cout << "学习c++" << endl;
}
void student::exam()
{
	cout << "c++成绩100分" << endl;
}
int main()
{
	student stu;
	stu._name = "张三";
	stu._age = -20;
	cout << stu._name << stu._age << "岁" << endl;
	stu.study();
	stu.exam();
	return 0;
}*/
/*#include<iostream>//封装
using namespace std;
class student
{
public:
	void study();
	void exam();
	void setname(string name);
	void setage(int age);
	string getname();
	int getage();
private:
	string _name;
	int _age;
};
void student::study()
{
	cout << "学习C++" << endl;
}
void  student::exam()
{
	cout << "C++成绩100分" << endl;
}
void student::setname(string name)
{
	_name = name;
}
void student::setage(int age)
{
	if (age < 0 || age>100)
	{
		cout << "年龄输入错误" << endl;
		_age = 0;
	}
	else
		_age = age;
}
string student::getname()
{
	return _name;
}
int student::getage()
{
	return _age;
}
int main()
{
	student stu;
	stu.setname("张三");
	stu.setage( -20);
	cout << stu.getname() << stu.getage() << endl;
	stu.study();
	stu.exam();
	student stu1;
	stu1.setname("李四");
	stu1.setage(22);
	cout << stu1.getname() << stu1.getage() << endl;
	stu1.study();
	stu1.exam();
	return 0;
}*/
/*#include<iostream>
#include<iomanip>
using namespace std;
class Clock
{
public:
	//Clock();//构造无参函数
	Clock(int hour, int min, int sec);/构造有参函数
	 void showtime();
private:
	int _hour;
	int _min;
	int _sec;
};
//Clock::Clock()
//{
	//_hour = 0;
	//_min = 0;
	//_sec = 0;
//}
Clock::Clock(int hour,int min,int sec)
{
	 _hour=hour;
	 _min=min;
	 _sec=sec;
}
void Clock::showtime()
{
	cout << setw(2) << setfill('0') << _hour << ":" << setw(2) << setfill('0') << _min << ":" << setw(2) << setfill('0') << _sec << ":" << endl;
}
int main()
{
	//Clock clock;
	cout << "CLOCK:";
	Clock clock(10, 20, 30);
	clock.showtime();
	return 0;
}*/
/*#include<iostream>//含有成员对象类的构造函数
using namespace std;
class Birth
{
public:
	Birth(int year, int mouth, int day);
	void show();
private:
	int _year;
	int _mouth;
	int _day;
};
Birth::Birth(int year, int mouth, int day)
{
	_year = year;
	_mouth = mouth;
	_day = day;
}
void Birth::show()
{
	cout << "出生日期：" << _year << _mouth << _day << endl;
}
class Student
{
public:
	Student(string name, int id, int year, int mouth, int day);
	void show();
private:
	string _name;
	int _id;
	Birth birth;
};
Student::Student(string name, int id, int year, int mouth, int day):birth(year,mouth,day)
{
	cout << "student 构造函数：" << endl;
	_name = name;
	_id = id;
}
void Student::show()
{
	cout << _name << _id << endl;
	birth.show();
}
int main()
{
	Student stu("张三", 11111, 20, 12, 11);
	stu.show();
	return 0;
}*/
/*#define _CRT_SECURE_NO_WARNINGS//为了使用strcpy函数来复制
#include<iostream>
using namespace std;
class Rabbit
{
public:
	Rabbit(string name, const char* pf);
	void eat();
	~Rabbit();//析构函数
private:
	string _name;
	char* _food;
};
Rabbit::Rabbit(string name, const char* pf)
{
	cout << "调用构造函数" << endl;
	_name = name;
	_food = new char[50];
	memset(_food, 0, 50);
	strcpy(_food, pf);
}
void Rabbit::eat()
{
	cout << _name << "is eating" << _food << endl;
}
Rabbit::~Rabbit()
{
	cout << "调用析构函数析构" << _name << endl;
	if (_food != NULL)
		delete[]_food;
}
int main()
{
	Rabbit A("zhangmiao", "luobo");
	A.eat();
	Rabbit B("zhangqikui", "rou");
	B.eat();
	return 0;
}*/
/*#include<iostream>//拷贝构造函数
using namespace std;
class Sheep
{
public:
	Sheep(string name, string color);//声明有参构造函数
	Sheep(const Sheep& another);//声明拷贝构造函数
	void show();
	~Sheep();
private:
	string _name;
	string _color;
};
Sheep::Sheep(string name, string color)
{
	cout << "构造函数" << endl;
	_name = name;
	_color = color;
}
Sheep::Sheep(const Sheep& another)
{
	cout << "调用拷贝函数" << endl;
	_name = another._name;
	_color = another._color;
}
void Sheep::show()
{
	cout << _name << ' ' << _color << endl;
}
Sheep::~Sheep()
{
	cout << "调用析构函数" << endl;
}
int main()
{
	Sheep A("zhangmiao", "blue");
	cout << "A:";
	A.show();
	Sheep B(A);
	cout << "B:";
	B.show();
	return 0;
}*/
/*#include<iostream>//关键字修饰类成员const
using namespace std;
class Person
{
public:
	Person(string name, int age, string addr);
	const string _addr;
	~Person();
private:
	const string _name;
	const int _age;
};
Person::Person(string name, int age, string addr) :_name(name), _age(age), _addr(addr)
{
	cout << "初始化const修饰成员变量" << endl;
	cout << "name:" << _name << endl;
	cout << "age:" << _age << endl;
	cout << "addr:" << _addr << endl;
}
Person::~Person()
{}
int main()
{
	Person p("ZHANGSAN", 18, "beidajie");
	return 0;
}*/
/*#include<iostream>
using namespace std;
class Person
{
public:
	Person(string name, int age, string addr, string favfourit);
	const string _addr;
	void myinfor()const;//关键字修饰函数
	void myinfor();
	void place();
	~Person();
private:
	const string _name;
	const int _age;
	const string _favfourit;
};
Person::Person(string name, int age, string addr, string favfourit) :_name(name), _age(age), _addr(addr), _favfourit(favfourit)
{

}
void Person::myinfor()const
{
	cout << "我叫" << _name << "今年" << _age << "岁" << "家住" << _addr << "喜欢吃" << _favfourit << endl;
}
Person::~Person(){}
void Person::place()
{
	cout << "我住在：" << _addr << endl;
}
int main()
{
	const Person p1("张三",16, "xian", "juzi");
	p1.myinfor();
	return 0;
}*/
/*#include<iostream>//static修饰静态成员变量在类内定义在类外初始化//可以通过类调用或者通过成员调用
using namespace std;
class Student
{
public:
	Student(string name);
	static int _sum;
	~Student();
private:
	string _name;
};
Student::Student(string name)
{
	this-> _name = name;
	_sum++;
}
Student::~Student(){}
int Student::_sum = 0;//在类外对static修饰的静态成员变量进行初始化
int main()
{
	Student s1("张三");
	Student s2("里斯");
	cout << "人数是：" << s1._sum << endl;//通过对象访问静态成员变量
	cout << "人数是：" << s2._sum << endl;
	cout << "人数是：" << Student::_sum << endl;//通过类访问静态成员变量
	cout << "大小是：" << sizeof(s1) << endl;
	return 0;
}*/
/*#include<iostream>
#include<math.h>
using namespace std;
class Point
{
public:
	Point(float x, float y);
	~Point();
	static float getlen(Point& p1, Point& p2);
	static float _len;
private:
	float _x;
	float _y;
};
float Point::_len = 0;
Point::Point(float x, float y):_x(x),_y(y)
{
	cout << "初始化坐标点" << endl;
}
Point::~Point(){}
float Point::getlen(Point& p1, Point& p2)
{
	float x = abs(p1._x - p2._x);
	float y = abs(p1._y - p2._y);
	_len = sqrtf(x * x + y * y);
	return _len;
}
int main()
{
	Point p1(1, 2);
	Point p2(6, 8);
	cout << Point::getlen(p1, p2) << endl;
	return 0;
}*/
/*#include<iostream>
using namespace std;
class Circle
{
	friend void getarea(Circle& circle);
public:
	Circle(float r);
	~Circle();
private:
	float _r;
	const float pi = 3.14;
};
Circle::Circle(float r = 0) :_r(r)
{
	cout << "初始化半径为：" <<_r<< endl;
}
Circle::~Circle(){}
void getarea(Circle& circle)
{
	cout << "元的半径是：" << circle._r << endl;
	cout << "圆的面积是" << circle.pi * circle._r * circle._r << endl;
	cout << "修改圆的半径为：" << endl;
	circle._r = 1;
	cout << circle._r << endl;
}
int main()
{
	Circle circle(10);
	getarea(circle);
	return 0;
}*/