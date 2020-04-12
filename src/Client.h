/*!------------------------------------------------
@file       Client.h
@brief      
@attention  なし
--------------------------------------------------*/

#ifndef CLIENT_H_
#define CLIENT_H_

// インクルードファイル ================================

// クラスの前方宣言 ====================================
class LoggerFactory;
class Logger;

// マクロの宣言 ========================================

// 型の宣言 ============================================

// クラス定義 ==========================================
/*!--------------------------------------------------
@class       Client.h
@brief      
@note       
@attention  なし
@see        なし
--------------------------------------------------*/
class Client {
 public:
  //! Constructor
  Client();
  //! Destructor
  virtual ~Client();
  void execute();

 protected:
 private:
  LoggerFactory* factory_;
  Logger* logger_;
};

#endif  // CLIENT_H_
