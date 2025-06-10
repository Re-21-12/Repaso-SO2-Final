# Crear kernel modulo

## Se crear el kernel.c

## Se crea el Makefile

## Compilar el modulo

```
cd /home/w-didnt-work/Desktop/hello-kitty/Kernel
make
```

## Cargar y ejecutar el modulo

```
# Cargar el módulo
sudo insmod hello_module.ko

# Ver los mensajes del kernel
dmesg | tail

# Listar módulos cargados
lsmod | grep hello_module

# Descargar el módulo
sudo rmmod hello_module

# Ver mensajes de descarga
dmesg | tail
```
