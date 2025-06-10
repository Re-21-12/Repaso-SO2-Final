# En esta ruta hay que crear el service del demon

```
sudo nano /etc/systemd/system/mi-demonio.service
```

## Codigo a colocar en esa ruta

```
[Unit]
Description=Mi demonio personalizado
After=network.target

[Service]
Type=simple
User=w-didnt-work
Group=w-didnt-work
ExecStart=/home/w-didnt-work/Desktop/hello-kitty/Demon/demon.sh
WorkingDirectory=/home/w-didnt-work/Desktop/hello-kitty/Demon/
Restart=always
RestartSec=10

[Install]
WantedBy=multi-user.target

```

## Dar permisos al sh

```
chmod +x /home/w-didnt-work/Desktop/hello-kitty/Demon/demon.sh
```

## Activar servicio

```
sudo systemctl daemon-reload
sudo systemctl enable mi-demonio.service
sudo systemctl start mi-demonio.service
```

## (Opcional) verificar que funciona

```
sudo systemctl status mi-demonio.service
```
