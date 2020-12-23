#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

void Task1()
{
    printf("Задание 1\n");
    double x1,x2,x3,y1,y2,y3,p,s,l1,l2,l3,hp;
    printf("Введите координаты первой точки(х у): ");
    scanf("%lf %lf",&x1,&y1);
    printf("Введите координаты второй точки(х у): ");
    scanf("%lf %lf",&x2,&y2);
    printf("Введите координаты третьей точки(х у): ");
    scanf("%lf %lf",&x3,&y3);
    l1=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    l2=sqrt(pow(x2-x3,2)+pow(y2-y3,2));
    l3=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
    p=l1+l2+l3;
    hp=p/2;
    s=sqrt(hp*(hp-l1)*(hp-l2)*(hp-l3));
    printf("Периметр = %lf, Площадь = %lf\n",p,s);
}

void Task2()
{
    printf("Задание 2\n");
    int x,y1,y2;
    printf("Введите 3-значное число: ");
    scanf("%d",&x);
    y1=x/100+(x%100)*10;
    printf("Перемещение левой цифры вправо - %d\n",y1);
    y2=(x%10)*100+x/10;
    printf("Перемещение правой цифры влево - %d\n",y2);
}

void Task3()
{
    printf("Задание 3\n");
    int n,min,sec;
    printf("Введите количество прошедших секунд N: ");
    scanf("%d",&n);
    sec=n%60;
    min=(n%3600)/60;
    printf("%02d:%02d",min,sec);
}

void Task4()
{
    printf("Задание 4\n");
    int n,k,x;
    printf("Введите день года и номер дня недели 1 января этого года(K N)\n");
    scanf("%d %d",&k,&n);
    x=7-(k%7+n-1)%7;
    x=7-x%7;
    printf("Номер дня недели %d дня года - %d\n",k,x);
}

void Task5()
{
    printf("Задание 5\n");
    int a,b,c,s,n;
    printf("Введите стороны прямоугольника и сторону квадрата(A B C)\n");
    scanf("%d %d %d",&a,&b,&c);
    n=(a/c)*(b/c);
    s=a*b-n*c*c;
    printf("Количество квадратов - %d, незанятая площадь - %d",n,s);

}

int main()
{
    SetConsoleOutputCP(1251);
    printf("Task 1\n");
    int task;
    do
    {
        printf("Введите номер задания(0-выход,1-5)\n");
        scanf("%d",&task);
        switch(task)
        {
        case 0:
            break;
        case 1:
            Task1();
            break;
        case 2:
            Task2();
            break;
        case 3:
            Task3();
            break;
        case 4:
            Task4();
            break;
        case 5:
            Task5();
            break;
        default:
            printf("Данное задание не выполнено");
            break;
        }
        printf("\n");
    }while(task!=0);
    return 0;
}
