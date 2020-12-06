#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std ;
class Person{
    protected:
    string name;
    unsigned byear;
public:
    int input(){
        cin>>name;
        cin>>byear;
    }
void print(){
 cout<<name<<","<<byear<<endl;
}
};
class Student : public Person {
    public:
        string number;
        vector<int> scores1;
        vector<int> scores2;
        string stipendold, stipendnew;

        void output(){
            cout << "Student " << number << "with name " << name << "has " << stipendold <<"by an old method and has " << stipendnew << " by a new method." << endl;
        }
        float get_average_score(){
            unsigned int count_scores = this->scores2.size();
            unsigned int sum_scores = 0;
            float average_score;
            for (unsigned int i = 0; i < count_scores; ++i) {
                sum_scores += this->scores2[i];
            }
            average_score = (float) sum_scores / (float) count_scores;
            return average_score;
        }

        Student(const std :: string &st){
        string num, name;
        stipendold = " stipend ";
        vector<int> score1,score2;
        //std :: string a,n;
        int state = 1, k = 0, j = 0;
        for (int i = 0; i < st.size(); i ++){
            if (st[i] == ' ' && state == 1 ){
                state = 0;
                continue;
            }
            else if (st[i] == ' ' && state == 0 ){
                state = 2;
                continue;
            }
            else if (st[i] == '|' ){
                state = 3;
                continue;
            }
            if (state == 1){
                num += st[i];
            }
            else if (state == 0){
                name += st[i];
            }
            else if (state == 2){
                int el = 0;
                if (st[i] == 1){
                    el = 100;
                    i +=2;
                }
                else if (st[i] <= 9 && st[i] >= 6){
                    el += (int)st[i] + (int)st[i+1];
                    i +=1;
                }
                else continue;
                score1.push_back(el);
            }
            else if (state == 3){
                if (st[i] != ' ') score2.push_back((int)st[i]);
                if (st[i] == '3') stipendold = " not stipend" ;
            }
        }

        number = num;
        name = name;
        scores1 = score1;
        scores2 = score2;
        stipendnew = '0';
    }
};
void findstip(){
    vector<float> s;
    int coun = 0;
    ifstream f("students.txt");
    string line;
    while (getline(f, line)) {
        Student b(line);
        coun +=1;
        //s.push_back(b.number);
        s.push_back(b.get_average_score());
    }
    sort (s.begin(), s.end());
    float l = s[(int)(coun * 0.4)];
    while (getline(f, line)) {
        Student b(line);
        if ( b.get_average_score() >= l) b.stipendnew = "stipend";
        else b.stipendnew = "stipend";
        b.output();
    }
    f.close();
}
int main(){
    findstip();
}
