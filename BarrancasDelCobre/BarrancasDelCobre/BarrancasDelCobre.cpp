// BarrancasDelCobre.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	unsigned short N, K, A = 0, OUT = 0, temp = 0;
	unsigned short pts[50000];

	cin >> N >> K;
	for (int i = 0; i < N; i++) {
		cin >> pts[i];
	}
	
	while (A < (N + 1) - K) {
		for (int i = A; i < K; i++) {
			temp += pts[i + 1] - pts[i];
			
		}
		A++;
		if (temp > OUT)
			OUT = temp;
		temp = 0;
	}
	cout << OUT;
	system("Pause");
    return 0;
}

