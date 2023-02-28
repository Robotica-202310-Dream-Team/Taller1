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

