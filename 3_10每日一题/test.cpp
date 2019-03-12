
//判断经过几步可以变为Fibonacci数
#include<iostream>

using namespace std;

bool IsFibonacci(long num){
	int a = 0;
	int b = 1;
	while (b < num){
		int temp = a + b;
		a = b;
		b = temp;
	}
	if (b == num){
		return true;
	}
	return false;
}

int main(){
	long input;
	cin >> input;
	if (input == 0){
		cout << 0 << endl;
		return 0;
	}
	long left = input;
	long temp_left = 0;
	long right = input;
	long temp_right = 0;
	while (!IsFibonacci(left)){
		temp_left++;
		left--;
	}
	while (!IsFibonacci(right)){
		temp_right++;
		right++;
	}
	long result = temp_left < temp_right ? temp_left : temp_right;
	cout << result;
	system("pause");
	return 0;
}