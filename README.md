Compilador da linguagem Miranhês.

# Compilando
Para compilar um código fileName.mir, use o comando:

miranha fileName.mir

É necessário que o usuário tenha o gcc instalado e corretamente configurado no PATH do Windows.

## Compilando deixando o arquivo C intermediário
Para compilar um código fileName.mir, deixando registrado o código C intermediário criado pelo parser do Miranhês, use o comando:

miranha fileName.mir -o

# Usando o arquivo de saída
A saída sempre terá o mesmo nome da entrada. Então, para rodar seu programa, apenas escreva no terminal:

fileName.exe

# Compilando o compilador
No MingW, use:

bison -d miranha.y

flex miranha.l

Então compile os arquivos com o gcc em um terminal do Windows:

gcc miranha.tab.c lex.yy.c -o miranha
