//30. WAP to convert years into days and days into years
int main() {
    int years, days;

    printf("Enter 1 to convert years to days\n");
    printf("Enter 2 to convert days to years\n");
    scanf("%d", &years);

    if (years == 1) {
        printf("Enter number of years: ");
        scanf("%d", &years);
        days = years * 365;
        printf(" years is equal to %d days\n %d", years, days);
    } else if (years == 2) {
        printf("Enter number of days: ");
        scanf("%d", &days);
        years = days / 365;
        printf(" days is equal to %d years\n %d", days, years);
    } else {
        printf("Invalid choice\n");
    }
}