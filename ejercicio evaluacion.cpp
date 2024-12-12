#include<iostream>
#include <iomanip>
using namespace std;
main()
{
char letra;
int  n1;
float calificacion, calificacion2, calificacion3, calificacion4, calificacion5;
double resultado;
	do
	{
	

					cout<<"\t\t\t\t\t\tprograma para ingresar las calificaciones\n";
					cout<<"\n";
					cout<<"¿cuantas calificaiones desea ingresar?\n";
					cout<<"1. 1 calificacion\n";
					cout<<"2. 2 calificaciones\n";
					cout<<"3. 3 calificaciones\n";
					cout<<"4. 4 calificaciones\n";
					cout<<"5. 5 calificaciones\n";
					cin>>n1;
						switch (n1)
						{
						case 1: cout<<"has elegido la opcion 1\n";	
						cout<<"ingresa la calificacionb del estudiante\n";
						cin>>calificacion;
							if(calificacion>=3)
							{
								cout<<"el estudiante aprobo\n";
							}
							else
							{
								cout<<"el estudiante reprobo\n";
							}
						cout<<"escriba s para volver al inicio\n";	
						cin>>letra;
						 
						break;
							
								case 2: cout<<"has elegido la opcion 2\n";
								cout<<"ingresa las calificacion de los 2 estudiantes\n";
								cout<<"estudiante: 1\n";
								cin>>calificacion;
								cout<<"estudiante: 2\n";
								cin>>calificacion2;
								resultado=calificacion+calificacion2;
								resultado=resultado/2;
								cout<<"el promedio de las calificaciones es:\n";
								cout<<resultado<<endl;
									if (calificacion>=resultado)
									{
										cout<<"el estudiante 1 esta por encima del promedio con: "<<calificacion<<endl;
										cout<<calificacion;
									}
									else
									{ 
										if(calificacion2>resultado)
										{
											cout<<"el estudiante 2 esta por encima del promedio con :"<<calificacion2<<endl;
										}
									}
										cout<<"escriba s para volver al inicio\n";	
										cin>>letra;
								break;
								
									case 3: cout<<"has elegido la opcion 3\n";
									cout<<"ingrese la calificacion de los 3 estudiantes\n";
									cout<<"estudiante 1\n";
									cin>>calificacion;
									cout<<"estudiante 2\n";
									cin>>calificacion2;
									cout<<"estudiante 3\n";
									cin>>calificacion3;
									resultado=calificacion + calificacion2 + calificacion3;
									resultado=resultado/3;
									cout<<"el promedio de las notas es de:\n";
									cout<<resultado<<endl;
									if (calificacion>=resultado)
									{
										cout<<"el estudiante 1 esta por encima del promedio con: "<<calificacion<<endl;
										cout<<calificacion;
									}
									else
									{ 
										if(calificacion2>resultado)
										{
											cout<<"el estudiante 2 esta por encima del promedio con :"<<calificacion2<<endl;
										}
										else
										{
											if (calificacion3>resultado)
											{
												cout<<"el estudiante 3 esta por encima del promedio con :"<<calificacion3<<endl;
											}
										}
									}
										cout<<"escriba s para volver al inicio\n";	
										cin>>letra;
									break;
										
									case 4: cout<<"has elegido la opcion 4\n";
									cout<<"ingrese la calificacion de los 4 estudiantes\n";
									cout<<"estudiante 1\n";
									cin>>calificacion;
									cout<<"estudiante 2\n";
									cin>>calificacion2;
									cout<<"estudiante 3\n";
									cin>>calificacion3;
									cout<<"estudiante 4\n";
									cin>>calificacion4;
									resultado=calificacion + calificacion2 + calificacion3 + calificacion4;
									resultado=resultado/4;
									cout<<"el promedio de las notas es de:\n";
									cout<<resultado<<endl;
									if (calificacion>=resultado)
									{
										cout<<"el estudiante 1 esta por encima del promedio con: "<<calificacion<<endl;
										cout<<calificacion;
									}
									else
									{ 
										if(calificacion2>resultado)
										{
											cout<<"el estudiante 2 esta por encima del promedio con :"<<calificacion2<<endl;
										}
										else
										{
											if (calificacion3>resultado)
											{
												cout<<"el estudiante 3 esta por encima del promedio con :"<<calificacion3<<endl;
											}
											else
											{
												if(calificacion4>resultado)
												{
													cout<<"el estudiante 4 esta por encima del promedio con : "<<calificacion4<<endl;
												}
											}
										}
									}
										cout<<"escriba s para volver al inicio\n";	
										cin>>letra;
									break;
									
										case 5: cout<<"has elegido la opcion 5\n";
										cout<<"ingrese la calificacion de los 5 estudiantes\n";
										cout<<"estudiante 1\n";
										cin>>calificacion;
										cout<<"estudiante 2\n";
										cin>>calificacion2;
										cout<<"estudiante 3\n";
										cin>>calificacion3;
										cout<<"estudiante 4\n";
										cin>>calificacion4;
										cout<<"estudiante 5\n";
										cin>>calificacion5;
										resultado=calificacion + calificacion2 + calificacion3 + calificacion4 + calificacion5;
										resultado=resultado/5;
										cout<<"el promedio de las notas es de:\n";
										cout<<resultado<<endl;
										if (calificacion>=resultado)
										{
											cout<<"el estudiante 1 esta por encima del promedio con: "<<calificacion<<endl;
											cout<<calificacion;
										}
										else
										{ 
											if(calificacion2>resultado)
											{
												cout<<"el estudiante 2 esta por encima del promedio con :"<<calificacion2<<endl;
											}
											else
											{
												if (calificacion3>resultado)
												{
													cout<<"el estudiante 3 esta por encima del promedio con :"<<calificacion3<<endl;
												}
												else
												{
													if(calificacion4>resultado)
													{
														cout<<"el estudiante 4 esta por encima del promedio con : "<<calificacion4<<endl;
													}
													else
													{
														if(calificacion5>resultado)
														{
															cout<<"el estudiante 5 esta por encima del promedio con : "<<calificacion5<<endl;
														}
													}
												}
											}
										}
										cout<<"escriba s para volver al inicio\n";	
										cin>>letra;
										break;					
				   		}	
	}	
	while(letra=='s')
	

				
			
			
			
			
			
		
			
	
	
	
	
}
