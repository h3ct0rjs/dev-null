#include <bits/stdc++.h>
//beginners Problems 
//feedback:hfjimenez@utp.edu.co 
/*
You have to calculate the final salary for your employee, 
based on value sold by him. So you have to read his name,
his fixed salary and the value sold by him.
Your functionary wins 15% over all products sold.
Write the final (total) salary of this functionary, rounded to two decimal places.
 
- Don’t forget to print end line after the result otherwise you will get “Presentation Error”.
- Don’t forget the blank spaces.
 
Input
The input file contains an string (employee first name), and two double values, 
that are the salary of this employee and the total value sold by him.
 
Output
Print the total salary of the employee, according to the given example.
*/
int main(void){
   char name;
   double salary, sold;
   scanf("%s %lf %lf",&name, &salary, &sold);
   printf("TOTAL = R$ %.2f\n",(salary+sold*0.15));
    return 0;   
}