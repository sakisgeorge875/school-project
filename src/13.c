int main() {
    char name[30];
    int age;

    printf("Please enter your name: ");
    scanf("%s", name);
    printf("Hello %s, how old are you? ", name);
    scanf("%d", &age);
    if (age < 18) {
        printf("You are not eligible to vote.");
    } else {
        printf("Congratulations, you are eligible to vote!");
    }

    return 0;
}
