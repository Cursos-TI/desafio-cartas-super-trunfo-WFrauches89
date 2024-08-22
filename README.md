# Desafio-cartas-super-trunfo-WFrauches89
## Novato
O **Super Trunfo** é um jogo onde os jogadores comparam as propriedades de suas cartas para determinar quem tem a mais forte. Cada carta representa uma cidade de um país dividido em estados.

## Estrutura das Cartas

Cada país é dividido em oito estados, identificados pelas letras de **A a H**. Cada estado tem quatro cidades, numeradas de **01 a 04**. A combinação da letra do estado e o número da cidade define o código da carta (por exemplo, **A01**, **A02**, **B01**, **B02**).

Cada carta de cidade contém as seguintes informações:

- **Estado:** Letra do estado (A-H)
- **Código da Carta:** Identificador único da carta (ex: **A01**)
- **Nome da Cidade:** Nome da cidade
- **População:** Número de habitantes
- **Área:** Área total da cidade em quilômetros quadrados (km²)
- **PIB:** Produto Interno Bruto da cidade
- **Número de Pontos Turísticos:** Quantidade de pontos turísticos famosos

## Cadastro das Cartas

O sistema permite ao usuário cadastrar as cartas de cidades com as seguintes informações:

- **Estado (char)**
- **Código da Carta (char[])**
- **Nome da Cidade (char[])**
- **População (int)**
- **Área em km² (float)**
- **PIB (float)**
- **Número de Pontos Turísticos (int)**
- **Densidade populacional (float):** calculada como população dividida pela área da cidade.
- **PIB per capita (float):** calculado como PIB total da cidade dividido pela população.
- **Super Poder (float):** soma de todas as propriedades, ajustada conforme a lógica do super poder.

### Exemplo de Dados Cadastrados

Após o cadastro de uma cidade, o sistema exibirá os dados da seguinte forma:
```c
  1  Estado: A
  2  Código da Carta: A01
  3  Nome da Cidade: São Paulo
  4  População: 12325000
  5  Área: 1521.11 km²
  6  PIB: 699.28 bilhões de reais
  7  Número de Pontos Turísticos: 50
```
## Requisitos Funcionais

- Operação via terminal ou prompt de comando.
- Cadastro interativo das cartas de cidades.
- Código único para cada carta, composto pela letra do estado e um número de 01 a 04.
- Exibição clara e organizada dos dados cadastrados.

## Requisitos Não Funcionais

- **Usabilidade:** Interface de linha de comando simples e intuitiva.
- **Performance:** Operações rápidas e sem atrasos perceptíveis.
- **Documentação:** Código bem documentado com comentários e instruções claras.
- **Manutenabilidade:** Código claro com nomes de variáveis que facilitam a compreensão e manutenção.

## Código Fonte

O código fonte do sistema está disponível no arquivo `.c`. Para informações detalhadas sobre o código, veja o arquivo `Super_trunfo.c`.

## Aventureiro

**O objetivo é continuar o desenvolvimento** do jogo Super Trunfo com o tema países. Agora, você **implementará a lógica para calcular e adicionar propriedades calculadas às cartas de cidades, incluindo densidade populacional e PIB per capita**. Isso permitirá uma análise mais detalhada e comparativa das cidades.

## Funcionalidades do sistema

O sistema permitirá ao usuário cadastrar cartas de cidades para o jogo Super Trunfo, fornecendo informações detalhadas como estado, código da carta, nome da cidade, população, área, PIB e número de pontos turísticos. Com base nesses dados, o sistema calculará automaticamente a densidade populacional e o PIB per capita. As entradas serão feitas via terminal de comando e, após o cadastro, os dados serão exibidos de forma clara e organizada.

O sistema permitirá ao usuário cadastrar as cartas do jogo, fornecendo informações detalhadas sobre cada cidade representada, de acordo com as seguintes orientações:

- Cada carta será identificada pela letra do estado seguida de um número de 01 a 04 (por exemplo, A01, A02, B01, B02).
- Para cada carta, o usuário deverá inserir os dados que foram utilizados no nível básico. Com base nesses dados, o sistema calculará automaticamente:
  - **Densidade populacional (float):** Calculada como população dividida pela área da cidade. Isso dá uma medida de quantas pessoas vivem por quilômetro quadrado.
  - **PIB per capita (float):** Calculado como PIB total da cidade dividido pela população. Isso dá uma medida da média de produção econômica por pessoa.

## Comparação das cartas

A parte da comparação acontecerá da seguinte maneira:

- O sistema permitirá ao usuário comparar duas cartas, exibindo todas as propriedades de cada uma.
- O sistema utilizará operadores relacionais para determinar a carta vencedora com base nas propriedades selecionadas.
- A propriedade de densidade populacional será considerada vencedora quando tiver o menor valor, enquanto as outras propriedades vencerão quando tiverem o maior valor.
- Cada carta terá um super poder que é a soma de todas as propriedades (população, área, PIB, PIB per capta e densidade populacional invertida para comparação e número de pontos turísticos).
- A saída da comparação será 1 ou 0, caso a relação seja verdadeira ou falsa. Se o resultado da comparação for 1, a carta 1 ganhou; se o resultado for 0, a carta 2 ganhou.
- O sistema deve imprimir o resultado das comparações para cada propriedade.
