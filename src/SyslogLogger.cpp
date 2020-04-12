/*!------------------------------------------------
@file       SyslogLogger.h
@brief      
@attention  なし
--------------------------------------------------*/
#include <syslog.h>
#include "SyslogLogger.h"

/*!------------------------------------------------
@brief      デフォルトコンストラクタ
@note       クラスを構築する
@attention  なし
--------------------------------------------------*/
SyslogLogger::SyslogLogger(Facilities facility) {
  openlog("syslogTest", LOG_PID, facility);
}

/*!------------------------------------------------
@brief      デフォルトデストラクタ
@note       クラスを破棄する
@attention  なし
--------------------------------------------------*/
SyslogLogger::~SyslogLogger() {
}

/*!------------------------------------------------
@brief      
@note       
@param[in]  パラメータ名  説明  [単位] (範囲)
@param[out] 
@return     なし
@attention  なし
--------------------------------------------------*/
void SyslogLogger::log(Levels level, std::string message) const {
  syslog(level, message.c_str());
}

