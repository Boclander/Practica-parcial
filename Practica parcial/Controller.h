#ifndef Controller

void menu(sAlumno listadoAlumnos[], int tamAlumnos, sLocalidad listadoLocalidades[], int tamLocalidadles);
int getEntero(int* pNum,int reint,char* msg,char* msgError,int maximo,int minimo);
int getNumeroDecimal(float *pNum, int reint, char* msg, char* msgError,float maximo,float minimo);
int getString(char* pBufferString,int limite);


#endif // Controller
