#include <iostream>
class Point
{
private:
	int x, y;
public:
	Point(int a, int b):x(a),y(b) {	/*x = a; y = b;*/}
	double Dist(Point p)
	{
		int dx = p.x - x;
		int dy = p.y - y;
		double d = sqrt(dx * dx + dy * dy);
		return d;
	}
	Point operator+(Point p)  // return(p1 + p2)
	{
		int nx = x + p.x;
		int ny = y + p.y;
		Point np(nx, ny);
		return np;
	}
	Point operator++(int)  // return p1++  ,  후행연산
	{
		Point rp(x, y);
		x++; y++;
		return rp;
	}
	Point operator++()  // return ++p1  ,  선행연산
	{
		x++; y++;
		return *this;
	}
	Point Add(Point p)
	{
		int nx = x + p.x;
		int ny = y + p.y;
		Point np(nx, ny);
		return np;
	}
	void Info()
	{   // (x,y) 형태로 출력
		std::cout << "(" << x << "," << y << ")";  
	}
};

// 면적계산 (x1,y1), (x2,y2)
//int area(int x1, int x2, int y1, int y2)
//{
//	return (x2 - x1) * (y2 - y1);
//}
template <typename T>  // datatype에 독립적인 함수 정의
T area(T x1, T y1, T x2, T y2)
{
	return (x2 - x1) * (y2 - y1);
}
int main()
{
	Point p1(10, 10), p2(30, 30);

	std::cout << "P1";	  p1.Info();
	std::cout << "과 P2"; p2.Info();
	std::cout << "의 거리는 " << p1.Dist(p2) << " 입니다\n";
	std::cout << "P1 + P2는 P"; 	(p1 + p2).Info(); std::cout << "\n";
	std::cout << "P1++ 연산의 결과는 P"; 	(p1++).Info(); std::cout << "\n";
	std::cout << "++P1 연산의 결과는 P"; 	(++p1).Info(); std::cout << "\n";
	//	p1.Add(p2).Info();
	std::cout << "면적계산(정수 10,10,30,30) " << area(10,10,30,30)<< "\n";
	std::cout << "면적계산(실수 10.0,10.0,30.0,30.0) " << area(10.0, 10.0, 30.0, 30.0)<< "\n";
}
