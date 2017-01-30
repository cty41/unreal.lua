## How to Run:
1.Create a firstperson shoot template projcet, the name of the project must be "FirstPerson".

2.Copy the FirstPerson folder of the github repository to the project you create.

3.Build the lua lib under X64 config.

4.Right click FirstPerson.uproject and choose Generate visual studio project file.

5.Open FirstPerson.sln, Run the game under Development Editor config.

6.Open LevelBlueprint in the Editor, add beginEvent, EndEvent, TickEvent.

7.Click play and Enjoy your game.




## There are two gif to show how to create the project.

### 1.How to create a fristperson shoot template project:
![show how to create project](https://github.com/asqbtcupid/asqbtcupid.github.com/blob/master/_image/firstperson.gif?raw=true)

### 2.How to Add levelblueprint Event
![show how to add blueprint event](https://github.com/asqbtcupid/asqbtcupid.github.com/blob/master/_image/addbpevent_fp.gif?raw=true)
​
​
## Some Useful Debug function

1.A\_, output thing to UE4 log, such as A\_("hello world")

2.a\_, output thing to log.txt ,such as a\_("hello world")

3.Q\_, examine an lua data to the log.txt, such as Q\_(\_G)

4.you can change luacharacter.lua and luaprojectile.lua's function code during running.


## 创建步骤：
1.创建一个c++第一个人称模板项目，项目名称必须是FirstPerson

2.把github的FirstPerson文件夹覆盖到你创建的FirstPerson项目文件夹

3.进入FirstPerson/Lua打开Lua.sln，build一个release版的x64的lua库

4.右键ShooterGame.uproject选择Generate visual studio project file

5.打开FirstPerson.sln，选择Development Editor配置，运行

6.打开关卡蓝图，添加beginplay，endplay，tick事件

7.运行游戏

## 动图教程
### 1.创建FirstPerson项目
![show how to create project](https://github.com/asqbtcupid/asqbtcupid.github.com/blob/master/_image/firstperson.gif?raw=true)
​
### 2.添加蓝图事件
![show how to add blueprint event](https://github.com/asqbtcupid/asqbtcupid.github.com/blob/master/_image/addbpevent_fp.gif?raw=true)

## 一些有用的函数

1.A\_, 输出文字到 UE4 log, 例如 A\_("hello world")

2.a\_, 输出文字到 log.txt , 例如a\_("hello world")

3.Q\_, 把lua数据变成可读字符串，输出到log.txt, 例如 Q\_(\_G)

4.可以在游戏运行中修改luacharacter.lua和luaprojectile.lua的函数代码，可以热更新。
