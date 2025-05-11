#include <iostream>
#include <cmath>
using namespace std;

//Почему при вводе в положительную сторону треугольника такогозначения ":wq" Цикл сходит с ума 
bool checkOfExistence(int s1, int s2, int s3){
	int flag = 1;
	if (s1+s2 < s3){
		flag = 0;
	}
    if (s1+s3 < s2){
        flag = 0;
    }
    if (s2+s3 < s1){
        flag = 0;
    }
	if(s1 < 0){
		flag = 0;
	}
	if(s2 < 0){
        flag = 0;
    }
	if(s3 < 0){
        flag = 0;
    }
	return flag;
}

int perimeter (int s1, int s2, int s3) {
	return s1 + s2 + s3;
}
int square( int s1, int s2, int s3){
	int halfPer = (s1+s2+s3)/2;
	int square = sqrt(halfPer*(halfPer - s1)*(halfPer -  s2)*(halfPer - s3)); 
	return square;
}
bool isoscelesCheck (int s1, int s2, int s3){
	bool flag = false;
	if (s1 == s2){
		flag = true;
	}
	if (s1 == s3){
        flag = true;
    }
    if (s2 == s3){
        flag = true;
    }
	return flag;

}


int main(){
	cout << "Необходимо выбрать какой параметр треугольника вы хотети узнать: \n1)Периметр \n2)Площадь по формуле Герона\n3)Проверка на равнобедренность\n";
	int a = 0;
    int side1 = 1;
    int side2 = 1;
	int side3 = 1;
	cin >> a;	
	while (1){
	    cout << "Введите положительную длинну первой стороны треугольника\n";
	    cin >> side1;
	    cout << "Введите положительную длинну второй стороны треугольника\n";
	    cin >> side2;
	    cout << "Введите положительную длинну третьей стороны треугольника\n";
	    cin >> side3;
		if (checkOfExistence(side1, side2, side3) == 0){
        	cout << "Wrong value, try again.\n\n";
    	}
		else {
			break;
		}
	}

    switch(a){
        case 1:
            cout << "Периметр: "<< perimeter(side1, side2, side3) << endl;
            break;
        case 2:
            cout << "Площадь по формуле Герона: "<< square(side1, side2, side3) << endl;
            break;
        case 3:
			if (isoscelesCheck)
            cout << "Проверка на равнобедренность" << isoscelesCheck(side1, side2, side3) << endl;
            break;
    }
    return 0;
}
