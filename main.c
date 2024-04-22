void dolar(float real)
{
    float dolar;
    printf("\n Entre com a cotacao do dolar atual: ");
    scanf("%f",&dolar);
    //Conversao
    printf("\n o valor %.2f em dolar e: %.2f",real,real/dolar);
}

void euro(float real){
    float euro;
    printf("\n Entre com a cotacao do euro atual: ");
    scanf("%f",&euro);
    //Conversao
    printf("\n o valor %.2f em euro e: %.2f",real,real/euro);
}
void libra(float real)
{
 float libra;
    printf("\n Entre com a cotacao do libra atual: ");
    scanf("%f",&libra);
    //Conversao
    printf("\n o valor %.2f em libra e: %.2f",real,real/libra);
}
int main()
{
    int op,contador=0;
    float real;
while(contador==0){
//Entratada do vlor
    printf("\n Entre com o valor em real para ser convertido: ");
    scanf("%f",&real);
//Final da entrada
    printf("\n Entre com as opcoes de conversao: Dolar(1), Euro(2) ou Libra(3)-> ");
    scanf("%d",&op);
//metodos
if(op == 1){
dolar(real);
}
if(op == 2){
euro(real);
}
if(op == 3){
libra(real);
}
//continuar progama?
printf("\n Continuar progama? Sim(0) Nao(1) -> ");
scanf("%d",&contador);
}
printf("\n\n Progama encerrado! \n\n");
    return 0;
}