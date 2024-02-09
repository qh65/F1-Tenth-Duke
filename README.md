# F1-Tenth-Duke
The repository contains all documentation belonging to the F1 Tenth team at Duke University, located in NC, USA. Copyright is held by Duke University, specifically for instructions and other accompanying materials. However, the code is open-source. :)

# Things to keep in mind for all future users
1. SLOW DOWN! At the time point we built the car, this car values around $4000 and 100+ hours work. The Hokuyo LiDar is $1600, Jetson without SSD and Wifi module is $600, VESC is $300. Therefore, SLOW DOWN and be CAREFUL! We fully understand robotics guys are "crazy" like us. :)
2. Check the environment first. Avoid GLASS, CHAIRS, ANYTHING IT MIGHT GO UNDER! Those things are Lidar killer, because Lidar is using light and it is almost a 2D sensor. 
3. Understand what are you doing and what will happen. Simulation is your best friend! If something didn't work on simulation, it would not work in reality. If the behavior is totally different with your expection, you need to study more!

## Information of NX account
Account on NX: f1tenth  
PIN: 123456  
Registered IP address with Dukeblue Wifi：10.197.0.48

## SSH to NX
```bash
$ ssh -X f1tenth@10.197.0.48
```


## Menu
- [Build](/Build.md)
- [Configuring the NVIDIA Jetson NX](/optional_software_nx.rst)
- [Connecting the Pit/Host and the NVIDIA Jetson NX]
- [Hokuyo 10LX Ethernet Connection Setup](/Hokuyo_Lidar/Hokuyo.md)
- [Configuring the VESC](/VESC/VESC_config.md)


