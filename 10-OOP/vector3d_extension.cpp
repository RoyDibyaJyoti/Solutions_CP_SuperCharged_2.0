#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

#define M_PI 3.14159265358979323846

class Vector3D {
    private:
        float x, y, z;
    public:
        Vector3D() {
            x = 0;
            y = 0;
            z = 0;
        }

        void setVector3D(float x, float y, float z) {
            this->x = x;
            this->y = y;
            this->z = z;
        }

        Vector3D(float x, float y, float z) {
            this->x = x;
            this->y = y;
            this->z = z;
        }

        void print() {
            cout << x << " " << y << " " << z << endl;
        }

        Vector3D add(Vector3D v) {
            return Vector3D(x + v.x, y + v.y, z + v.z);
        }

        Vector3D sub(Vector3D v) {
            return Vector3D(x - v.x, y - v.y, z - v.z);
        }

        Vector3D mul(float scalar) {
            return Vector3D(x * scalar, y * scalar, z * scalar);
        }

        float dot(Vector3D v) {
            return x * v.x + y * v.y + z * v.z;
        }

        Vector3D cross(Vector3D v) {
            return Vector3D(y * v.z - z * v.y, z * v.x - x * v.z, x * v.y - y * v.x);
        }

        float magnitude() {
            return sqrt(x * x + y * y + z * z);
        }

        float angle(Vector3D v) {
            return (acos(dot(v) / (magnitude() * v.magnitude())) * 180) / M_PI;
        }

        Vector3D operator+(const Vector3D &v) {
            return add(v);
        }

        Vector3D operator-(const Vector3D &v) {
            return sub(v);
        }

        Vector3D operator*(const float scalar) {
            return mul(scalar);
        }

        Vector3D operator/(const float scalar) {
            return mul(1 / scalar);
        }

        bool operator==(const Vector3D &v) {
            return x == v.x && y == v.y && z == v.z;
        }
        
        Vector3D normalize() {
            return mul(1 / magnitude());
        }
};

int main(){
    Vector3D v1, v2;
    float x, y, z;
    cin >> x >> y >> z;
    v1.setVector3D(x, y, z);
    cin >> x >> y >> z;
    v2.setVector3D(x, y, z);

    int c;
    cin >> c;

    cout << setprecision(4) << fixed;

    (v1 + v2).print();
    (v1 - v2).print();
    (v1 * c).print();
    (v1 / c).print();

    cout << ((v1*c == v2/c) ? "Equal" : "Unequal") << endl;

    return 0;
}