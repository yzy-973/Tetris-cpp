/*
开发日志
1.创建项目
2.先导入素材(res)
3.C++开发
4.设计C++项目的模块——设计类:Block 表示方块 Tetris 表示俄罗斯方块游戏
5.设计各个模块的主要接口

*/
#include "Tetris.h"
int main()
{
	Tetris game(20, 10, 263, 133, 36);
	//行，列，左侧边界，顶部边界，方块大小
	game.play();
	return 0;
}