#include "colaLineal.h"
class ColaCircular:public ColaLineal
{
	protected:
		int siguiente(int r)
		{
			return (r+1)%MAXTAMQ;
		}
	public:
		ColaCircular()
		{
			frente=0;
			final=MAXTAMQ-1;
		}
		void insertart(const TipoDeDato& elemento);
		TipoDeDato quitar();
		void borrarCola();
		TipoDeDato frenteCola();
		bool colaVacia();
		bool colaLlena();
}
void ColaCircular::insertart(const TipoDeDato& elemento)
{
	if(!colaLlena())
	{
		
	}
}
