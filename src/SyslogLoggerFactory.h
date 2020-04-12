/*!------------------------------------------------
@file       SyslogLoggerFactory.h
@brief      
@attention  なし
--------------------------------------------------*/

#ifndef SYSLOGLOGGERFACTORY_H_
#define SYSLOGLOGGERFACTORY_H_

// インクルードファイル ================================
#include "LoggerFactory.h"

// クラスの前方宣言 ====================================

// マクロの宣言 ========================================

// 型の宣言 ============================================

// クラス定義 ==========================================
/*!--------------------------------------------------
@class       SyslogLoggerFactory.h
@brief      
@note       
@attention  なし
@see        なし
--------------------------------------------------*/
class SyslogLoggerFactory : public LoggerFactory {
 public:
  //! Constructor
  SyslogLoggerFactory();
  //! Destructor
  virtual ~SyslogLoggerFactory();

 protected:
 private:
};

#endif  // SYSLOGLOGGERFACTORY_H_
