## How to Run:
1.Open UE4 laucher and switch to the study tab, Find the ShooterGame example project.

2.Create a ShooterGame projecct, the name of the project must be ShooterGame.

3.Copy the ShooterGame folder of the github repository to the project you create.

4.Open ShooterGame/Lua projcet, Build the lua lib under X64 config.

5.Right click ShooterGame.uproject and choose Generate visual studio project file.

6.Open ShooterGame.Sln, Run the game under Development Editor config.

7.Open LevelBlueprint in the Editor, add beginEvent, EndEvent, TickEvent.

8.Click Play and Enjoy your game.



##There are two gif to show how to create the project.

### 1.How to create a shootergame project:
![show how to create project](https://github.com/asqbtcupid/asqbtcupid.github.com/blob/master/_image/shootergame.gif?raw=true)

### 2.How to Add levelblueprint Event
![show how to add blueprint event](https://github.com/asqbtcupid/asqbtcupid.github.com/blob/master/_image/addbpevent_shooter.gif?raw=true)

## Some Useful Debug function

1.A\_, output thing to UE4 log, such as A\_("hello world")

2.a\_, output thing to log.txt ,such as a\_("hello world")

3.Q\_, examine an lua data to the log.txt, such as Q\_(\_G)

4.you can change shootercharater.lua or shooterweapon.lua or shooterweapon_instan.lua or shooterweapon_projectile's function code during running.

​
​
## 创建步骤：

1.打开UE4的启动器，切换到学习页签，找到那个叫做shootergame的示例项目

2.创建一个shootergame项目，项目的名字必须是ShooterGame，创建成功后你项目的文件夹就是ShooterGame

3.把github的这个ShooterGame文件夹覆盖到步骤2创建的项目的ShooterGame文件夹

4.打开ShooterGame/Lua下的lua工程，生成64位realease版的lua库

5.右键ShooterGame.uproject选择Generate visual studio project file

6.打开 ShooterGame.Sln，选择Development Editor这个配置，然后运行游戏

7.运行成功后，先打开关卡蓝图，添加beginplay，endplay，tick事件

8.之后就可以点Play打开游戏了

##两个简单的教程gif

### 1.创建一个ShooterGame项目
![show how to create project](https://github.com/asqbtcupid/asqbtcupid.github.com/blob/master/_image/shootergame.gif?raw=true)

### 2.添加蓝图事件
![show how to add blueprint event](https://github.com/asqbtcupid/asqbtcupid.github.com/blob/master/_image/addbpevent_shooter.gif?raw=true)

## 一些有用的函数

1.A\_, 输出文字到 UE4 log, 例如 A\_("hello world")

2.a\_, 输出文字到 log.txt , 例如a\_("hello world")

3.Q\_, 把lua数据变成可读字符串，输出到log.txt, 例如 Q\_(\_G)

4.可以在游戏运行中修改shootercharater.lua、shooterweapon.lua、shooterweapon_instan.lua，shooterweapon_projectile.lua的函数代码，可以热更新。

