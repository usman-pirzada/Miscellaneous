# Key Points for `scanf` Usage

### 1. **For Arrays (Strings)**:
   - **Do not use `&`** with arrays (e.g., `char[]`), since the array name is already a pointer to its first element.
   - **Example**:
     ```c
     char name[20];
     scanf("%s", name);  // Correct
     ```

### 2. **For Pointers**:
   - **Do not use `&`** if the variable is already a pointer. Pointers already hold the address.
   - **Example**:
     ```c
     int *ptr;
     scanf("%d", ptr);  // Correct: `ptr` is a pointer, no need for `&`.
     ```

### 3. **For Struct Fields (Array Types)**:
   - **Do not use `&`** for fields of a `struct` that are arrays (e.g., `char[]`), as they are already pointers.
   - **Example**:
     ```c
     struct player {
         char name[20];
     };
     struct player p;
     scanf("%s", p.name);  // Correct
     ```

### 4. **For Scalar Variables (Non-array)**:
   - **Use `&`** for scalar variables like `int`, `float`, etc., because `scanf` needs the address to modify their value.
   - **Example**:
     ```c
     int num;
     scanf("%d", &num);  // Correct
     ```

## Summary:
- **Do not use `&`** with:
  - Arrays (strings)
  - Pointers
  - Struct array fields
- **Use `&`** with:
  - Scalar variables (e.g., `int`, `float`)