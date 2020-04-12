/*!------------------------------------------------
@file       LoggerFactory.h
@brief      
@attention  なし
--------------------------------------------------*/

#ifndef LOGGERFACTORY_H_
#define LOGGERFACTORY_H_

// インクルードファイル ================================
#include "Facilities.h"

// クラスの前方宣言 ====================================
class Logger;

// マクロの宣言 ========================================

// 型の宣言 ============================================

// クラス定義 ==========================================
/*!--------------------------------------------------
@class       LoggerFactory.h
@brief      
@note       
@attention  なし
@see        なし
--------------------------------------------------*/
class LoggerFactory {
 public:
  //! Constructor
  LoggerFactory() {};
  //! Destructor
  virtual ~LoggerFactory() {};
  static LoggerFactory* getInstance();
  virtual Logger* createLogger(Facilities facility) const = 0;

 protected:
 private:
};

#endif  // LOGGERFACTORY_H_
