/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos                                    *
* NRC: 2967                                                       *
******************************************************************/

#include "Raiz.h"
#include "Formula.h"

////////////////////////////////////////////////////////////////////////
// Name:       Formula::Formula()
// Purpose:    Implementation of Formula::Formula()
// Return:     
////////////////////////////////////////////////////////////////////////

Formula::Formula()
{
}

////////////////////////////////////////////////////////////////////////
// Name:       Formula::getNum1()
// Purpose:    Implementation of Formula::getNum1()
// Return:     float
////////////////////////////////////////////////////////////////////////

float Formula::getNum1(void)
{
   return num1;
}

////////////////////////////////////////////////////////////////////////
// Name:       Formula::setNum1(float newNum1)
// Purpose:    Implementation of Formula::setNum1()
// Parameters:
// - newNum1
// Return:     void
////////////////////////////////////////////////////////////////////////

void Formula::setNum1(float newNum1)
{
   num1 = newNum1;
}

////////////////////////////////////////////////////////////////////////
// Name:       Formula::getNum2()
// Purpose:    Implementation of Formula::getNum2()
// Return:     float
////////////////////////////////////////////////////////////////////////

float Formula::getNum2(void)
{
   return num2;
}

////////////////////////////////////////////////////////////////////////
// Name:       Formula::setNum2(float newNum2)
// Purpose:    Implementation of Formula::setNum2()
// Parameters:
// - newNum2
// Return:     void
////////////////////////////////////////////////////////////////////////

void Formula::setNum2(float newNum2)
{
   num2 = newNum2;
}

////////////////////////////////////////////////////////////////////////
// Name:       Formula::getNum3()
// Purpose:    Implementation of Formula::getNum3()
// Return:     float
////////////////////////////////////////////////////////////////////////

float Formula::getNum3(void)
{
   return num3;
}

////////////////////////////////////////////////////////////////////////
// Name:       Formula::setNum3(float newNum3)
// Purpose:    Implementation of Formula::setNum3()
// Parameters:
// - newNum3
// Return:     void
////////////////////////////////////////////////////////////////////////

void Formula::setNum3(float newNum3)
{
   num3 = newNum3;
}
