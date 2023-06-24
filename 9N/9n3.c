#include<stdio.h>
#include<math.h>
double get_array_avg(int *v, int n);
double get_array_std(int *v, double avg, int n);

int main(){

int n = 5, i;
double avg, std; 
int list[n];

for(i=0; i<n; i++) //정수 받기
scanf("%d",&list[i]);

avg = get_array_avg(list, n);

std = get_array_std(list, avg, n);

printf("%.2lf %.2lf",avg ,std);

	return 0;
}

//평균 구하는 함수 *v = 배열이름 n = 배열 크기
double get_array_avg(int *v, int n){ 
int i;
double sum=0,avg;

for(i=0; i<n; i++)
sum += v[i];

avg=sum/n;
return avg;
}

//표준편차 구하는 함수 v = 배열이름, avg = 배열평균, n = 배열크기
double get_array_std(int *v, double avg, int n){ 
//분산 계산
int i;
double sum=0, std, vrn, diff; // 수정: 또 sum을 초기화 하지않고 사용함.. 제발,,,,,, 위에서는 잘 초기화 해놓고 왜..
for(i=0; i<n; i++){
	diff = v[i] - avg; //차이값
	sum += diff*diff;  //차이값의 제곱의 합	
}
vrn = sum / n; //분산
std = sqrt(vrn);
return std;
}
/*
## 문제 설명
크기가 5인 int형 배열 v의 원소를 입력받고 원소의 평균과 표준편차를 출력하는 함수
double get_array_avg(int *v, int n), double get_array_std(int *v, double avg, int n) 함수를 작성하라.
get_array_std 함수의 매개변수는 배열, 평균, 배열의 크기이다.
평균과 표준편차를 출력하여라. (출력은 소수점 2자리까지 반올림하여 출력)

## 입력 예시 
10 20 30 40 50

## 출력 예시 
30.00 14.14

## 입력 예시 
5 6 3 2 1

## 출력 예시 
3.40 1.85
*/