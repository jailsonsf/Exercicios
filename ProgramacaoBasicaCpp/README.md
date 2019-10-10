# Indice

- [Indice](#indice)
- [Introdução](#introdu%c3%a7%c3%a3o)
- [Entrada e Saída](#entrada-e-sa%c3%adda)
- [Estrutura de Decisão](#estrutura-de-decis%c3%a3o)
- [Estrutura de Repetição](#estrutura-de-repeti%c3%a7%c3%a3o)
- [Biblioteca math](#biblioteca-math)
- [Vetores](#vetores)


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

    cout << "A area eh " << raio*raio*pi << "\n";

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

# Biblioteca math

A biblioteca math vem com funções matemáticas já implementadas para facilitar a resolução de problemas.
Entre as funções disponíveis temos a função `pow()` que faz potencialização. Para usar essa, além de outras funções precisamos importar a biblioteca `#include <cmath>`.

```c++
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x, y;

    cin >> x >> y;

    cout << pow(x, y) << endl;

    return 0;
}
```

O trecho de código acima mostra na tela o valor de $x^y$.
Além disso podemos usar a função `pow()` para calcular a raiz, o código abaixo retorna a raiz quadrada de $x$ e em seguida a n-ésima raiz $x$, já que $x^{1/n} = \sqrt[n]{x}$:

```c++
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x, n;
    cin >> x >> n;

    cout << pow(x, 0.5) << endl;
    cout << pow(x, 1.0/n) << endl;

    return 0;
}
```
Para fazer a raiz quadrada em vez de usar `pow(x, 0.5)` poderiamos usar o comando `sqrt(x)`. Essas são apenas funções básicas da biblioteca, ela possui várias outras funções disponíveis.

# Vetores

Para declararmos um vetor basta adicionarmos colchetes após declarar a nossa variável e dentro dos colchetes o tamanho do nosso vetor, por exemplo `int values[10]` com esse comando criamos um vetor de tamanho 10, ou seja, com 10 espaços disponíveis para armazenarmos valores.

```c++
#include <iostream>

using namespace std;

int main() {
    int values[10];

    for (int i = 0; i < 10; i++) {
        values[i] = i;

        cout << values[i] << "\n";
    }
}
```

Com esse código adicionamos no nosso vetor os valores de 0 a 9.