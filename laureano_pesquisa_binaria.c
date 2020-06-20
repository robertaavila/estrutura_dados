int binário(char *item, int contador, char chave)
{
    int baixo, alto, meio;
    baixo = 0;
    alto = contador - 1;
    while (baixo <= alto)
    {
        /* dividir para conquistar */
        meio = (baixo + alto) /;

        /* procura nas metades até encontrar o elemento */
        if (chave < item[meio])
            alto = meio - 1; /* elemento na metade inferior */
        else if (chave > item[meio])
            baixo = meio + 1; /* elemento na metade superior */
        else
            return meio; /* elemento encontrado */
    }
    return -1;
}