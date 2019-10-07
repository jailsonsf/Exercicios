# Indice

* [Introdução](#introdução)
* [Entrada e Saída](#entrada-e-saída)


# Introdução

Hello world, com esse script podemos somos apresentados a sintaxe básica da linguagem c++.

```C++
#include <iostream>

using namespace std;

int main() {

    cout << "Hello World\n";

    return 0;
}
```

Utilizamos o comando `#include <iostream>` para importar a biblioteca que usaremos no nosso código. É nela que encontramos o comando `cout` que será usado para imprimir os valores na tela.
Em seguida usamos `using namespace std` para facilitar o uso dos comandos `cin` e `cout`.
E após isso declaramos nossa função `main()`.


# Entrada e Saída

Para receber que um valor de entrada seja armazanado em uma variável usaremos o comando `cin` seguido de dois sinais de maior `>>` e mostramos em qual variável o valor deve ser armazenado. E a saída é feita pelo comando `cout` seguido de dois sinais de menor `<<` e passamos o que deverá ser impresso no terminal.

```c++
#include <iostream>

using namespace std;

int main() {
    double raio;
    cin >> raio;

    double pi = 3.1415;

    cout.precision(2);
    cout.setf(ios::fixed);

    cout << "A area é " << raio*raio*pi << "\n";

    return 0;
}
```

Com o comando `cout` podemos usar o comando `cout.precision()` para limitar a quantidade de casas decimais, seguido do comando `cout.setf(ios::fixed)`.
