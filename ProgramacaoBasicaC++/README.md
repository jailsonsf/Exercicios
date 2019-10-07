# Indice

* [Introdução](#introdução)
* [Entrada e Saída](#entrada-e-saída)
* [Estrutura de Decisão](#estrutura-de-decisão)
* [Estrutura de Repetição](#estrutura-de-repetição)


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

# Estrutura de Decisão

Em uma estrutura de decisão temos blocos de código que são executados apenas quando determinada condição é satisfeita.
Para isso temos os comandos `if` e `else`. O bloco de código do comando `if` é executado quando determinada condição é verdadeira, caso o contrário o bloco a ser executado é o do comando `else`. Quando um `if` não é executado também podemos fazer outra verificação usando o comando `else if`.

```c++
#include <iostream>

using namespace std;

int main() {
    float A, B;
    cin >> A >> B;

    float result = (A + B) / 2;

    if (result >= 7) {
        cout << "Aprovado\n";

    } else if (result >= 4) {
        cout << "Recuperacao\n";

    } else {
        cout << "Reprovado\n";

    }
    
    return 0;
}
```

# Estrutura de Repetição

Estruturas de repetição são usadas quando temos trechos de código que necessitam ser executados mais de uma vez. Para fazer isso usamos o `for()` e o `while()`.

```c++
#include <iostream>

using namespace std;

int main() {

    int i = 0;
    while(i < 10) {
        cout << i << "\n";
        i += 1;
    }

    return 0;
}
```

```c++
#include <iostream>

using namespace std;

int main() {

    for (int i = 0; i < 10; i++) {
        cout << i << "\n";
    }

    return 0;
}
```