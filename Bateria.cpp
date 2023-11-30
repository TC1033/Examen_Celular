
#include "Bateria.hpp"
// ===============
// implementations

Bateria::Bateria(){
   //implementa el constructor default inicializando (voltaje: 6.5 marca: "patito")
}

Bateria::Bateria(double v, std::string m):marca{m}{
   //vamos a cambiar el dato de voltaje con el setter porque éste tendrá validación
   // No le muevas nada, ya está listo
   setVoltaje(v)
}

// Implementa los getters


// Implementa el setter de voltaje, el voltaje sólo puede estar entre 6.5 y 12.0, 
// si no te dan un voltaje en ese rango inicalizas a 6.5




// Implementa el setter marca



// Implementa el imprime, que se despliegue a pantalla los datos en el formato que tu elijas


// Implementa el método iguales, para que una bateria sea igual a otra es porque voltaje y la marca son iguales.
