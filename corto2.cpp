#include <iostream>
using namespace std;
int main (){
     int edad,  categoria;
    char productoE, productoP, productoT; 
    float precio, descuento, total, restante;
    
    cout << "Ingrese su edad" <<endl;
    cin >> edad;
    if (edad<16){
        cout <<"No fue posible realizar la compra";
    }
    else{
        cout <<"Ingrese su categoría" <<endl;
        cout <<"1 Para estudiante"<<end;
        cout <<"2 para profecional" <<endl;
        cout <<"3 mostrar todo" <<endl;
        cin >> categoria;
        switch (categoria){
            case 1:
                cout << "Para estudiantes descuentos de 20%"<<endl;
                cout << "Productos disponibles:"<<endl; 
                cout <<"a Laptop básica"<<endl;
                cout <<"b Tablet estudiantil"<<endl;
                cout <<"c Chromebook"<<endl;
                cin >> productoE;
                switch (productoE){
                    case 'a':
                        precio = 900;
                        cout << "Laptop básica $" <<precio <<endl;
                        descuento = (precio*0.2);
                        break;
                    case 'b':
                        precio = 600;
                        cout << "Tablet estudiantil $"<<precio <<endl;
                        descuento = (precio*0.2);
                        break;
                    case 'c':
                        precio = 700;
                        cout << "Chromebook $" <<precio <<endl;
                        descuento = (precio*0.2);
                        break;
                    default:
                        cout <<"ingrese un dato valido";
                        break;
                }
                break;
            case 2:
                cout << "Para Profesional con descuento de 20%"<<endl;
                cout << "Productos disponibles:" <<endl;
                cout <<"a Laptop avanzada" <<endl; 
                cout <<"b Tablet Pro"<<endl;
                cout <<"c Estacion de trabajo"<<endl;
                cin >> productoP;
                switch (productoP){
                    case 'a':
                        precio = 1500;
                        cout << "Laptop avanzada $" <<precio <<endl;
                        descuento = precio*0.1;
                        break;
                    case 'b':
                        precio = 1200;
                        cout << "Tablet Pro $"<<precio <<endl;
                        descuento = precio*0.1;
                        break;
                    case 'c':
                        precio = 2000;
                        cout << "Estacion de trabajo $" <<precio <<endl;
                        descuento = precio*0.1;
                        break;
                    default:
                        cout <<"ingrese un dato valido";
                        break;
                }
                break;
            case 3:
                cout << "Todos los productos disponibles"<<endl;
                cout << "Productos disponibles:" <<endl; 
                cout <<"a Laptop básica" <<endl; 
                cout <<"b Tablet estudiantil"<<endl;
                cout <<"c Chromebook" <<endl;
                cout <<"d Laptop avanzada" <<endl;
                cout <<"e Tablet Pro" <<endl;
                cout <<"f Estacion de trabajo"<<endl;
                cin >> productoT;
                switch (productoT){
                    case 'a':
                        precio = 900;
                        cout << "Laptop básica $" <<precio <<endl;
                        descuento =0;
                        break;
                    case 'b':
                        precio = 600;
                        cout << "Tablet estudiantil $"<<precio <<endl;
                        descuento=0;
                        break;
                    case 'c':
                        precio = 700;
                        cout << "Chromebook $" <<precio <<endl;
                        descuento=0;
                        break;
                    case 'd':
                        precio = 1500;
                        cout << "Laptop avanzada $" <<precio <<endl;
                        descuento=0;
                        break;
                    case 'e':
                        precio = 1200;
                        cout << "Tablet Pro $"<<precio <<endl;
                        descuento=0;
                        break;
                    case 'f':
                        precio = 2000;
                        cout << "Estacion de trabajo $" <<precio <<endl;
                        descuento=0;
                        break;
                    default:
                        cout <<"ingrese un dato valido";
                        break;
                    }
                break;
            default:
                cout << "ingrese un dato valido";
                break;
            }
            total=precio-descuento;
            cout <<"Saldo disponible: $1000";
            if (total < 1000){
                restante = total-1000;
                cout <<"Compra exitosa"<<endl;
                cout <<"Saldo restante: $"<<restante;
            }else{
                cout <<"No fue posible realizar la compra"<<endl;
                cout <<"Le faltaron $" <<total-1000;
            }
        }
       return 0;
    } 


