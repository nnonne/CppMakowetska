#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Person { 
protected:
    string name;
    unsigned byear;
public:
    int input() { 
        cout << "Input person: ";
        cin >> name;
        cin >> byear;
        return 0;
    }
    void print() {// #вивести особу
        cout << name << "," << byear << endl;
    }
};
class Passenger : public Person {
    string from;
    string to;
public:

    int input1() {
        Person::input();
        cout << "from/to";
        cin >> from >> to;
        return 0;
    }
    void print() {
        Person::print();
    }
    bool dest_cmp(string x, string y) {
        return (to == x) && (from == y);
    }

};

class Dist {
public:
    string from;
    string to;
    double dist;

    int input() {
        cin >> from >> to >> dist;
        return 0;
    }

    double  getPrice(string x, string y, double val) {
        if ((to == x) && (from == y)) {
            return val * dist;
        }
        return 0;
    }
};
int main() {
    int n, m;
    cout << "n,m";
    cin >> n >> m;
    Passenger* pas = new Passenger[n];
    for (int i = 0; i < n; i++) {
        pas[i].input();
    }

    vector<Dist>dst;
    for (int i = 0; i < n; i++) {
        Dist d;
        d.input();
        dst.push_back(d);
    }
    double price;
    cout << "input price: ";
    cin >> price;
    double sum=0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (pas[i].dest_cmp(dst[j].to, dst[j].from)) {
                sum += price * dst[j].dist;
                break;
            }
        }
    }
}