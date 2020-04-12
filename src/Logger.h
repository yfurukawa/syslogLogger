/*!------------------------------------------------
@file       Logger.h
@brief      
@attention  なし
--------------------------------------------------*/

#ifndef LOGGER_H_
#define LOGGER_H_

// インクルードファイル ================================
#include <string>
#include "Levels.h"

// クラスの前方宣言 ====================================

// マクロの宣言 ========================================

// 型の宣言 ============================================

// クラス定義 ==========================================
/*!--------------------------------------------------
@class       Logger.h
@brief      
@note       
@attention  なし
@see        なし
--------------------------------------------------*/
class Logger {
 public:
  //! Constructor
  Logger() {};
  //! Destructor
  virtual ~Logger() {};
  virtual void log(Levels level, std::string message) const = 0;

 protected:
 private:
};

#endif  // LOGGER_H_
