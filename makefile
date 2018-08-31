output: main.o Cliente.o ClienteEmpresarial.o ClienteIndividual.o ClienteInternacional.o ClienteNacional.o Plantas.o PlantaSencilla.o PlantasMixtas.o PlantasPrivadas.o PlantasPublicas.o
	g++ main.o Cliente.o ClienteEmpresarial.o ClienteIndividual.o ClienteInternacional.o ClienteNacional.o Plantas.o PlantaSencilla.o PlantasMixtas.o PlantasPrivadas.o PlantasPublicas.o -o Output
main.o:	main.cpp
	g++ -c main.cpp
Cliente.o:	Cliente.h Cliente.o
	g++ -c Cliente.cpp
ClienteEmpresarial.o:	ClienteEmpresarial.h ClienteEmpresarial.cpp
	g++ -c ClienteEmpresarial.cpp
ClienteIndividual.o:	ClienteIndividual.h ClienteIndividual.cpp
	g++ -c ClienteIndividual.cpp
ClienteInternacional.o:	ClienteInternacional.h ClienteInternacional.cpp
	g++ -c ClienteInternacional.cpp
ClienteNacional.o:	ClienteNacional.h ClienteNacional.cpp
	g++ -c ClienteNacional.cpp
plantas.o:	Plantas.h Plantas.cpp
	g++ -c Plantas.cpp
PlantaSencilla.o:	PlantaSencilla.h PlantaSencilla.cpp
	g++ -c PlantaSencilla.cpp
PlantasMixtas.o:	PlantasMixtas.h PlantasMixtas.cpp
	g++ -c PlantasMixtas.cpp
PlantasPrivadas.o: PlantasPrivadas.h PlantasPrivadas.cpp
	g++ -c PlantasPrivadas.cpp
PlantasPublicas.o:	PlantasPublicas.h PlantasPublicas.cpp
	g++ -c PlantasPublicas.cpp