#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i,h,r,k,t,n,nf=1;
	int rf = 1;
	int tf = 1;
	int kf = 1;
	int hf = 1;

	printf("n�Է�:");
	scanf("%d",&n);

	printf("r�Է�:");
	scanf("%d", &r);
	if (r == 0) { printf("����:1 �ߺ�����:1 ����:1 �ߺ�����:1"); }  //���� ó��

	if (n < 1) {
		printf("����");            //����ó��

	}
	if (n > 1) {
		nf = n;
		for (i = 1; i < n; i++) {  //for���� �̿��� n!���� ���ѵ� nf�� ����
			nf *= i;
		}
		rf = r;
		for (i = 1; i < r; i++) {  //for���� �̿��� r!���� ���ѵ� rf�� ����
			rf *= i;
		}
		t = n - r;
		tf = t;
		for (i = 1; i < t; i++) {  //for���� �̿��� (n-r)!���� ���ѵ� tf�� ����
			tf *= i;
		}
		int pow = 1;
		for (i = 1; i <= r; i++) {              //for���� �̿��� n�� r�� ���Ͽ� �ŵ��������� ��Ÿ�� ���� pow�� ����
			pow *= n;
		}

		k= n + r-1;
		kf = k;
		for (i = 1; i < k; i++) {   //for���� �̿��� (n+r-1)!���� ���ѵ� kf�� ����
			kf *= i;
		}

		h = k - r;
		hf = h;
		for (i = 1; i < h; i++) {   //for���� �̿��� (n-1)!���� ���ѵ� hf�� ����
			hf *= i;
		}

		printf("����:%d �ߺ�����:%d ����:%d �ߺ�����:%d\n",nf/tf,pow,nf/(tf*rf), kf/(hf*rf));
	}  

	}




