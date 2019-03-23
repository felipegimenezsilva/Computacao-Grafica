/*
 * UTFPR PG: 03 - 22 - 2019
 * Felipe Gimenez
 * Classe vetores para comp Grafica
 * vetores de no máx 3 eixos (3D)
 */

#ifndef _CMATH
#define _CMATH
#include <cmath>
#endif

#ifndef _VETOR
#define _VETOR

/*
 * Classe responsável por tratar vetores
 * de um a 3 eixos.
 */
 
template <class tipo> class Vetor
{
	private:
	
	// coordenadas
	tipo x;
	tipo y;
	tipo z;
	
	public:
	
	// retorna valor de get<?>
	tipo getX();
	tipo getY();
	tipo getZ();
	
	// iniciando o Vetor em [1,3]D
	Vetor(tipo x);
	Vetor(tipo x, tipo y);
	Vetor(tipo x, tipo y, tipo z);
	
	// Vetor se torna unitário
	void setUnit();
	
	// retorna norma (magnitude)
	float getMag();
	
	// insere norma (cuidado ao usar <int> )
	void setMag(float norma);
	
	// soma Vetor
	void add(Vetor v2);
	void add(tipo k1);
	void add(tipo k1, tipo k2);
	void add(tipo k1, tipo k2 , tipo k3);
	
	// subratrai vetor
	void sub(Vetor v2);
	void sub(tipo k1);
	void sub(tipo k1, tipo k2);
	void sub(tipo k1, tipo k2 , tipo k3);
	
	// multiplica k pelo Vetor
	void mul(float k);
	
	// copia outro Vetor
	void copy(Vetor vet);
	
	// insere um valor para set<?>
	void setX(tipo x);
	void setY(tipo y);
	void setZ(tipo z);
	void setXY(tipo x, tipo y);
	void setXYZ(tipo x, tipo y, tipo z);
	
};
#endif
