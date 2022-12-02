int main()
{
    int Array[8], i, MaiorValor = 0, MenorValor = 0, IndiceMenor = 0, IndiceMaior=0;
    for(i=0; i<8; i++)
    {
        scanf("%d", &Array[i]);
    }
    for(i=0; i<8; i++)
    {
        if(Array[i]>MaiorValor)
        {
            MaiorValor = Array[i];
            IndiceMaior= i;
        } 
    }
    MenorValor = MaiorValor;
    for(i=0; i<8; i++)
    {
        if(Array[i]<MenorValor)
        {
            MenorValor = Array[i];
            IndiceMenor = i;
        }
    }
    printf("%d \n%d \n%d", IndiceMaior,  MenorValor, IndiceMenor);
    return 0;
}
