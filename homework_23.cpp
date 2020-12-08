#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>
class Interval{
    public:
    float len;
    float x,y;
    Interval(std :: vector<std :: string> d1,std :: vector<std :: string> d2){
        int x1,x2,y1,y2;
        x1 = stoi(d1[0]);
        x2 = stoi(d2[0]);
        y1 = stoi(d1[1]);
        y2 = stoi(d2[1]);
        int x = (x2 - x1);
        int y = (y2 - y1);
        float len = sqrt(x*x + y*y);
        std :: cout << x << y <<  std :: endl;
    }
};

std :: vector<std :: vector<std :: string>> tovect(const char * fname){     //
    std :: vector <std :: vector<std :: string>> ans;
    std :: ifstream f(fname);
    int count_ = 0;
    while (f){
        std :: string x = "",y = "";
        std :: string tupl;
        getline(f,tupl,')');
        int state = 0;
        for (int i = 0; i < tupl.size(); i++){
            if (tupl[i] == ',') state = 1;
            if (state == 0 && isdigit(tupl[i])) x += tupl[i];
            if (state == 1 && isdigit(tupl[i])) y += tupl[i];
        }
        ans[count_][0] = x;
        ans[count_][1] = y;
        count_ ++;
    }
    f.close();
    return ans;
}
bool comp (std :: vector < std ::  pair <int, int> > a, std :: vector <std ::  pair <int, int> > b) {
  return a[0].second < b[0].second;
}

int main(){
    std :: vector <std :: vector<std :: string>> vect;
    vect = tovect("dots.txt");
    std :: ofstream fout("fname");
    std :: vector <Interval> lst;
    for (int i = 0; i < vect.size(); i ++){
        for (int j = 0; j < vect.size(); j ++){
            lst[i*vect.size() + j] = Interval (vect[i], vect[j]);
        }
    }
    sort(lst.begin(), lst.end(),comp);
    for (int i = 0; i < vect.size(); i ++){
        fout << "( " << &lst[i].x << ',' << &lst[i].y << " )";
    }
}
