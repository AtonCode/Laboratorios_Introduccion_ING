
//Se declara una variable constante para el tousch.
const tSensors touchSensor = (tSensors) S2;

task main()
{
	/*Se crea un ciclo con un wile que este leyendo continueamente el valor del sensor
  con el fin de realizar de poder decidor la direccion de los motores */

  //Si sensor no es precionado entonces avanzar positivo hasta que el estado cambie.
	while(SensorValue(touchSensor) == 0)
	{
		motor[motorC] = 100;
		motor[motorB] = 100;
	}
	//Cuando se detecta que el touch sensor es diferente de 0 esperar 1s.
	wait1Msec(1000);
	//Luego mover los motores en sentido - durante 2seg.
	motor[motorC] = -100;
	motor[motorB] = -100;
	wait1Msec(2000);


}


