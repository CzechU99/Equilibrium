#include <iostream>

using namespace std;

int main()
{
 
	int t, a, e, suma = 0, c, sum, k, m, test;

	cin >> t;

	while (t--) {

		suma = 0;
		test = 0;

		cin >> a;

		int *ar = new int[a];

		for (int i = 0; i < a; i++) {
			cin >> e;
			suma += e;
			ar[i] = e;
		}

		c = suma;

		c /= 2;

		while (true) {

			test = 0;

			for (int i = 0; i < a; i++) {
				if (ar[i] == c) {
					test = c;
					break;
				}
			}
			if (test == c) {
				break;
			}
			for (int i = 0; i < a; i++) {
				m = i + 1;
				test = 0; 
				for (int q = i; q < a; q++) {
					k = i;
					sum = 0;
					test = 0;
					while (k != m) {
						sum += ar[k];
						k++;
					}
					for (int x = m; x < a; x++) {
						test = sum;
						test += ar[x];
						if (test == c) {
							break;
						}
					}

					m++;

					if (test == c) {
						break;
					}

				}

				if (test == c) {
					break;
				}

			}

			if (c == test || c == 0) {
				break;
			}

			c--;

		}

		cout << suma - (2 * test) << '\n';

	}

}