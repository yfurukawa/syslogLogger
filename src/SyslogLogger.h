/*!------------------------------------------------
@file       SyslogLogger.h
@brief      
@attention  なし
--------------------------------------------------*/

#ifndef SYSLOGLOGGER_H_
#define SYSLOGLOGGER_H_

// インクルードファイル ================================
#include "Logger.h"

// クラスの前方宣言 ====================================

// マクロの宣言 ========================================

// 型の宣言 ============================================

// クラス定義 ==========================================
/*!--------------------------------------------------
@class       SyslogLogger.h
@brief      
@note       
@attention  なし
@see        なし
--------------------------------------------------*/
class SyslogLogger  : public Logger {
 public:
  //! Constructor
  SyslogLogger();
  //! Destructor
  virtual ~SyslogLogger();

 protected:
 private:
};

#endif  // SYSLOGLOGGER_H_
