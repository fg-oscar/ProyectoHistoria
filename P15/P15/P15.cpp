#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <time.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    bool option, flag=true;
    system("color f3");
    do {
        system("cls");
        cout << "\n\t Te despiesrtas un dia a las 6:30am para ir a la escuela...\n";
        cout << "\n\t 0.- Decides quedarte dormido 5 minutos mas\n\t"
            << " 1.- Te levantas y comienzas el dia\n";
        cin >> option;
        if (option) {// if option = 1.- Te levantas y comienzas el dia
            system("cls");
            cout << "\n\t Te levantas de la cama y no sabes si bañarte o solo cambiarte...\n";
            cout << "\n\t 0.- Decides solo cambiarte"
                << "\n\t 1.- Decides meterte a bañar\n";
            cin >> option;
            if (option) {// if option = 1.- Decides meterte a bañar
                system("cls");
                cout << "\n\t Te metiste a bañar y estas listo para inicir el dia, es hora de esocger el outfit...\n";
                cout << "\n\t 0.- Escoges el outfit que mas te gusta pero es incomodo"
                    << "\n\t 1.- Escoges el outfit que es mas comodo pero es mas informal\n";
                cin >> option;
                if (option) {// if option = 1. - Escoges el outfit que es mas comodo pero es mas informal
                    system("cls");
                    cout << "\n\t Sales de tu casa muy comodx rumbo a la escuela, llegas a la escuela y te das cuenta de que...\n";
                    cout << "\n\t 0.- Era dia de ropa formal para presentar proyectos y tu vas informal..."
                        << "\n\t 1.- Esta cerrada por que es dia no laboral\n";
                    cin >> option;
                    if (!option) {// if option = 0.- Era dia de ropa formal para presentar proyectos y tu vas informal...
                        system("cls");
                        cout << "\n\t Te regresaron a tu casa por que no ibas presentable... -Carita triste-\n";
                        system("pause");
                    }
                    else {// else option = 1.- Esta cerrada por que es dia no laboral
                        system("cls");
                        cout << "\n\t Sufres por que te levantaste temprano y no valio la pena... -carita triste\n";
                        system("pause");
                    }
                }
                else {// else C option = 0.- Escoges el outfit que mas te gusta pero es incomodo
                    system("cls");
                    cout << "\n\t Sales de tu casa un poco incomodo por el conjunto que llevas \n\tpuesto a esperar el camion,"
                        <<" pasa pero esta muy lleno...\n";
                    cout << "\n\t 0.- Decides esperar otro sabiendo que pasa cada 30 minutos"
                        <<"\n\t 1.- Pides la parada y te subes a ese camion muy lleno\n";
                    cin >> option;
                    if (option) {// if D option 1
                        system("cls");
                        cout << "\n\t El camion estaba muy lleno y por lo incomodo del traje te caiste y llegaste tarde a la escuela\n";
                        system("pause");
                    }
                    else {// else D
                        system("cls");
                        cout << "\n\t El camion tardo mas de lo normal y a pesar de levnatarse temprano llegaste tarde a la escuela\n";
                        system("pause");
                    }
                }
            }
            else {// else B option = 0.- Decides solo cambiarte
                system("cls");
                cout << "\n\t Eliges la primera opcion que se te presenta para vestirte,"
                    << "\n\t bajas a la cocina para desayunar...\n";
                cout << "\n\t 0.- Escoges un desayuno ligero, fruta y un pequeño cereal. "
                    << "\n\t 1.- Aprovechas el tiempo que llevas de sobra preparas cafe, huevos revueltos," 
                    << "\n\t un gran desyuno!\n";
                cin >> option;
                if (option) {// if C option = 1
                    system("cls");
                    cout << "\n\t Terminas y tomas rumbo a la escuela a lo largo del dia notas malestar en el estomago...\n";
                    cout << "\n\t 0.- Lo dejas pasar al rato ya no se sentira nada"
                        << "\n\t 1.-Decides ir a enfermeria a tomar algo para el dolor";
                    cin >> option;
                    if (option) {// if option = 1
                        system("cls");
                        cout << "\n\t Bien hecho tendras un dia excelente!\n";
                        system("pause");
                    }
                    else {// else D
                        system("cls");
                        cout << "\n\t Error! a la hora estas retorciendote de dolor y te tienes que regresar a tu casa!\n";
                        system("pause");
                    }
                }
                else {// else C
                    system("cls");
                    cout << "\n\t Vas con tiempo de sobra hoy pinta ser un buen dia ya que desde temprano "
                        << "\n\t tienes buena actitud y tomaste buenas desiciones!\n";
                    system("pause");
                }
            }
        }
        else {// option = 0.- Decides quedarte dormido 5 minutos mas
            system("cls");
            cout << "\n\t 5 minutos se convirtieron en 30 minutos y ahora vas tarde te levantas todo acelerado...\n";
            cout << "\n\t 0.- decides darte un baño rapido\n\t 1.- Decides vestirte y salir corriendo\n";
            cin >> option;
            if (option) {// if B
                system("cls");
                cout << "\n\t NO desayunas con tal de ahorrar tiempo y tratar de llegar"
                    << "\n\tvolteas a ver el reloj y te das cuenta que tienes el timepo justo...\n";
                cout << "\n\t 0.- Decides esperar el camion\n\t 1.- Decides pedir un Uber con tal de llegar a tiempo\n";
                cin >> option;
                if (option) {// if C
                    system("cls");
                    cout << "\n\t Paso el camion justo a tiempo y llegaste a tiempo a la escuela"
                        << "\n\tpero te enteras que el maestro de la primer clase no alcanzara a llegar\n";
                    system("pause");
                }
                else {// else C
                    system("cls");
                    cout << "\n\t El uber te cobro un monto exagerado pero llegaste temprano y con tiempo de sobra\n";
                    system("pause");
                }
            }
            else {// else B
                system("cls");
                cout << "\n\t Por bañarte a las carreras te tropiezas en el baño y no hay donde detenerse...\n";
                cout << "\n\t 0.- Te pegaste en la cabeza\n\t 1.- Te cayeron varias cosas encima por tratar de detener la caida\n";
                cin >> option;
                if (!option) {// option = 0.- Te pegaste en la cabeza
                    system("cls");
                    cout << "\n\t Tu escucho el golpe subio a verte y te encontro desmayado... despertaras hasta mañana\n";
                    system("pause");
                }
                else {// option = 1.- Te cayeron varias cosas encima por tratar de detener la caida
                    system("cls");
                    cout << "\n\t Te duele mucho el brazo,"
                        << "\n\t Te llevan al hospital a sacar una radiografia\n";
                    cout << "\n\t 0.- Es fractura y requiere operacion... \n\t 1.- Es solo un esguince\n";
                    cin >> option;
                    if (!option) {//option = 0.- Es fractura y requiere operacion...
                        system("cls");
                        cout << "\n\t Te operan en ese rato haz perdido 2 parciales por domrir de mas\n";
                        system("pause");
                    }
                    else {//option = 1.- Es solo un esguince
                        system("cls");
                        cout << "\n\t Tuviste suerte para la otra no corras a la escuela\n";
                        system("pause");
                    }
                }
            }
        }
        system("cls");
        cout << "\t\n Volver a jugar?\n"
            <<"\t\n0.-SI\t\n1.-NO\n";
        cin >> flag;
    }while (!flag);
    return 0;
}
