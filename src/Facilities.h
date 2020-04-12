/*!------------------------------------------------
@file       Facilities.h
@brief      
@attention  なし
--------------------------------------------------*/

#ifndef FACILITIES_H_
#define FACILITIES_H_

// インクルードファイル ================================
#include <syslog.h>

// クラスの前方宣言 ====================================

// マクロの宣言 ========================================

// 型の宣言 ============================================
enum Facilities {
LOCAL1 = LOG_LOCAL1,
LOCAL2 = LOG_LOCAL2,
LOCAL3 = LOG_LOCAL3,
LOCAL4 = LOG_LOCAL4,
LOCAL5 = LOG_LOCAL5,
LOCAL6 = LOG_LOCAL6
};

#endif

