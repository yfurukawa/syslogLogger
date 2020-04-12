/*!------------------------------------------------
@file       Levels.h
@brief      
@attention  なし
--------------------------------------------------*/

#ifndef LEVELS_H_
#define LEVELS_H_

// インクルードファイル ================================

// クラスの前方宣言 ====================================

// マクロの宣言 ========================================

// 型の宣言 ============================================
enum Levels {
ALERT = LOG_ALERT,
CRIT = LOG_CRIT,
ERR = LOG_ERR,
WARNING = LOG_WARNING,
NOTICE = LOG_NOTICE,
INFO = LOG_INFO,
DEBUG = LOG_DEBUG
};


#endif  // LEVELS_H_
