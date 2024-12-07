//
// Created by victo on 07/12/2024.
//

#include "ejercicio1.h"
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
namespace Matematicas {
    int suma(int a, int b) {
        return a + b;
    }
    int resta(int a, int b) {
        return a - b;
    }
}

int main() {
    std::cout << "Suma: " << Matematicas::suma(5, 3) << std::endl;
    std::cout << "Resta: " << Matematicas::resta(5, 3) << std::endl;
    return 0;
}