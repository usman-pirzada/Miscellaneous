    // Scanf taking spaces also as input in name
    printf("Enter your name: ");
    scanf("%[^\n]%c", &name);
    
    // Scanf taking spaces also as input in *name
    printf("Enter your name: ");
    scanf("%[^\n]%*c", name);