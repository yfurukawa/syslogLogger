/*!------------------------------------------------
@file       Client.h
@brief      
@attention  なし
--------------------------------------------------*/
#include <iostream>
#include "Client.h"
#include "LoggerFactory.h"
#include "Logger.h"
#include "Facilities.h"
#include "Levels.h"

/*!------------------------------------------------
@brief      デフォルトコンストラクタ
@note       クラスを構築する
@attention  なし
--------------------------------------------------*/
Client::Client() : factory_(NULL), logger_(NULL) {
  Facilities facility;
  factory_ = LoggerFactory::getInstance();
  logger_ = factory_->createLogger(facility);
}

/*!------------------------------------------------
@brief      デフォルトデストラクタ
@note       クラスを破棄する
@attention  なし
--------------------------------------------------*/
Client::~Client() {
}

/*!------------------------------------------------
@brief      
@note       
@param[in]  パラメータ名  説明  [単位] (範囲)
@param[out] 
@return     なし
@attention  なし
--------------------------------------------------*/
void Client::execute() {
  Levels level;
  logger_->log(level, "test message");
}

