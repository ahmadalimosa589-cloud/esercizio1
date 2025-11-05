#include <stdio.h>
#include <math.h> // لاستعمال دالة pow()

int main() {
    float A, B, C;

    // طلب القيم من المستخدم
    printf("Inserisci i tre lati del triangolo (A, B, C): ");
    scanf("%f %f %f", &A, &B, &C);

    // التحقق من أن الأضلاع موجبة
    if (A <= 0 || B <= 0 || C <= 0) {
        printf("Errore: tutti i lati devono essere positivi.\n");
        return 0;
    }

    // التحقق من صحة المثلث (قانون المثلث)
    if ((A >= B + C) || (B >= A + C) || (C >= A + B)) {
        printf("Le misure non formano un triangolo valido.\n");
        return 0;
    }

    // تحديد نوع المثلث
    if (A == B && B == C) {
        printf("Il triangolo è equilatero.\n");
    }
    else if (A == B || B == C || A == C) {
        printf("Il triangolo è isoscele.\n");
    }
    else {
        printf("Il triangolo è scaleno.\n");
    }

    // التحقق من مثلث قائم الزاوية (فيثاغورس)
    if (fabs(pow(A,2) + pow(B,2) - pow(C,2)) < 0.0001 ||
        fabs(pow(A,2) + pow(C,2) - pow(B,2)) < 0.0001 ||
        fabs(pow(B,2) + pow(C,2) - pow(A,2)) < 0.0001) {
        printf("Il triangolo è anche rettangolo.\n");
    }

    return 0;
}
