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

    printf("���� �Է�:");
    scanf("%d", &in);

    printf("8���� = %#0o, 10���� = %d, 16���� = %#0x\n", in, in, in);
}

void ex_04(void)
{
    char c1;

    printf("���� �Է�:");
    scanf("%c", &c1);

    printf("8���� = %#0o, 10���� = %d, 16���� = %#x\n", c1, c1, c1);
}

void ex_05()
{
    float f1;

    printf("�Ǽ��� �Է��ϼ���");
    scanf("%f", &f1);

    printf("�Է��Ͻ� �Ǽ��� �Ҽ� ���ڸ������� ��ȣ�� �����Ͽ� ����ϸ�: %+.1f", f1);
}

void ex_06()
{
    float mid;
    float last;

    printf("�߰���� ���� �Է�: ");
    scanf("%f", &mid);
    printf("�⸻��� ���� �Է�: ");
    scanf("%f", &last);

    printf("�� = %-10.3f\n", mid + last);
    printf("��� = %-10.3f\n", (mid + last) / 2);
}

void ex_07()
{
    float r;

    printf("�� ������ �Է� : ");
    scanf("%f", &r);

    printf("�� ������ : %.2f", r);
    printf("\n�� ���� : %.2f", r * r * PI);
    printf("\n�� �ѷ� %.2f", 2 * r * PI);
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
    printf("20205163 �μ���\n");

    char c1, c2;
    int in1, in2;

    printf("���� �Է�: ");
    scanf("%c", &c1);

    printf("���� �Է�: ");
    scanf("%c", &c2);

    in1 = (c1 >= '0' && c1 <= '9') ? c1 - '0' : 0;
    in1 = (c1 >= '0' && c1 <= '9') ? c1 - '0' : 0;

    printf("�� = %d", in1 + in2);
}

int main()
{
    ex_08();
    return 0;
}
