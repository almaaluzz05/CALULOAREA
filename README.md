# 🎯 CALCULOAREA - Calculadora Modular de Área y Diana ASCII

**Materia:** Laboratorio de Programación (LPR)  
**Institución:** E.E.S.T. N.º 1 "Eduardo Ader" — Vicente López  
**Curso:** 5° año 3° (Grupos A-B)  
**Profesor:** Mansilla Muñoz York Elías  
**Estudiante:** Alma Lazarte

---

## 📋 Descripción del Proyecto

Este proyecto aplica los principios de **Programación Estructurada**, **Modularización** y **Diseño Top-Down** en lenguaje **C++**. El programa recibe el radio de un círculo ingresado por el usuario, valida que el dato geométrico sea correcto, calcula su área mediante una función dedicada (\(A = \pi \cdot r^2\)) y renderiza una escala visual en arte ASCII de una diana de tiro proporcional al tamaño ingresado.

### Características Principales:
* **Enfoque Modular:** Separación de responsabilidades mediante prototipos, invocación y definición de funciones (`calcularAreaCirculo`).
* **Protección de Memoria:** Uso de constantes inmutables (`const double PI`) para asegurar valores matemáticos críticos en la memoria RAM.
* **Filtro de Consistencia:** Validación de entrada para rechazar valores nulos o negativos (`radio <= 0`).
* **Gamificación en Consola:** Simulación gráfica en texto (ASCII) de tres tamaños de dianas (Mini, Estándar y Gigante) según el radio calculado.

---

## 📂 Estructura del Repositorio

El proyecto sigue el estándar de organización requerido para el control de versiones:

```text
/calculoarea/
├── .gitignore                        # Exclusiones de configuración (.vscode) y ejecutables
├── LICENSE                           # Archivo de licencia MIT (Uso escolar)
├── README.md                         # Documentación técnica del proyecto
├── docs/
│   └── InformeProyectoCALCULOAREA.pdf # Informe final en Normas APA v7 + Cuestionario
├── src/
│   └── main.cpp                      # Código fuente modular en C++
└── capturas/
    ├── compilacion_area.png          # Evidencia de compilación y ejecución en terminal
    └── diagrama_flujo.png            # Diagrama de flujo lógico del programa
```

---

## 🚀 Compilación y Ejecución

### Opción 1: Entorno Local (Windows 10/11 con VS Code y MinGW/MSYS2)
Abrí la terminal integrada (`Ctrl + Ñ`) ubicada en la raíz de la carpeta `CALCULOAREA` y ejecutá los siguientes comandos:

1. **Para compilar el código fuente:**
   ```powershell
   g++ src/main.cpp -o src/area.exe
   ```

2. **Para ejecutar la aplicación:**
   ```powershell
   .\src\area.exe
   ```

### Opción 2: Compilador Online (Equipos sin permisos de administrador)
Si trabajás en una computadora con restricciones de instalación local:
1. Copiá el contenido de `src/main.cpp`.
2. Pegalo en [OnlineGDB C++ Compiler](https://onlinegdb.com).
3. Presioná **Run** (F9) para compilar e interactuar con la consola.

---

## 📄 Licencia

Este proyecto se distribuye bajo la licencia **MIT** para fines estrictamente educativos y académicos.
