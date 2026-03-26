# Roulette.c

Un simple jeu de roulette conçue pour explorer la gestion de mémoire et l'aléatoire en C.

## Description

Ce programme simule une table de roulette où l'utilisateur parie des **crédits virtuels** sur des nombres allant de 0 à 51.

>[!IMPORTANT]
>Ce projet est purement éducatif.

## Utilisation

### Compilation

On utilise `clang` avec des flags de sécurité pour s'assurer que le code est propre :

```bash
clang -Wall -Wextra -o roulette Roulette.c
```

### Execution

```bash
./roulette
```

## Détails Techniques

- **Aléatoire:** Utilise `srand(time(NULL))` pour la seed du Pseudo Random Number Generator.
- **Performance:** Temps d'exécution réduit par rapport à l'interpréteur Python.
- **Types:** Utilise des types de données stricts pour optimiser l'empreinte mémoire.

---
*Fait avec Love sous Arch linux via nvim. <3


