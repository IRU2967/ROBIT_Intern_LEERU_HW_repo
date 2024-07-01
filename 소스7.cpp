#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i,h,r,k,t,n,nf=1;
	int rf = 1;
	int tf = 1;
	int kf = 1;
	int hf = 1;

	printf("n입력:");
	scanf("%d",&n);

	printf("r입력:");
	scanf("%d", &r);
	if (r == 0) { printf("순열:1 중복순열:1 조합:1 중복조합:1"); }  //예외 처리

	if (n < 1) {
		printf("오류");            //예외처리

	}
	if (n > 1) {
		nf = n;
		for (i = 1; i < n; i++) {  //for문을 이용해 n!값을 구한뒤 nf에 대입
			nf *= i;
		}
		rf = r;
		for (i = 1; i < r; i++) {  //for문을 이용해 r!값을 구한뒤 rf에 대입
			rf *= i;
		}
		t = n - r;
		tf = t;
		for (i = 1; i < t; i++) {  //for문을 이용해 (n-r)!값을 구한뒤 tf에 대입
			tf *= i;
		}
		int pow = 1;
		for (i = 1; i <= r; i++) {              //for문을 이용해 n을 r번 곱하여 거듭제곱근을 나타낸 값을 pow에 대입
			pow *= n;
		}

		k= n + r-1;
		kf = k;
		for (i = 1; i < k; i++) {   //for문을 이용해 (n+r-1)!값을 구한뒤 kf에 대입
			kf *= i;
		}

		h = k - r;
		hf = h;
		for (i = 1; i < h; i++) {   //for문을 이용해 (n-1)!값을 구한뒤 hf에 대입
			hf *= i;
		}

		printf("순열:%d 중복순열:%d 조합:%d 중복조합:%d\n",nf/tf,pow,nf/(tf*rf), kf/(hf*rf));
	}  

	}




