/*!------------------------------------------------
@file       SyslogLoggerFactory.h
@brief      
@attention  なし
--------------------------------------------------*/

#ifndef SYSLOGLOGGERFACTORY_H_
#define SYSLOGLOGGERFACTORY_H_

// インクルードファイル ================================
#include "LoggerFactory.h"
#include "SyslogLogger.h"

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
  SyslogLoggerFactory() {
    SyslogLoggerFactory::destroyed_ = false;
  }
  //! Destructor
  virtual ~SyslogLoggerFactory();

  static bool isDestroyed() {
    return SyslogLoggerFactory::destroyed_;
  }

  Logger* createLogger(Facilities facility) const {
    Logger* logger;
    logger = dynamic_cast<Logger*>(new SyslogLogger(facility));
    return logger;
  }

 protected:
 private:
  static bool destroyed_;
};

#endif  // SYSLOGLOGGERFACTORY_H_
