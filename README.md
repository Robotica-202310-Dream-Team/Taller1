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
Aca, se solicitará definir una velocidad lineal y angular respectivamente. Para visualizar que efectivamente se está controlando el sistema, en una nueva terminal corra la simulación de Coppelia. Esta última depende de como esté instalada en su respectiva maquina virtual, en el nuestro es

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

Para guardar el recorrido, dentro del panel "File Name:<>" el usuario tiene dos opciones. Si no desea guardar unicamente debe escribir aca la palabra *no*. Sin embargo, si este desea guardar el archivo debe hacerlo con el siguinte formato: *Si,<nombre_archivo>*. Luego, una vez se tienen estas condiciones de frontera, el usuario debe dar click al boton de teleoperar para poder visualiar el movimiento del robot en la interfaz. Por último, para especificar o soleccionar la ruta deseada se debe dar click en *Guardar teleop*.

Una vez se realizó este proceso, la interfaz replicara el movimiento bidimensiosal del entorno de Coppelia y guardar dicho recorrido con el nombre y ruta deseada. ¡Diviertase controlando el robot! :)

# Punto 4
