# Définition de valeurs

## Python	C

### Int

x = 10		int x = 10;

### Float

y = 10.5        float y = 10.5;

### String

nom = "Arch"    char nom[] = "Arch";

### Boolean

actif = True    bool actif = true;

# Logique de condition

### if

## Python

if x > 5:
	print("Grand")
elif x == 5:
	print("Egal")
else:
	print("Petit")

## C

if (x > 5) {
	printf("Grand\n");
} else if (x == 5) {
	printf("Egal\n");
} else {
	printf("Petit\n");
}

### Boucle If

## Python

for i in range(5):
	print(i)

## C

for (int i = 0; i < 5; i++) {
	printf("%d\n",i);
}

### Boucle While

## Python

while x > 0:
	x -= 1

## C

while (x > 0) {
	x--;
}

### Fonctions

## Python

def jordan_gay(a,b):
	return a + b

## C

int add_nums(int a, int b) {
	return a + b;
}

### Listes

## Python

liste [1,2,3]

## C

int arr[3] = {1,2,3};

### Randint

## Python

import randint from random

print(randint(1,6))


## C

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randint(int min, int max) {
    return (rand() % (max - min + 1)) + min;
}

int main() {

    srand(time(NULL));

    int roll1 = randint(1,6);

    printf("%d\n",roll1);

}
