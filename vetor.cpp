/*
 * UTFPR PG: 03 - 22 - 2019
 * Felipe Gimenez
 */

#include "vetor.h"

template class Vetor<int>;
template class Vetor<float>;
template class Vetor<double>;

// retorna valor de x
template <class tipo> 
tipo Vetor<tipo>::getX()
{
	return x;
}

// retorna valor de y
template <class tipo>
tipo Vetor<tipo>::getY()
{
	return y;
}

//	retorna valor de z
template <class tipo>
tipo Vetor<tipo>::getZ()
{
	return z;
}

// iniciando o Vetor 1D
template <class tipo>
Vetor<tipo>::Vetor(tipo x)
{
	this->x = x ;
	y = 0 ;
	z = 0 ;
}

// iniciando o Vetor 2D
template <class tipo>
Vetor<tipo>::Vetor(tipo x, tipo y)
{
	this->x = x ;
	this->y = y ;
	z = 0 ;
}

// iniciando o Vetor 3D
template <class tipo>
Vetor<tipo>::Vetor(tipo x, tipo y, tipo z)
{
	this->x = x ;
	this->y = y ;
	this->z = z ;
}

// retorna norma (magnitude)
template <class tipo>
float Vetor<tipo>::getMag()
{
	// calculando x^2 , y^2 , z^2
	tipo xx = x * x ;
	tipo yy = y * y ;
	tipo zz = z * z ;
	// pitagoritas aqui :D
	float mag = sqrt(xx+yy+zz);
	return mag;
}

// Vetor se torna unitário
template <class tipo>
void Vetor<tipo>::setUnit()
{
	// obtendo tamanho (magnitude) do vet
	float mag = getMag();
	
	// criando Vetor unitário
	x /= mag ;
	y /= mag ;
	z /= mag ;
}

// soma Vetor com vetor2
template <class tipo>
void Vetor<tipo>::add(Vetor v2)
{
	// adicionando Vetor
	x += v2.getX();
	y += v2.getY();
	z += v2.getZ();
}

// soma vetor com (k1 ,0 , 0)
template <class tipo>
void Vetor<tipo>::add(tipo k1)
{
	// adicionando Vetor
	x += k1 ;
}

// soma vetor com (k1 ,k2 ,0)
template <class tipo>
void Vetor<tipo>::add(tipo k1, tipo k2)
{
	// adicionando Vetor
	x += k1 ;
	y += k2 ;
}

// soma Vetor com (k1 ,k2 ,k3)
template <class tipo>
void Vetor<tipo>::add(tipo k1, tipo k2, tipo k3)
{
	// adicionando Vetor
	x += k1 ;
	y += k2 ;
	z += k3 ;
}

// subtrai Vetor com vetor2
template <class tipo>
void Vetor<tipo>::sub(Vetor v2)
{
	// adicionando Vetor
	x -= v2.getX();
	y -= v2.getY();
	z -= v2.getZ();
}

// subtrai Vetor com (k1 ,0 ,0)
template <class tipo>
void Vetor<tipo>::sub(tipo k1)
{
	// adicionando Vetor
	x -= k1;	
}

// subtrai Vetor com (k1 ,k2 ,0)
template <class tipo>
void Vetor<tipo>::sub(tipo k1,tipo k2)
{
	// adicionando Vetor
	x -= k1;
	y -= k2;
}

// subtrai Vetor com (k1 ,k2 ,k3)
template <class tipo>
void Vetor<tipo>::sub(tipo k1,tipo k2,tipo k3)
{
	// adicionando Vetor
	x -= k1;
	y -= k2;
	z -= k3;
}

// multiplica Vetor por uma constante k
template <class tipo>
void Vetor<tipo>::mul(float k)
{
	// tornando Vetor unitario
	setUnit();
	
	// fazendo multiplicação
	x *= k ;
	y *= k ;
	z *= k ;
}

// insere ~= norma (se tipo = int)
template <class tipo>
void Vetor<tipo>::setMag(float norma)
{
	setUnit( );
	mul(norma);
}

// copia outro Vetor
template <class tipo>
void Vetor<tipo>::copy(Vetor vet)
{
	x = vet.getX();
	y = vet.getY();
	z = vet.getZ();	
}

// insere um valor para X
template <class tipo>
void Vetor<tipo>::setX(tipo x)
{
	this->x = x ;
}

// insere um valor para Y
template <class tipo>
void Vetor<tipo>::setY(tipo y)
{
	this->y = y ;
}

// insere um valor para Z
template <class tipo>
void Vetor<tipo>::setZ(tipo z)
{
	this->z = z ;
}

// insere um valor para XY
template <class tipo>
void Vetor<tipo>::setXY(tipo x, tipo y)
{
	this->x = x ;
	this->y = y ;
}

// insere um valor para XYZ
template <class tipo>
void Vetor<tipo>::setXYZ(tipo x, tipo y, tipo z)
{
	this->x = x ;
	this->y = y ;
	this->z = z ;
}
