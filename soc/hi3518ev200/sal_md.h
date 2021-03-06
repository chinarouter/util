
#ifndef __SAL_MD_H__
#define __SAL_MD_H__

#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif

/*
 函 数 名: sal_md_cb
 功能描述: 移动侦测回调函数
 输入参数: 无
 输出参数: precent 每一块检测到运动物体所占的万分比，从左到右，从上至下
            num 块数
            pixel_num 移动的像素数量
 返 回 值: 成功返回0,失败返回小于0
*/
typedef int (*sal_md_cb)(int* precent, int num, int pixel_num);

/*
 函 数 名: sal_md_init
 功能描述: 初始化移动侦测
 输入参数: block_h 水平方向分块数
            block_v 垂直方向分块数
 输出参数: 无
 返 回 值: 成功返回0,失败返回小于0
*/
int sal_md_init(int block_h, int block_v);

/*
 函 数 名: sal_md_exit
 功能描述: 退出移动侦测，释放资源
 输入参数: 无
 输出参数: 无
 返 回 值: 成功返回0,失败返回小于0
*/
int sal_md_exit(void);

/*
 函 数 名: sal_md_set
 功能描述: 设置分块矩阵
 输入参数: block_h 水平方向分块数
            block_v 垂直方向分块数
 输出参数: 无
 返 回 值: 成功返回0,失败返回小于0
*/
int sal_md_set(int block_h, int block_v);

/*
 函 数 名: sal_md_cb_set
 功能描述: 设置移动侦测回调函数
 输入参数: cb 回调函数
 输出参数: 无
 返 回 值: 成功返回0,失败返回小于0
*/
int sal_md_cb_set(sal_md_cb cb);


#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

#endif

