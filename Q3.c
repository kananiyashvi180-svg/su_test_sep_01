   #include<stdio.h>
   int main()
   {

   
   float a,b,c,d,e;
    float total, percentage;

    
    printf("Enter marks:\n");
    scanf("%f %f %f %f %f", &a,&b,&c,&d,&e);


    total = a+b+c+d+e;
    percentage = (total / 500) * 100;

    
    printf("\nTotal Marks = %.2f/500", total);
    printf("\nPercentage = %.2f", percentage);

    
    printf("\nGrade: ");
    if (percentage >= 90)
        printf("A+");
    else if (percentage >= 80)
        printf("A");
    else if (percentage >= 70)
        printf("B");
    else if (percentage >= 60)
        printf("C");
    else if (percentage >= 50)
        printf("D");
    else if (percentage >= 40)
        printf("E");
    else
        printf("Fail");

    return 0;
}