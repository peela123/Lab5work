#include <iostream>
#include<cmath>
using namespace std;
# define M_PI           3.14159265358979323846
double deg2rad(double degree){
    return degree*(M_PI/180);
}
double rad2deg(double rad){
    return (180/M_PI)*rad;
}
double findXComponent(double length1,double length2,double rad1,double rad2){
    return (length1*cos(rad1))+(length2*cos(rad2));
}
double findYComponent(double length1,double length2,double rad1,double rad2){
    return (length1*sin(rad1))+(length2*sin(rad2));
}
double  pythagoras(double xcomp,double ycomp){
    return sqrt(pow(xcomp,2)+pow(ycomp,2));
}
void showResult(double result_vec_length ,double result_vec_direction){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << "\n";
    cout << "Length of the resultant vector = " << result_vec_length << "\n";
    cout << "Direction of the resultant vector (deg) = " << result_vec_direction << "\n";
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
