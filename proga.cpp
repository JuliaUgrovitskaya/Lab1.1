#include <iostream>
#include <cmath>
using namespace std;

int main(){
	setlocale(LC_ALL, "rus");
	float widht, hight, area, perimetr,diagonal;
	//���� ������
	cout<<"������� ������ ��������������"<<endl;
	cin>>widht;
	cout<<"������� ����� ��������������"<<endl;
	cin>>hight;
	if (widht<=0||hight<=0){
	cout<<"error"<<endl;
	return 0;
}
	area=widht*hight;// ���������� ������� ��������������
	perimetr=2*(widht+hight); //���������� ��������� ��������������
	diagonal=sqrt(widht*widht+hight*hight);// ���������� ���������
	cout<<"������� ��������������"<<" "<<area<<endl;
	cout<<"�������� ��������������"<<" "<<perimetr<<endl;
	cout<<"����� ���������"<<" "<<diagonal<<endl;
	return 0
}
