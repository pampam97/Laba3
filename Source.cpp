#include <iostream>

using namespace std;

class Array {
private:
	int* a;
	int n;
public:
	Array(int n1, int* b) {
		n = n1;
		a = b;
	}
	~Array() {
		delete[]a;
	}
	void show() {
		cout << "Массив: ";
		for (int i = 0; i < n; i++) {
			cout << a[i] << " ";
		}
	}
	int& operator[](const int index) {
		return a[index];
	}
	void operator--(int j) {
		for (int i = 0; i < n; i++)
			a[i]--;
	}
};

int main()
{
	setlocale(0, " ");
	int n;
	cout << "Введите кол-во элементов массива: ";
	cin >> n;
	int* b = new int[n];
	for (int i = 0; i < n; i++) {
		cout << i << " - элемент = ";
		cin >> b[i];
	}
	Array arr(n, b);
	arr.show();
	cout << endl;
	arr--;
	arr.show();
	return 0;
}













