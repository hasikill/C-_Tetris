#include "TetrisConst.h"

/*
  �����ȫ
*/
char g_Blocks[BLOCKCOUNT][4][4] =
{
  {
    { 0,1,0,0 },
    { 0,1,0,0 },
    { 0,1,0,0 },
    { 0,1,0,0 }
  }
  ,
  {
    { 1,1 },
    { 1,1 },
  }
  ,
  {
    { 0,1,0 },
    { 0,1,0 },
    { 0,1,1 }
  },
  {
    { 0,1,0},
    { 0,1,1},
    { 0,1,0},
  },
  {
    { 0,1,0 },
    { 0,1,1 },
    { 0,0,1 },
  },
  {
    { 0,0,1 },
    { 0,1,1 },
    { 0,1,0 },
  },
  {
    { 0,1,0 },
    { 0,1,0 },
    { 1,1,0 },
  }
  ,
  {
    {1,1,1},
    {1,1,1},
    {1,1,1},
  }
  ,
  {
    {0,1,0},
    {1,1,1},
    {0,1,0},
  }
  ,
  {
    {0,0,0},
    {1,0,1},
    {1,1,1},
  }
  ,
  {
    {0,1,0},
    {1,1,1},
    {1,1,1},
  }
};

/*
  ÿһ�鷽���size
*/
char g_Block_sizes[BLOCKCOUNT] = 
{ 
  4, 2, 3, 3, 3, 3, 3, 4, 3, 3, 3
};