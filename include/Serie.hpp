#pragma once
#include <iostream>
#include "foco.hpp"

class Serie
{
private:
    Foco* focos;        // Arreglo dinámico de objetos Foco
    size_t numFocos;    // Número de Focos

public:
    // Constructor
    Serie(size_t cantidad = 10) : numFocos(cantidad)
    {
        focos = new Foco[numFocos];
    }

    // Destructor
    ~Serie() 
    {
        delete[] focos;
    }

    // Enciende todos los focos
    void EncenderTodo()
    {
        this->EncenderCantidad(numFocos);
    }

    // Enciende una cantidad específica de focos
    void EncenderCantidad(size_t cantidad)
    {
        for (size_t i = 0; i < cantidad && i < numFocos; i++)
        {
            focos[i].Encender();
        }
    }

    // Recorrer los focos de derecha a izquierda
    void RecorrerDerecha()
    {
        for (size_t i = numFocos; i-- > 0;)
        {
            std::cout << "Recorriendo foco " << i << std::endl;
        }
    }

    // Apaga todos los focos
    void ApagarTodo()
    {
        for (size_t i = 0; i < numFocos; i++)
        {
            focos[i].Apagar();
        }
    }

    // Imprime el estado de todos los focos
    void Imprimir()
    {
        for (size_t i = 0; i < numFocos; i++)
        {
            std::cout << focos[i].LeerEstado() << " ";
        }
        std::cout << std::endl;
    }
};
