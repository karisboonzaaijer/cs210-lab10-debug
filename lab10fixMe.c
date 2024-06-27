/** lab10fixMe.c
* ===========================================================
* Name: Name, Date
* Section:
* Project: Lab 10
* Purpose: Debugging
* ===========================================================
* Instructions:
 * Complete the tasks outlined in the lab writeup.
*/




 

int Main() { 
    // findLargest()
    int n1, n2, n3;

    printf("Enter three integer numbers: ");
    scanf("%d %d %d", n1, &n2, &n3);            
    int largest = findLargest(n1,n2,n3);
    printf("%d\n", largest);

    // convertTemperature()
    double fahrenheit;
    printf("Please enter a temperature in fahrenheit: \n");
    scanf("%lf\n", &fahrenheit);
    double celsius = convertTemperature(fahrenheit);
    printf("%lf\n", celsius);
