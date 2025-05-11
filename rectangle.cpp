#include <iostream>
#include <cmath>

using namespace std;

int perimeter(int length, int width){
	return (length*2 + width*2);
}
int square(int length, int width){
	return length*width;
}
int diagonal_length(int length, int width){
	return sqrt(length*length + width * width);
}


int main(){
	cout << "Необходимо выбрать какой параметр прямоугольника вы хотети узнать: \n1)Периметр\n2)Площадь\n3)Длина диагонали\n";
	int a = 0;
	int width = 0;
	int length = 0;
	
	while (1){
	cin >> a;
		if (a != 1 && a != 2 && a != 3){
			cout << "Wrong value, try again.\n";
		}
		else {
			break;
		}
	}

	cout << "Введите длинну вашего прямоугольника\n";
	cin >> length;
	cout << "Введите ширину вашего прямоугольника\n";
	cin >> width;

	switch(a){
		case 1:
			cout << "Периметр: "<< perimeter(length, width) << endl;
			break;
		case 2:
			cout << "Площадь: "<< square(length, width) << endl;
			break;
		case 3:
			cout << "Длинна диагонали" << diagonal_length(length, width) << endl; 
			break;
	}
	return 0;
}
