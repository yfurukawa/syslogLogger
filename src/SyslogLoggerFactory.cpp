/*!------------------------------------------------
@file       SyslogLoggerFactory.h
@brief      
@attention  なし
--------------------------------------------------*/
#include <new>
#include "LoggerFactory.h"
#include "SyslogLoggerFactory.h"

bool SyslogLoggerFactory::destroyed_ = false;

/*!------------------------------------------------
@brief      デフォルトデストラクタ
@note       クラスを破棄する
@attention  なし
--------------------------------------------------*/
SyslogLoggerFactory::~SyslogLoggerFactory() {
  destroyed_ = true;
}

/*!------------------------------------------------
@brief      
@note       
@param[in]  パラメータ名  説明  [単位] (範囲)
@param[out] 
@return     なし
@attention  なし
--------------------------------------------------*/
LoggerFactory* LoggerFactory::getInstance() {
  static SyslogLoggerFactory theFactory;
  if(SyslogLoggerFactory::isDestroyed()) {
    (void) new(&theFactory) SyslogLoggerFactory;
  }
  return &theFactory;
}


