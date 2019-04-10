#include <iostream>
#include <cstdio>
#include <algorithm>


using namespace std;

const int maxn = 100010;

int leftt;
int rightt;
int a[maxn];
int n,m;

/**
 * Encuentra dos números en un conjunto de datos para que su suma sea igual al número especificado && y la diferencia entre los dos números es la más pequeña
 */
void search(int l,int r){
	while(l < r){
		if(a[l] + a[r] == m){
			leftt = a[l];
			rightt = a[r];

			++l;
			--r;
		}else if(a[l] + a[r] < m){
			++l;
		}else if(a[l] + a[r] > m){
			--r;
		}
	}
}

int main(){
	while(scanf("%d",&n)!=EOF){
		leftt = 0;
		rightt = 0;

		int i;
		for(i = 0 ; i < n ; ++i){
			scanf("%d",&a[i]);
		}

		sort(a,a+n);

		scanf("%d",&m);

		search(0,n-1);

		printf("Peter debería comprar libros cuyos precios sean %d y %d.\n\n",leftt,rightt);
	}

	return 0;
}
