#include <cstring> 
string identificarTipo(const char array[]) {
    bool tieneDigitos = false;
    bool tieneLetras = false;
    bool tieneOtros = false;

    
    for (size_t i = 0; i < strlen(array); ++i) {
        char c = array[i];

        
        if (c >= '0' && c <= '9') {
            tieneDigitos = true;
        }
        
        else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            tieneLetras = true;
        }
    
        else {
            tieneOtros = true;
        }
    }

    if (tieneDigitos && !tieneLetras && !tieneOtros) {
        return "Numerica";
    } else if (tieneLetras && !tieneDigitos && !tieneOtros) {
        return "Alfabetica";
    } else if ((tieneLetras || tieneDigitos) && !tieneOtros) {
        return "Alfanumerica";
    } else {
        return "Contiene caracteres no alfanumericos";
    }
}