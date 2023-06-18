

#ifdef __cplusplus
extern "C"
{
#endif

#include "ev3api.h"

/*
 *  各タスクの優先度の定義
 */
#define MAIN_PRIORITY TMIN_APP_TPRI + 1 /* メインタスクの優先度 */

/*
 *  ターゲットに依存する可能性のある定数の定義
 */
#ifndef STACK_SIZE
#define STACK_SIZE 4096 /* タスクのスタックサイズ */
#endif                  /* STACK_SIZE */

/*
 *  関数のプロトタイプ宣言
 */
#ifndef TOPPERS_MACRO_ONLY

    void main_task(intptr_t exinf);

#endif /* TOPPERS_MACRO_ONLY */

#ifdef __cplusplus
}
#endif
