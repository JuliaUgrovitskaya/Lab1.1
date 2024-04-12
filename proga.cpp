#include <iostream>
#include <cmath>
using namespace std;

int main(){
	setlocale(LC_ALL, "rus");
	float widht, hight, area, perimetr,diagonal;
	//Ввод данных
	cout<<"Введите ширину прямоугольника "<<endl;
	cin>>widht;
	cout<<"Введите длину прямоугольника"<<endl;
	cin>>hight;
	if (widht<=0||hight<=0){
	cout<<"error"<<endl;
	return 0;
}
	area=widht*hight;// Нахождение площади прямоугольника
	perimetr=2*(widht+hight); //Нахождение периметра прямоугольника
	diagonal=sqrt(widht*widht+hight*hight);// Нахождение диагонали
	cout<<"Площадь прямоугольника"<<" "<<area<<endl;
	cout<<"Периметр прямоугольника"<<" "<<perimetr<<endl;
	cout<<"Длина диагонали"<<" "<<diagonal<<endl;
	return 0
}
