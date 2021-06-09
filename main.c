#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float metodoTrapecio (float y[], float division)
{
    float final;
    final=division*(y[0]+(2*y[1])+(2*y[2])+(2*y[3])+y[4]);
    return final;
}

float metodoSimpson1 (float y[], float division)
{
    float final;
    final=division*(y[0]+4*(y[1]+y[3])+2*y[2]+y[4]);
    return final;
}

float metodoSimpson2 (float y[], float division)
{
    float final;
    final=division*(y[0]+(3*y[1])+(3*y[2])+(3*y[3])+y[4]);
    return final;
}

float metodoBoole (float y[], float division)
{
    float final;
    final=division*(7*y[0]+32*y[1]+12*y[2]+32*y[3]+7*y[4]);
    return final;
}
int main()
{
    system("color 1F");
    int opc,i, opcn, menu2, aux2=0;
    float Y[6], a, b, h, aux,pot, R;
    printf("ooooooooo    ooooo    ooooooooo  ooooo   ooooooooo\n 888    88o   888   o888     88   888   888\n 888    888   888   888           888    888oooooo\n 888    888   888   888o     oo   888           888\no888ooo88    o888o   888oooo88   o888o  ooooooo888\n");
    printf("\nBienvenido al programa para resolver integrales\n\nEste programa resuelve integrales definidas mediante metodos numericos. \nSe emplea la version extendida de cada metodo para mayor exactitud.\n\n\n");
    system("PAUSE");
    system("cls");
    do{
    do{
    printf("Calcular el valor por medio de...\n1.- De Puntos\n2.- De Integrales\n0.-Salir del programa\n\nOpcion: ");
    scanf("%d", &opc);
    if(opc>2 || opc<0)
    {
        printf("\nIngrese un valor existente\n\n");
    }
    }while(opc>2 && opc<0);
    switch(opc)
    {
        case 1:
            printf("Ingrese 5 valores de Y a evaluar: ");
            for(i=0;i<5;i++)
            {
                scanf("%f", &Y[i]);
                printf("\n");
            }
            printf("\nAhora defina los limites de su integral:\nLimite inferior: ");
            scanf("%f", &a);
            printf("\nLimite superior: ");
            scanf("%f", &b);
            if(a>b)
            {
                aux=a;
                a=b;
                b=aux;
            }
            h=(b-a)/8;
            R=metodoTrapecio(Y, h);
            printf("\nEl resultado por el metodo del Trapecio es: %f", R);
            h=(b-a)/12,
            R=metodoSimpson1(Y, h);
            printf("\nEl resultado por el metodo de Simpson 1/3 es: %f", R);
            h=(3*(b-a))/32;
            R=metodoSimpson2(Y, h);
            printf("\nEl resultado por el metodo de Simpson 3/8 es: %f", R);
            h=(2*(b-a))/(4*45);
            R=metodoBoole(Y, h);
            printf("\nEl resultado por el metodo de Boole es: %f\n\n", R);
            system("PAUSE");
            system("cls");
            break;
        case 2:
            printf("\nDefina los limites de su integral:\nLimite inferior: ");
            scanf("%f", &a);
            printf("\nLimite superior: ");
            scanf("%f", &b);
            if(a>b)
            {
                aux=a;
                a=b;
                b=aux;
            }
            h=(b-a)/4;
            do{
            do{
            printf("\n\nSeleccione los terminos de la integral: \n1.- x\n2.- sen\n3.- cos\n4.- tan\n5.- sec\n6.- csc\n7.- cot\n8.- e\n9.- ln\n\nOpcion: ");
            scanf("%d", &opcn);
            if(opcn>9)
            {
                printf("\nIngrese una opcion valida.");
            }
            }while(opcn>9 && opcn<0);
            switch(opcn)
            {
            case 1:
                if(aux2==0){
                printf("\nElevado a la potencia...: ");
                scanf("%f", &pot);
                aux=a;
                for(i=0;i<5;i++)
                {
                Y[i]=pow(aux,pot);
                aux+=h;
                }
                 }
                else
                {
                    do{
                    printf("\nRealizando la operacion...\n1.- Suma\n2.- Resta\n3.- Division\n4.- Multiplicacion\n\nOpcion: ");
                    scanf("%d", &menu2);
                    if(menu2<1 || menu2>4)
                    {
                        printf("\nIngrese una opcion valida.");
                    }
                    }while(menu2<1 || menu2>4);
                    switch(menu2)
                    {
                    case 1:
                        printf("\nElevado a la potencia...: ");
                scanf("%f", &pot);
                aux=a;
                for(i=0;i<5;i++)
                {
                Y[i]+=pow(aux, pot);
                aux+=h;
                }
                        break;
                    case 2:
                        printf("\nElevado a la potencia...: ");
                scanf("%f", &pot);
                aux=a;
                for(i=0;i<5;i++)
                {
                Y[i]-=pow(aux, pot);
                aux+=h;
                }
                        break;
                    case 3:
                        printf("\nElevado a la potencia...: ");
                scanf("%f", &pot);
                aux=a;
                for(i=0;i<5;i++)
                {
                     if(aux==0)
                {
                    Y[i]=0;
                    aux+=h;
                }
                else{
                Y[i]/=pow(aux, pot);
                aux+=h;
                }
                }
                        break;
                    case 4:
                        printf("\nElevado a la potencia...: ");
                scanf("%f", &pot);
                aux=a;
                for(i=0;i<5;i++)
                {
                Y[i]*=pow(aux, pot);
                aux+=h;
                }
                        break;
                    }
                }
                break;
            case 2:
                if(aux2==0){
                printf("\nElevado a la potencia...: ");
                scanf("%f", &pot);
                aux=a;
                for(i=0;i<5;i++)
                {
                Y[i]=pow(sin(aux), pot);
                aux+=h;
                }
                 }
                else
                {
                    do{
                    printf("\nRealizando la operacion...\n1.- Suma\n2.- Resta\n3.- Division\n4.- Multiplicacion\n\nOpcion: ");
                    scanf("%d", &menu2);
                    if(menu2<1 || menu2>4)
                    {
                        printf("\nIngrese una opcion valida.");
                    }
                    }while(menu2<1 || menu2>4);
                    switch(menu2)
                    {
                    case 1:
                        printf("\nElevado a la potencia...: ");
                scanf("%f", &pot);
                aux=a;
                for(i=0;i<5;i++)
                {
                Y[i]+=pow(sin(aux), pot);
                aux+=h;
                }
                        break;
                    case 2:
                        printf("\nElevado a la potencia...: ");
                scanf("%f", &pot);
                aux=a;
                for(i=0;i<5;i++)
                {
                Y[i]-=pow(sin(aux), pot);
                aux+=h;
                }
                        break;
                    case 3:
                        printf("\nElevado a la potencia...: ");
                scanf("%f", &pot);
                aux=a;
                for(i=0;i<5;i++)
                {
                Y[i]/=pow(sin(aux), pot);
                aux+=h;
                }
                        break;
                    case 4:
                        printf("\nElevado a la potencia...: ");
                scanf("%f", &pot);
                aux=a;
                for(i=0;i<5;i++)
                {
                Y[i]*=pow(sin(aux), pot);
                aux+=h;
                }
                        break;
                    }
                }
                break;
            case 3:
                if(aux2==0){
                printf("\nElevado a la potencia...: ");
                scanf("%f", &pot);
                aux=a;
                for(i=0;i<5;i++)
                {
                Y[i]=pow(cos(aux), pot);
                aux+=h;
                }
                 }
                else
                {
                    do{
                    printf("\nRealizando la operacion...\n1.- Suma\n2.- Resta\n3.- Division\n4.- Multiplicacion\n\nOpcion: ");
                    scanf("%d", &menu2);
                    if(menu2<1 || menu2>4)
                    {
                        printf("\nIngrese una opcion valida.");
                    }
                    }while(menu2<1 || menu2>4);
                    switch(menu2)
                    {
                    case 1:
                        printf("\nElevado a la potencia...: ");
                scanf("%f", &pot);
                aux=a;
                for(i=0;i<5;i++)
                {
                Y[i]+=pow(cos(aux), pot);
                aux+=h;
                }
                        break;
                    case 2:
                        printf("\nElevado a la potencia...: ");
                scanf("%f", &pot);
                aux=a;
                for(i=0;i<5;i++)
                {
                Y[i]-=pow(cos(aux), pot);
                aux+=h;
                }
                        break;
                    case 3:
                        printf("\nElevado a la potencia...: ");
                scanf("%f", &pot);
                aux=a;
                for(i=0;i<5;i++)
                {
                Y[i]/=pow(cos(aux), pot);
                aux+=h;
                }
                        break;
                    case 4:
                        printf("\nElevado a la potencia...: ");
                scanf("%f", &pot);
                aux=a;
                for(i=0;i<5;i++)
                {
                Y[i]*=pow(cos(aux), pot);
                aux+=h;
                }
                        break;
                    }
                }
                break;
            case 4:
                if(aux2==0){
                printf("\nElevado a la potencia...: ");
                scanf("%f", &pot);
                aux=a;
                for(i=0;i<5;i++)
                {
                Y[i]=pow(tan(aux), pot);
                aux+=h;
                }
                 }
                else
                {
                    do{
                    printf("\nRealizando la operacion...\n1.- Suma\n2.- Resta\n3.- Division\n4.- Multiplicacion\n\nOpcion: ");
                    scanf("%d", &menu2);
                    if(menu2<1 || menu2>4)
                    {
                        printf("\nIngrese una opcion valida.");
                    }
                    }while(menu2<1 || menu2>4);
                    switch(menu2)
                    {
                    case 1:
                        printf("\nElevado a la potencia...: ");
                scanf("%f", &pot);
                aux=a;
                for(i=0;i<5;i++)
                {
                Y[i]+=pow(tan(aux), pot);
                aux+=h;
                }
                        break;
                    case 2:
                        printf("\nElevado a la potencia...: ");
                scanf("%f", &pot);
                aux=a;
                for(i=0;i<5;i++)
                {
                Y[i]-=pow(tan(aux), pot);
                aux+=h;
                }
                        break;
                    case 3:
                        printf("\nElevado a la potencia...: ");
                scanf("%f", &pot);
                aux=a;
                for(i=0;i<5;i++)
                {
                Y[i]/=pow(tan(aux), pot);
                aux+=h;
                }
                        break;
                    case 4:
                        printf("\nElevado a la potencia...: ");
                scanf("%f", &pot);
                aux=a;
                for(i=0;i<5;i++)
                {
                Y[i]*=pow(tan(aux), pot);
                aux+=h;
                }
                        break;
                    }
                }
                break;
            case 5:
                if(aux2==0){
                printf("\nElevado a la potencia...: ");
                scanf("%f", &pot);
                aux=a;
                for(i=0;i<5;i++)
                {
                Y[i]=pow(1/cos(aux), pot);
                aux+=h;
                }
                 }
                else
                {
                    do{
                    printf("\nRealizando la operacion...\n1.- Suma\n2.- Resta\n3.- Division\n4.- Multiplicacion\n\nOpcion: ");
                    scanf("%d", &menu2);
                    if(menu2<1 || menu2>4)
                    {
                        printf("\nIngrese una opcion valida.");
                    }
                    }while(menu2<1 || menu2>4);
                    switch(menu2)
                    {
                    case 1:
                        printf("\nElevado a la potencia...: ");
                scanf("%f", &pot);
                aux=a;
                for(i=0;i<5;i++)
                {
                Y[i]+=pow(1/cos(aux), pot);
                aux+=h;
                }
                        break;
                    case 2:
                        printf("\nElevado a la potencia...: ");
                scanf("%f", &pot);
                aux=a;
                for(i=0;i<5;i++)
                {
                Y[i]-=pow(1/cos(aux), pot);
                aux+=h;
                }
                        break;
                    case 3:
                        printf("\nElevado a la potencia...: ");
                scanf("%f", &pot);
                aux=a;
                for(i=0;i<5;i++)
                {
                Y[i]/=pow(1/cos(aux), pot);
                aux+=h;
                }
                        break;
                    case 4:
                        printf("\nElevado a la potencia...: ");
                scanf("%f", &pot);
                aux=a;
                for(i=0;i<5;i++)
                {
                Y[i]*=pow(1/cos(aux), pot);
                aux+=h;
                }
                        break;
                    }
                }
                break;
            case 6:
                if(aux2==0){
                printf("\nElevado a la potencia...: ");
                scanf("%f", &pot);
                aux=a;
                for(i=0;i<5;i++)
                {
                Y[i]=pow(1/sin(aux), pot);
                aux+=h;
                }
                 }
                else
                {
                    do{
                    printf("\nRealizando la operacion...\n1.- Suma\n2.- Resta\n3.- Division\n4.- Multiplicacion\n\nOpcion: ");
                    scanf("%d", &menu2);
                    if(menu2<1 || menu2>4)
                    {
                        printf("\nIngrese una opcion valida.");
                    }
                    }while(menu2<1 || menu2>4);
                    switch(menu2)
                    {
                    case 1:
                        printf("\nElevado a la potencia...: ");
                scanf("%f", &pot);
                aux=a;
                for(i=0;i<5;i++)
                {
                Y[i]+=pow(1/sin(aux), pot);
                aux+=h;
                }
                        break;
                    case 2:
                        printf("\nElevado a la potencia...: ");
                scanf("%f", &pot);
                aux=a;
                for(i=0;i<5;i++)
                {
                Y[i]-=pow(1/sin(aux), pot);
                aux+=h;
                }
                        break;
                    case 3:
                        printf("\nElevado a la potencia...: ");
                scanf("%f", &pot);
                aux=a;
                for(i=0;i<5;i++)
                {
                Y[i]/=pow(1/sin(aux), pot);
                aux+=h;
                }
                        break;
                    case 4:
                        printf("\nElevado a la potencia...: ");
                scanf("%f", &pot);
                aux=a;
                for(i=0;i<5;i++)
                {
                Y[i]*=pow(1/sin(aux), pot);
                aux+=h;
                }
                        break;
                    }
                }
                break;
            case 7:
                if(aux2==0){
                printf("\nElevado a la potencia...: ");
                scanf("%f", &pot);
                aux=a;
                for(i=0;i<5;i++)
                {
                Y[i]=pow(1/tan(aux), pot);
                aux+=h;
                }
                 }
                else
                {
                    do{
                    printf("\nRealizando la operacion...\n1.- Suma\n2.- Resta\n3.- Division\n4.- Multiplicacion\n\nOpcion: ");
                    scanf("%d", &menu2);
                    if(menu2<1 || menu2>4)
                    {
                        printf("\nIngrese una opcion valida.");
                    }
                    }while(menu2<1 || menu2>4);
                    switch(menu2)
                    {
                    case 1:
                        printf("\nElevado a la potencia...: ");
                scanf("%f", &pot);
                aux=a;
                for(i=0;i<5;i++)
                {
                Y[i]+=pow(1/tan(aux), pot);
                aux+=h;
                }
                        break;
                    case 2:
                        printf("\nElevado a la potencia...: ");
                scanf("%f", &pot);
                aux=a;
                for(i=0;i<5;i++)
                {
                Y[i]-=pow(1/tan(aux), pot);
                aux+=h;
                }
                        break;
                    case 3:
                        printf("\nElevado a la potencia...: ");
                scanf("%f", &pot);
                aux=a;
                for(i=0;i<5;i++)
                {
                Y[i]/=pow(1/tan(aux), pot);
                aux+=h;
                }
                        break;
                    case 4:
                        printf("\nElevado a la potencia...: ");
                scanf("%f", &pot);
                aux=a;
                for(i=0;i<5;i++)
                {
                Y[i]*=pow(1/tan(aux), pot);
                aux+=h;
                }
                        break;
                    }
                }
                break;
            case 8:
                if(aux2==0){
                printf("\nElevado a la potencia...: ");
                scanf("%f", &pot);
                aux=a;
                for(i=0;i<5;i++)
                {
                Y[i]=pow(exp(aux), pot);
                aux+=h;
                }
                 }
                else
                {
                    do{
                    printf("\nRealizando la operacion...\n1.- Suma\n2.- Resta\n3.- Division\n4.- Multiplicacion\n\nOpcion: ");
                    scanf("%d", &menu2);
                    if(menu2<1 || menu2>4)
                    {
                        printf("\nIngrese una opcion valida.");
                    }
                    }while(menu2<1 || menu2>4);
                    switch(menu2)
                    {
                    case 1:
                        printf("\nElevado a la potencia...: ");
                scanf("%f", &pot);
                aux=a;
                for(i=0;i<5;i++)
                {
                Y[i]+=pow(exp(aux), pot);
                aux+=h;
                }
                        break;
                    case 2:
                        printf("\nElevado a la potencia...: ");
                scanf("%f", &pot);
                aux=a;
                for(i=0;i<5;i++)
                {
                Y[i]-=pow(exp(aux), pot);
                aux+=h;
                }
                        break;
                    case 3:
                        printf("\nElevado a la potencia...: ");
                scanf("%f", &pot);
                aux=a;
                for(i=0;i<5;i++)
                {
                Y[i]/=pow(exp(aux), pot);
                aux+=h;
                }
                        break;
                    case 4:
                        printf("\nElevado a la potencia...: ");
                scanf("%f", &pot);
                aux=a;
                for(i=0;i<5;i++)
                {
                Y[i]*=pow(exp(aux), pot);
                aux+=h;
                }
                        break;
                    }
                }
                break;
            case 9:
                if(aux2==0){
                printf("\nElevado a la potencia...: ");
                scanf("%f", &pot);
                aux=a;
                for(i=0;i<5;i++)
                {
                if(aux<=0)
                {
                    Y[i]=0;
                    printf("%f  ", Y[i]);
                    aux+=h;
                }
                else{
                Y[i]=pow(log(aux), pot);
                printf("%f  ", Y[i]);
                aux+=h;
                }
                }
                }
                else
                {
                    do{
                    printf("\nRealizando la operacion...\n1.- Suma\n2.- Resta\n3.- Division\n4.- Multiplicacion\n\nOpcion: ");
                    scanf("%d", &menu2);
                    if(menu2<1 || menu2>4)
                    {
                        printf("\nIngrese una opcion valida.");
                    }
                    }while(menu2<1 || menu2>4);
                    switch(menu2)
                    {
                    case 1:
                        printf("\nElevado a la potencia...: ");
                scanf("%f", &pot);
                aux=a;
                for(i=0;i<5;i++)
                {
                if(aux<=0)
                {
                    Y[i]+=0;
                    aux+=h;
                }
                else{
                Y[i]+=pow(log(aux), pot);
                printf("%f  ", Y[i]);
                aux+=h;
                }
                }
                        break;
                    case 2:
                        printf("\nElevado a la potencia...: ");
                scanf("%f", &pot);
                aux=a;
                for(i=0;i<5;i++)
                {
                if(aux<=0)
                {
                    Y[i]-=0;
                    aux+=h;
                }
                else{
                Y[i]-=pow(log(aux), pot);
                printf("%f  ", Y[i]);
                aux+=h;
                }
                }
                        break;
                    case 3:
                        printf("\nElevado a la potencia...: ");
                scanf("%f", &pot);
                aux=a;
                for(i=0;i<5;i++)
                {
                if(aux<=0)
                {
                    Y[i]=0;
                    aux+=h;
                }
                else{
                Y[i]/=pow(log(aux), pot);
                printf("%f  ", Y[i]);
                aux+=h;
                }
                }
                        break;
                    case 4:
                        printf("\nElevado a la potencia...: ");
                scanf("%f", &pot);
                aux=a;
                for(i=0;i<5;i++)
                {
                if(aux<=0)
                {
                    Y[i]*=0;
                    aux+=h;
                }
                else{
                Y[i]*=pow(log(aux), pot);
                printf("%f  ", Y[i]);
                aux+=h;
                }
                }
                        break;
                    }
                }
                break;
            }
            printf("\n\nDesea agregar otro termino a la integral?\n1.- Si\n2.- No\n\nOpcion: ");
            scanf("%d", &opcn);
            aux2++;
             }while(opcn==1);
            h=(b-a)/8;
            R=metodoTrapecio(Y, h);
            printf("\nEl resultado por el metodo del Trapecio es: %f", R);
            h=(b-a)/12,
            R=metodoSimpson1(Y, h);
            printf("\nEl resultado por el metodo de Simpson 1/3 es: %f", R);
            h=(3*(b-a))/32;
            R=metodoSimpson2(Y, h);
            printf("\nEl resultado por el metodo de Simpson 3/8 es: %f", R);
            h=(2*(b-a))/(4*45);
            R=metodoBoole(Y, h);
            printf("\nEl resultado por el metodo de Boole es: %f\n\n", R);
            system("PAUSE");
            system("cls");
            case 0:
                        printf("\nGRACIAS POR USAR MI PROGRAMA - Edwin Alexis Valdes Melendez\n\n");
                        return 0;
                        break;
    }
}while(opc==1 || opc==2);
    return 0;
}
