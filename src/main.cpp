/* 
   ====================================================================
   Materia: Laboratorio de Programación (LPR)
   E.E.S.T. N° 1 "Eduardo Ader" — Vicente López
   Curso: 5° Año
   Profesor: Prof. York Estudiante: Alma Lazarte
   Estudiante: Alma Lazarte
   Archivo: main.cpp
   Objetivo: Calcular el area de un circulo mediante funciones modulares
             y simular una diana de tiro en ASCII.
   ====================================================================
*/
#include <iostream>

using namespace std;

// 1. PROTOTIPO DE LA FUNCIÓN
double calcularAreaCirculo(double radio);

int main() {
    double radioEstudiante;

    cout << "=====================================================" << endl;
    cout << "  CALCULADORA DE AREA MODULAR - ESTUDIANTE: Alma Lazarte  " << endl;
    cout << "=====================================================" << endl;

    cout << "=> Ingrese el radio del circulo/diana (en cm): ";
    cin >> radioEstudiante;

    // VALIDACIÓN DEL RADIO
    if (radioEstudiante <= 0) {
        cout << "[ERROR] El radio debe ser un valor positivo y mayor a cero." << endl;
        return 1;
    }

    // 2. LLAMADA A LA FUNCIÓN
    double areaFinal = calcularAreaCirculo(radioEstudiante);

    // 3. MOSTRAR EL RESULTADO
    cout << "\nEl area del circulo es: " << areaFinal << " cm cuadrados." << endl;

    // BONUS: DIBUJO DE LA DIANA
    cout << "\n[SISTEMA] Dibujando escala de la Diana en la RAM..." << endl;

    if (radioEstudiante <= 5.0) {
        cout << "       .---.       " << endl;
        cout << "      /  X  \\     -> [DIANA MINI / COMPACTA]" << endl;
        cout << "      \\  *  /     " << endl;
        cout << "       '---'       " << endl;
    } else if (radioEstudiante <= 12.0) {
        cout << "       .---.       " << endl;
        cout << "     / .---. \\     " << endl;
        cout << "    | /  O  \\ |   -> [DIANA ESTANDAR DE TIRO]" << endl;
        cout << "    | \\  *  / |    " << endl;
        cout << "     \\ '---' /     " << endl;
        cout << "       '---'       " << endl;
    } else {
        cout << "       .---.       " << endl;
        cout << "     / .---. \\     " << endl;
        cout << "    | / .-. \\ |    " << endl;
        cout << "    | |  X  | |   -> [DIANA GIGANTE DE COBERTURA]" << endl;
        cout << "    | \\ '-' / |    " << endl;
        cout << "     \\ '---' /     " << endl;
        cout << "       '---'       " << endl;
    }

    cout << "=====================================================" << endl;

    return 0;
}

// 4. DEFINICIÓN DE LA FUNCIÓN
double calcularAreaCirculo(double r) {
    const double PI = 3.1415926535;

    double area = PI * r * r;

    return area;
}