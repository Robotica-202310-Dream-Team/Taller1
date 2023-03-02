## Taller1

# Introducción a ROS2 Turtlebot2
 
Asegure que su sistema operativo se encuentra actualizado

```sh
sudo apt update && sudo apt upgrade
```

Dentro de su carpeta de trabajo, clone los archivos de este repositorio

```sh
git clone https://github.com/Robotica-202310-Dream-Team/Taller1.git
```

Una vez se finalizó esto último, por favor borrar las carpetas "build", "install", y "log". Luego, construya las dependencias y actualice las variables de entorno

```sh
colcon build && . install/local_setup.bash
```

# Punto 1

Abra una nueva terminal y entre a la carpeta de "turtle_bot_12"

```sh
cd turtle_bot_12
```
Para controlar el robot del entorno de la simulación ejecute

```sh
ros2 run turtle_bot_12 turtle_bot_teleop
```
Acá, se solicitará definir una velocidad lineal y angular respectivamente. Para visualizar que efectivamente se está controlando el sistema, en una nueva terminal corra la simulación de Coppelia. Esta última depende de cómo esté instalada en su respectiva máquina virtual, en el nuestro es

```sh
cd Downloads/Coppelia
```

```sh
./coppeliaSim.sh
```
No se le olvide cargar el entorno de simulación.

# Punto 2

Para correr la interfaz propuesta, en una nueva terminal ejecute dentro su workspace

```sh
. install/local_setup.bash
```

```sh
cd turtle_bot_12
```
Para controlar el robot del entorno de la simulación ejecute

```sh
ros2 run turtle_bot_12 turtle_bot_interface
```

# Punto 3

Para guardar el recorrido el usuario tiene dos opciones. Si no desea guardar, debe escribir acá la palabra *no* dentro del panel "File Name:<>". En el caso contrario, debe hacerlo con el siguiente formato: *Si,<nombre_archivo>*. Una vez se tiene esta condición de frontera, el usuario debe dar click al botón de teleoperar para poder visualizar el movimiento del robot en la interfaz. Por último, para especificar o seleccionar 	la ruta deseada, se debe dar click en *Guardar teleop*.

Una vez se realizó este proceso, la interfaz replicara el movimiento bidimensional del entorno de Coppelia y guardar dicho recorrido con el nombre y ruta deseada. También pude hacer un screenshoot dandole click a dicho botón. ¡Diviértase controlando el robot! :)


# Punto 4

El robot también posee un control autónomo en el que se replica el movimiento. Para poder hacer uso de esta funcionalidad el usuario debe hacer kill a los nodos, tópicos y procesos de la máquina virtual o sistema operativo. De lo contrario, NO funcionará. La simulación de Coppelia puede ser reiniciada directamente desde la interfaz de Ros 2.

Por lo tanto, en una nueva ventana inicialice las variables de entorno y dependencias

```sh
. install/local_setup.bash
```

Una vez se finalice este proceso, corra el nodo que iniciliza el servicio

```sh
ros2 run turtle_bot_12 service
```

El anterior comando debería arrojar que el servicio ya está listo para ser usado en la terminal. Ahora si se puede correr en una nueva venta la interfaz tal y como se mostró en el *Punto 2*. A penas se tenga la interfaz corriendo, dentro del panel "File Name:<>" usted debe especificar el nombre del archivo (.txt) que desea que su robot replique. Por último, dele click en replicar recorrido, la ventana emergente es útil para buscar el lugar en el que se guardó previamente dicho archivo. Vaya a la misma ruta y dele *ok*. 

Al finalizar estos paso, después de un segundo, el robot debería replicar el movimiento del (.txt) dentro de Coppelia y la interfaz. A penas se acabe el movimiento, en la terminal debería aparecer que el robot llegó a su destino. Para comparar guarde el recorrido hecho tal y como se muestra en el *Punto 2*.  Se sugiere hacer dicha comparación en base al punto final y trayectoria mostrada desde la interfaz.
