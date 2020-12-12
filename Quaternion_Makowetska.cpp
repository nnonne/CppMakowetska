#include "Quaternion_Makowetska.h"
#include "Angle3D_Makowetska.h"
Quaternion :: Quaternion(){
    float a = 0, b = 0, c = 0, d = 0;
}
Quaternion :: Quaternion(float a1, float b1,float c1,float d1){
    a = a1;
    b = b1;
    c = c1;
    d = d1;
}

//operations:
//addition
Quaternion Quaternion :: operator + (Quaternion q){
    return Quaternion((a + q.a), b + q.b, c + q.c, d + q.d);
}
//subtraction
Quaternion Quaternion  :: operator - (Quaternion q){
    return Quaternion(a - q.a, b - q.b, c - q.c, d - q.d);
}
//multiplication
Quaternion  Quaternion :: operator * (Quaternion q){
    float h1 = a*q.a - b*q.b - c*q.c - d*q.d;
    float h2 = a*q.b + q.d * c + q.c*d + q.a*b;
    float h3 = a*q.c + q.a * c - b * q.d - q.b * d;
    float h4 = a*q.d + b*q.c - q.b * c +q.a * d;
    return Quaternion(h1,h2,h3,h4);
}
//division
Quaternion Quaternion  :: operator / (Quaternion q){
    float h1 = (a*q.a - b*q.b - c*q.c - d*q.d)/(a*q.a + b*q.b + c*q.c + d*q.d);
    float h2 = (- a*q.b + q.d * c + q.c*d  -q.a*b)/(a*q.a + b*q.b + c*q.c + d*q.d);
    float h3 = (- a*q.c -q.a * c - b * q.d - q.b * d)/(a*q.a + b*q.b + c*q.c + d*q.d);
    float h4 = (- a*q.d + b*q.c - q.b * c - q.a * d)/(a*q.a + b*q.b + c*q.c + d*q.d);
    return Quaternion(h1,h2,h3,h4);
}
// input
void Quaternion :: inputq(){
    float a,b,c,d;
    std :: cout << "input your quaternion: " << std :: endl << "multiplicant for 1: ";
    std :: cin >> this -> a ;
    std :: cout << "multiplicant for i: ";
    std :: cin >> this -> b ;
    std :: cout << "multiplicant for j: ";
    std :: cin >> this -> c ;
    std :: cout << "multiplicant for k: ";
    std :: cin >> this -> d ;
}
//print
void Quaternion :: printq(){
    std :: cout << a << " + " << b << "i + " << c << "j + " << d << "k " << std :: endl;
}
//writing to file
void Quaternion :: fwriteq(std :: ofstream &f){
    std :: string line = std :: to_string (a) + " + " + std :: to_string(b) + "i + " + std :: to_string(c) + "j + " + std :: to_string(d) + " k\n";
    f << line;

}

// reading file
void Quaternion :: freadq(std :: ifstream &f){
    std :: string s;
    f >> s;
    int state = 0;
    float a,b,c,d;
    for (int i = 0; i < s.size(); i++){
        if (state == 0 && isdigit(s[i])){
            a = a*10 + float(s[i]);
        }
        if (state == 0 && i != 0 && s[i-1] == '-'){
            a *= -1;
        }
        if (s[i] == '+') state ++;
        if (state == 1 && isdigit(s[i])){
            b = b*10 + float(s[i]);
        }
        if (state == 1 && s[i-1] == '-'){
            b *= -1;
        }
        if (state == 2 && isdigit(s[i])){
            c = c*10 + float(s[i]);
        }
        if (state == 2  && s[i-1] == '-'){
            c *= -1;
        }
        if (state == 3 && isdigit(s[i])){
            d = d*10 + float(s[i]);
        }
        if (state == 3 && s[i-1] == '-'){
            d *= -1;
        }
    }
}

