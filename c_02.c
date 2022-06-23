#include <stdio.h>
#define PI 3.141592

void ex_01(void)
{
    char c1, c2;
    c1 = '1';
    c2 = 1;
    printf("c1 = %d, c2 = %c\n", c1, c2);
}

void ex_02(void)
{
    char ch1 = 'a';
    char ch2 = 'A';
    char ch3 = '0';
    char ch4 = '1';

    printf("%d", ch1);
    printf("%d", ch2);
    printf("%d", ch1 - ch2);

    printf("%d", ch3);
    printf("%d", ch4);
    printf("%d", ch3 - ch4);
}

void ex_03(void)
{
    int in;

    printf("정수 입력:");
    scanf("%d", &in);

    printf("8진수 = %#0o, 10진수 = %d, 16진수 = %#0x\n", in, in, in);
}

void ex_04(void)
{
    char c1;

    printf("문자 입력:");
    scanf("%c", &c1);

    printf("8진수 = %#0o, 10진수 = %d, 16진수 = %#x\n", c1, c1, c1);
}

void ex_05()
{
    float f1;

    printf("실수를 입력하세요");
    scanf("%f", &f1);

    printf("입력하신 실수를 소수 한자리까지만 부호를 포함하여 출력하면: %+.1f", f1);
}

void ex_06()
{
    float mid;
    float last;

    printf("중간고사 성적 입력: ");
    scanf("%f", &mid);
    printf("기말고사 성적 입력: ");
    scanf("%f", &last);

    printf("합 = %-10.3f\n", mid + last);
    printf("평균 = %-10.3f\n", (mid + last) / 2);
}

void ex_07()
{
    float r;

    printf("원 반지름 입력 : ");
    scanf("%f", &r);

    printf("원 반지름 : %.2f", r);
    printf("\n원 면적 : %.2f", r * r * PI);
    printf("\n원 둘레 %.2f", 2 * r * PI);
}

void ex_08()
{
    printf("sizeof(char) = %d", sizeof(char));
    printf("\nsizeof(short) = %d", sizeof(short));
    printf("\nsizeof(int) = %d", sizeof(int));
    printf("\nsizeof(float) = %d", sizeof(float));
    printf("\nsizeof(double) = %d", sizeof(double));
}

void ex_09()
{
    printf("20205163 민세진\n");

    char c1, c2;
    int in1, in2;

    printf("문자 입력: ");
    scanf("%c", &c1);

    printf("문자 입력: ");
    scanf("%c", &c2);

    in1 = (c1 >= '0' && c1 <= '9') ? c1 - '0' : 0;
    in1 = (c1 >= '0' && c1 <= '9') ? c1 - '0' : 0;

    printf("합 = %d", in1 + in2);
}

int main()
{
    ex_08();
    return 0;
}
