#include <bits/stdc++.h>
using namespace std;

class Point {
public:
    int x, y, z;
	Point(int x=0, int y=0, int z=0) : x(x), y(y), z(z) {}
    friend ostream& operator<<(ostream &output, Point &p) { 
        output << "Point(" << p.x << ", " << p.y << ", " << p.z << ")";
        return output;
    }
    friend istream& operator>>(istream  &input, Point &p) { 
        input >> p.x >> p.y >> p.z;
        return input;            
    }
};
int main() {
    Point x;
	Point y(2, 3, 1);
	cout << x << ' ' << y << '\n';
    cin >> x >> y;
	cout << x << ' ' << y << '\n';
}

/*
Point(0, 0, 0) Point(2, 3, 1)
1 6 4
7 2 3 
Point(1, 6, 4) Point(7, 2, 3)
*/

class Point {
public:
    int x, y, z;
	Point(int x=0, int y=0, int z=0) : x(x), y(y), z(z) {}
    friend ostream& operator<<(ostream &output, Point &p) { 
        output << "Point(" << p.x << ", " << p.y << ", " << p.z << ")";
        return output;
    }
    void operator++() {
        ++this->x, ++this->y, ++this->z;
    }
    void operator++(int) {
        this->x++, this->y++, this->z++;
    }
    Point operator+(Point obj) {
        Point p(this->x+obj.x, this->y+obj.y, this->z+obj.z);
        return p;
    }
    Point operator-(Point obj) {
        Point p(this->x-obj.x, this->y-obj.y, this->z-obj.z);
        return p;
    }
    Point operator*(int scalar) {
        Point p(this->x*scalar, this->y*scalar, this->z*scalar);
        return p;
    }
    Point operator/(int scalar) {
        Point p(this->x/scalar, this->y/scalar, this->z/scalar);
        return p;
    }
    Point operator%(int scalar) {
        Point p(this->x%scalar, this->y%scalar, this->z%scalar);
        return p;
    }
};
int main() {
	Point x;
	Point y(2, 3, 1);
	cout << x << ' ' << y << '\n';
	x = x + y;
	cout << x << ' ' << y << '\n';
	y = y + x;
	cout << x << ' ' << y << '\n';
	x = x * 4;
	y = y * 4;
	cout << x << ' ' << y << '\n';
	x = x / 2;
	y = y / 2;
	cout << x << ' ' << y << '\n';
	x = x % 5;
	y = y % 5;
	cout << x << ' ' << y << '\n';
	x++;
	y++;
	cout << x << ' ' << y << '\n';
	++x;
	++y;
	cout << x << ' ' << y << '\n';
}

/*
Point(0, 0, 0)  Point(2, 3, 1)
Point(2, 3, 1)  Point(2, 3, 1)
Point(2, 3, 1)  Point(4, 6, 2)
Point(8, 12, 4) Point(16, 24, 8)
Point(4, 6, 2)  Point(8, 12, 4)
Point(4, 1, 2)  Point(3, 2, 4)
Point(5, 2, 3)  Point(4, 3, 5)
Point(6, 3, 4)  Point(5, 4, 6)
*/

class Point {
public:
    int x, y, z;
	Point(int x=0, int y=0, int z=0) : x(x), y(y), z(z) {}
    friend ostream& operator<<(ostream &output, Point &p) { 
        output << "Point(" << p.x << ", " << p.y << ", " << p.z << ")";
        return output;
    }
    bool operator<(Point obj) {
        return (this->x < obj.x) ||
               (this->x == obj.x && this->y < obj.y) ||
               (this->x == obj.x && this->y == obj.y && this->z < obj.z);
    }
    bool operator<=(Point obj) {
        return (this->x <= obj.x) ||
               (this->x == obj.x && this->y <= obj.y) ||
               (this->x == obj.x && this->y == obj.y && this->z <= obj.z);
    }
    bool operator>(Point obj) {
        return (this->x > obj.x) ||
               (this->x == obj.x && this->y > obj.y) ||
               (this->x == obj.x && this->y == obj.y && this->z > obj.z);
    }
    bool operator>=(Point obj) {
        return (this->x >= obj.x) ||
               (this->x == obj.x && this->y >= obj.y) ||
               (this->x == obj.x && this->y == obj.y && this->z >= obj.z);
    }
    bool operator==(Point obj) {
        return (this->x == obj.x && this->y == obj.y && this->z == obj.z);
    }
    bool operator!=(Point obj) {
        return !(this->x == obj.x && this->y == obj.y && this->z == obj.z);
	}
};
int main() {
	Point x(4, 1, 3);
	Point y(4, 1, 3);
	cout << x << ' ' << y << '\n';
	cout << (x == y) << '\n';
	cout << (x != y) << '\n';
	cout << (x < y) << '\n';
	cout << (x <= y) << '\n';
	cout << (x > y) << '\n';
	cout << (x >= y) << '\n';
}

/*
Point(4, 1, 3) Point(4, 1, 3)
1
0
0
1
0
1
*/

class Point {
public:
    int x, y, z;
	Point(int x=0, int y=0, int z=0) : x(x), y(y), z(z) {}
    friend ostream& operator<<(ostream &output, Point &p) { 
        output << "Point(" << p.x << ", " << p.y << ", " << p.z << ")";
        return output;
    }
    Point operator<<(int bits) {
        Point p(this->x << bits, this->y << bits, this->z << bits);
        return p;
    }
    Point operator>>(int bits) {
        Point p(this->x >> bits, this->y >> bits, this->z >> bits);
        return p;
    }
    Point operator&(Point obj) {
        Point p(this->x & obj.x, this->y & obj.y, this->z & obj.z);
        return p;
    }
    Point operator|(Point obj) {
        Point p(this->x | obj.x, this->y | obj.y, this->z | obj.z);
        return p;
    }
    Point operator^(Point obj) {
        Point p(this->x ^ obj.x, this->y ^ obj.y, this->z ^ obj.z);
        return p;
    }
    Point operator~() {
        Point p(~this->x, ~this->y, ~this->z);
        return p;
    }
    Point operator+() {
        Point p(+this->x, +this->y, +this->z);
        return p;
    }
    Point operator-() {
        Point p(-this->x, -this->y, -this->z);
        return p;
    }
};
int main() {
	Point x(3, 2, 5);
	Point y(4, 1, 2);
	cout << x << ' ' << y << '\n';
	x = x << 3;
	y = y << 2;
	cout << x << ' ' << y << '\n';
	x = x >> 1;
	y = y >> 1;
	cout << x << ' ' << y << '\n';
	x = x & y;
	cout << x << ' ' << y << '\n';
	y = y | x;
	cout << x << ' ' << y << '\n';
	x = x ^ y;
	cout << x << ' ' << y << '\n';
	y = y ^ x;
	cout << x << ' ' << y << '\n';
	x = ~x;
	y = ~y;
	cout << x << ' ' << y << '\n';
	x = -x;
	y = -y;
	cout << x << ' ' << y << '\n';
	x = +x;
	y = +y;
	cout << x << ' ' << y << '\n';
}

/*
Point(3, 2, 5)    Point(4, 1, 2)
Point(24, 16, 40) Point(16, 4, 8)
Point(12, 8, 20)  Point(8, 2, 4)
Point(8, 0, 4)    Point(8, 2, 4)
Point(8, 0, 4)    Point(8, 2, 4)
Point(0, 2, 0)    Point(8, 2, 4)
Point(0, 2, 0)    Point(8, 0, 4)
Point(-1, -3, -1) Point(-9, -1, -5)
Point(1, 3, 1)    Point(9, 1, 5)
Point(1, 3, 1)    Point(9, 1, 5)
*/

class Point {
public:
    int x, y, z;
	Point(int x=0, int y=0, int z=0) : x(x), y(y), z(z) {}
    friend ostream& operator<<(ostream &output, Point &p) { 
        output << "Point(" << p.x << ", " << p.y << ", " << p.z << ")";
        return output;
    }
    void operator+=(Point obj) {
        this->x+=obj.x, this->y+=obj.y, this->z+=obj.z;
    }
    void operator-=(Point obj) {
        this->x-=obj.x, this->y-=obj.y, this->z-=obj.z;
    }
    void operator*=(int scalar) {
        this->x*=scalar, this->y*=scalar, this->z*=scalar;
    }
    void operator/=(int scalar) {
        this->x/=scalar, this->y/=scalar, this->z/=scalar;
    }
    void operator%=(int scalar) {
        this->x%=scalar, this->y%=scalar, this->z%=scalar;
    }
};
int main() {
	Point x;
	Point y(2, 3, 1);
	cout << x << ' ' << y << '\n';
	x += y;
	cout << x << ' ' << y << '\n';
	y += x;
	cout << x << ' ' << y << '\n';
	x *= 4;
	y *= 4;
	cout << x << ' ' << y << '\n';
	x /= 2;
	y /= 2;
	cout << x << ' ' << y << '\n';
	x %= 5;
	y %= 5;
	cout << x << ' ' << y << '\n';
}

/*
Point(0, 0, 0)  Point(2, 3, 1)
Point(2, 3, 1)  Point(2, 3, 1)
Point(2, 3, 1)  Point(4, 6, 2)
Point(8, 12, 4) Point(16, 24, 8)
Point(4, 6, 2)  Point(8, 12, 4)
Point(4, 1, 2)  Point(3, 2, 4)
*/

class Point {
public:
    int x, y, z;
	Point(int x=0, int y=0, int z=0) : x(x), y(y), z(z) {}
    friend ostream& operator<<(ostream &output, Point &p) { 
        output << "Point(" << p.x << ", " << p.y << ", " << p.z << ")";
        return output;
    }
    friend istream& operator>>(istream  &input, Point &p) { 
        input >> p.x >> p.y >> p.z;
        return input;            
    }
    void operator=(Point &p) {
        this->x=p.x, this->y=p.y, this->z=p.z;
    }
};
class Points {
private:
    int N;
	Point *pnts;
public:
	Points(int N) {
        this->N = N;
		this->pnts = new Point[N];
	}
    Point& operator[](int i) {
        if (i >= N || i < -N) {
            cout << "Index out of bounds\n";
            Point temp;
            return temp;
        }
        return pnts[(i+N)%N];
    }
};
int main() {
	int N = 5;
    Point x(3, 1, 4), y(2, 8, -1), z(7, 1, -2);
	Points arr(N);
	arr[0] = y;
	arr[-1] = x;
	arr[1] = y;
	arr[-2] = x;
	arr[2] = z;
	for (int i = 0; i < N+2; i++)
		cout << arr[i] << '\n';
}

/*
Point(2, 8, -1)
Point(2, 8, -1)
Point(7, 1, -2)
Point(3, 1, 4)
Point(3, 1, 4)
*/
