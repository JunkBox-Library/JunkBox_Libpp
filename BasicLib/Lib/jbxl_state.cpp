
// created by ./make_state_c shell script

#include "jbxl_state.h"

void  jbxl_add_all_states(void)
{
    jbxl_add_state(JBXL_NORMAL, "JBXL_NORMAL", "正常");
    jbxl_add_state(JBXL_NONE, "JBXL_NONE", "情報無し");
    jbxl_add_state(JBXL_ERROR, "JBXL_ERROR", "エラー");
    jbxl_add_state(JBXL_NODATA, "JBXL_NODATA", "有効なデータが無い");
    jbxl_add_state(JBXL_NULL_ERROR, "JBXL_NULL_ERROR", "参照先のアドレスが NULL");
    jbxl_add_state(JBXL_CANCEL, "JBXL_CANCEL", "処理がキャンセルされた");
    jbxl_add_state(JBXL_INCOMPLETE, "JBXL_INCOMPLETE", "データが不完全");
    jbxl_add_state(JBXL_DATA_REMAINS, "JBXL_DATA_REMAINS", "データが残っている");
    jbxl_add_state(JBXL_MALLOC_ERROR, "JBXL_MALLOC_ERROR", "メモリ確保エラー");
    jbxl_add_state(JBXL_ARGS_ERROR, "JBXL_ARGS_ERROR", "不正な引数（NULLなど）");
    jbxl_add_state(JBXL_FILE_OPEN_ERROR, "JBXL_FILE_OPEN_ERROR", "ファイルオープン エラー");
    jbxl_add_state(JBXL_FILE_READ_ERROR, "JBXL_FILE_READ_ERROR", "ファイル読み込みエラー");
    jbxl_add_state(JBXL_FILE_WRITE_ERROR, "JBXL_FILE_WRITE_ERROR", "ファイル書き込みエラー");
    jbxl_add_state(JBXL_FILE_CLOSE_ERROR, "JBXL_FILE_CLOSE_ERROR", "ファイルのクローズエラー");
    jbxl_add_state(JBXL_FILE_EXIST_ERROR, "JBXL_FILE_EXIST_ERROR", "ファイルが存在しない（シンボリックリンクもダメ）");
    jbxl_add_state(JBXL_FILE_MAKE_ERROR, "JBXL_FILE_MAKE_ERROR", "ファイル作成エラー");
    jbxl_add_state(JBXL_FILE_DESTOPEN_ERROR, "JBXL_FILE_DESTOPEN_ERROR", "ディスティネーションファイルのオープン失敗");
    jbxl_add_state(JBXL_TOOLS_ERROR, "JBXL_TOOLS_ERROR", "Tools ライブラリのエラー");
    jbxl_add_state(JBXL_TOOLS_BUF_ERROR, "JBXL_TOOLS_BUF_ERROR", "バッファ（データ格納）部の領域がない");
    jbxl_add_state(JBXL_TOOLS_BUFSZ_ERROR, "JBXL_TOOLS_BUFSZ_ERROR", "バッファ（データ格納）部の大きさが足りない");
    jbxl_add_state(JBXL_BUFFER_ERROR, "JBXL_BUFFER_ERROR", "Buffer ライブラリのエラー");
    jbxl_add_state(JBXL_BUFFER_MAKE_ERROR, "JBXL_BUFFER_MAKE_ERROR", "Buffer の作成に失敗");
    jbxl_add_state(JBXL_BUFFER_CMP_ERROR, "JBXL_BUFFER_CMP_ERROR", "比較文字数が vldsz より大きい");
    jbxl_add_state(JBXL_NET_ERROR, "JBXL_NET_ERROR", "Network ライブラリのエラー");
    jbxl_add_state(JBXL_NET_SOCKET_ERROR, "JBXL_NET_SOCKET_ERROR", "ソケットの作成に失敗");
    jbxl_add_state(JBXL_NET_OPTION_ERROR, "JBXL_NET_OPTION_ERROR", "オプションの設定に失敗");
    jbxl_add_state(JBXL_NET_BIND_ERROR, "JBXL_NET_BIND_ERROR", "バインドに失敗");
    jbxl_add_state(JBXL_NET_INFO_ERROR, "JBXL_NET_INFO_ERROR", "ホスト情報の取得に失敗");
    jbxl_add_state(JBXL_NET_CONNECT_ERROR, "JBXL_NET_CONNECT_ERROR", "接続に失敗");
    jbxl_add_state(JBXL_NET_LISTEN_ERROR, "JBXL_NET_LISTEN_ERROR", "リッスンに失敗");
    jbxl_add_state(JBXL_NET_RECV_ERROR, "JBXL_NET_RECV_ERROR", "データの受信エラー");
    jbxl_add_state(JBXL_NET_SEND_ERROR, "JBXL_NET_SEND_ERROR", "データの送信エラー");
    jbxl_add_state(JBXL_NET_BUF_ERROR, "JBXL_NET_BUF_ERROR", "受信バッファにデータは存在するはずだが，原因不明の理由により獲得に失敗した");
    jbxl_add_state(JBXL_NET_BUFSZ_ERROR, "JBXL_NET_BUFSZ_ERROR", "受信バッファの長さが足りない．はみ出したデータは捨てられた");
    jbxl_add_state(JBXL_NET_SEND_TIMEOUT, "JBXL_NET_SEND_TIMEOUT", "送信タイムアウト");
    jbxl_add_state(JBXL_NET_RECV_TIMEOUT, "JBXL_NET_RECV_TIMEOUT", "受信タイムアウト");
    jbxl_add_state(JBXL_NET_TRANS_TIMEOUT, "JBXL_NET_TRANS_TIMEOUT", "転送タイムアウト");
    jbxl_add_state(JBXL_LIST_ERROR, "JBXL_LIST_ERROR", "tList ライブラリのエラー");
    jbxl_add_state(JBXL_TREE_ERROR, "JBXL_TREE_ERROR", "tTree ライブラリのエラー");
    jbxl_add_state(JBXL_XTOOLS_ERROR, "JBXL_XTOOLS_ERROR", "xTools ライブラリーのエラー");
    jbxl_add_state(JBXL_XTOOLS_RUNLEN_ERROR, "JBXL_XTOOLS_RUNLEN_ERROR", "Run Length データが 0x00 で終わっている");
    jbxl_add_state(JBXL_XTOOLS_RUNLEN2_ERROR, "JBXL_XTOOLS_RUNLEN2_ERROR", "Run Length データに 0x00, 0x00 が存在する（連長圧縮のデータではないのでは？）");
    jbxl_add_state(JBXL_XML_ERROR, "JBXL_XML_ERROR", "tXML ライブラリのエラー");
    jbxl_add_state(JBXL_XML_PARSE_ERROR, "JBXL_XML_PARSE_ERROR", "XML の解釈エラー");
    jbxl_add_state(JBXL_XML_SEQUENCE_ERROR, "JBXL_XML_SEQUENCE_ERROR", "XMLノードのリンクエラー");
    jbxl_add_state(JBXL_XML_MEMORY_ERROR, "JBXL_XML_MEMORY_ERROR", "XML のメモリエラー");
    jbxl_add_state(JBXL_XML_PARSED, "JBXL_XML_PARSED", "XMLパース済み");
    jbxl_add_state(JBXL_XML_MULTI_ROOT, "JBXL_XML_MULTI_ROOT", "XMLは複数のルート（TOP）を持っている．（パース済み）");
    jbxl_add_state(JBXL_XML_NODE_OPENED, "JBXL_XML_NODE_OPENED", "XMLノードは開いている");
    jbxl_add_state(JBXL_XML_NODE_CLOSED, "JBXL_XML_NODE_CLOSED", "XMLノードは閉じている");
    jbxl_add_state(JBXL_XML_NODE_EMPTY, "JBXL_XML_NODE_EMPTY", "XMLの空のノード");
    jbxl_add_state(JBXL_XML_NOT_CLOSED, "JBXL_XML_NOT_CLOSED", "XMLデータが閉じていない");
    jbxl_add_state(JBXL_XML_DEFAULT_STATE, "JBXL_XML_DEFAULT_STATE", "XMLデータの初期状態");
    jbxl_add_state(JBXL_JSON_ERROR, "JBXL_JSON_ERROR", "tJSON ライブラリのエラー");
    jbxl_add_state(JBXL_JSON_PARSE_ERROR, "JBXL_JSON_PARSE_ERROR", "JSON の解釈エラー");
    jbxl_add_state(JBXL_JSON_SEQUENCE_ERROR, "JBXL_JSON_SEQUENCE_ERROR", "JSONノードのリンクエラー");
    jbxl_add_state(JBXL_JSON_MEMORY_ERROR, "JBXL_JSON_MEMORY_ERROR", "JSON のメモリエラー");
    jbxl_add_state(JBXL_JSON_PARSED, "JBXL_JSON_PARSED", "JSONパース済み");
    jbxl_add_state(JBXL_JSON_MULTI_ROOT, "JBXL_JSON_MULTI_ROOT", "JSONは複数のルート（TOP）を持っている．（パース済み）");
    jbxl_add_state(JBXL_JSON_NODE_OPENED, "JBXL_JSON_NODE_OPENED", "JSONノードは開いている");
    jbxl_add_state(JBXL_JSON_NODE_CLOSED, "JBXL_JSON_NODE_CLOSED", "JSONノードは閉じている");
    jbxl_add_state(JBXL_JSON_NODE_EMPTY, "JBXL_JSON_NODE_EMPTY", "JSONの空のノード");
    jbxl_add_state(JBXL_JSON_ARRAY, "JBXL_JSON_ARRAY", "JSONの配列");
    jbxl_add_state(JBXL_JSON_NOT_CLOSED, "JBXL_JSON_NOT_CLOSED", "JSONデータが閉じていない．原因不明．パースアルゴリズムのミス？");
    jbxl_add_state(JBXL_JSON_PARSE_TERM, "JBXL_JSON_PARSE_TERM", "JSON のパースが途中で終了した．入力データが不完全．");
    jbxl_add_state(JBXL_JSON_IN_STR, "JBXL_JSON_IN_STR", "JSONデータの属性値処理で文字列を処理中．");
    jbxl_add_state(JBXL_JSON_IN_ARRAY, "JBXL_JSON_IN_ARRAY", "JSONデータの属性値処理で配列を処理中．");
    jbxl_add_state(JBXL_JSON_DEFAULT_STATE, "JBXL_JSON_DEFAULT_STATE", "JSONデータの初期状態");
    jbxl_add_state(JBXL_SSL_ERROR, "JBXL_SSL_ERROR", "SSL ライブラリのエラー");
    jbxl_add_state(JBXL_SSL_RECV_ERROR, "JBXL_SSL_RECV_ERROR", "SSL 受信エラー");
    jbxl_add_state(JBXL_SSL_SEND_ERROR, "JBXL_SSL_SEND_ERROR", "SSL 送信エラー");
    jbxl_add_state(JBXL_SPKI_ERROR, "JBXL_SPKI_ERROR", "SPKI エラー");
    jbxl_add_state(JBXL_DH_ERROR, "JBXL_DH_ERROR", "DH エラー");
    jbxl_add_state(JBXL_DH_KEY_ERROR, "JBXL_DH_KEY_ERROR", "DH鍵のエラー");
    jbxl_add_state(JBXL_BDB_OPEN_ERROR, "JBXL_BDB_OPEN_ERROR", "BDB でデータファイルのオープンに失敗");
    jbxl_add_state(JBXL_BDB_KEY_ERROR, "JBXL_BDB_KEY_ERROR", "BDB でキーの取得に失敗");
    jbxl_add_state(JBXL_BDB_GET_ERROR, "JBXL_BDB_GET_ERROR", "BDB でデータの取得に失敗");
    jbxl_add_state(JBXL_BDB_PUT_ERROR, "JBXL_BDB_PUT_ERROR", "BDB でデータの登録に失敗");
    jbxl_add_state(JBXL_BDB_DATASZ_ERROR, "JBXL_BDB_DATASZ_ERROR", "BDB でデータのサイズが不明");
    jbxl_add_state(JBXL_BDB_MEMORY_ERROR, "JBXL_BDB_MEMORY_ERROR", "BDB でメモリの確保に失敗");
    jbxl_add_state(JBXL_LDAP_BASE_ERROR, "JBXL_LDAP_BASE_ERROR", "LDAP のBASE名が不明");
    jbxl_add_state(JBXL_LDAP_USER_ERROR, "JBXL_LDAP_USER_ERROR", "ユーザ認証失敗(ユーザが存在しない)");
    jbxl_add_state(JBXL_LDAP_PASSWD_ERROR, "JBXL_LDAP_PASSWD_ERROR", "ユーザ認証失敗(ユーザは存在するが，パスワードが一致しない)");
    jbxl_add_state(JBXL_LDAP_NO_USER_ERROR, "JBXL_LDAP_NO_USER_ERROR", "ユーザ名が空白か NULL");
    jbxl_add_state(JBXL_LDAP_NO_ENTRY_ERROR, "JBXL_LDAP_NO_ENTRY_ERROR", "エントリ情報がない");
    jbxl_add_state(JBXL_LDAP_NO_ATTR_ERROR, "JBXL_LDAP_NO_ATTR_ERROR", "エントリの属性がない");
    jbxl_add_state(JBXL_LDAP_NO_VAL_ERROR, "JBXL_LDAP_NO_VAL_ERROR", "エントリの属性値がない");
    jbxl_add_state(JBXL_BVH_HIERARCHY_ERROR, "JBXL_BVH_HIERARCHY_ERROR", "HIERARCHYデータの書き込み失敗");
    jbxl_add_state(JBXL_BVH_MOTION_ERROR, "JBXL_BVH_MOTION_ERROR", "MOTIONデータの書き込み失敗");
    jbxl_add_state(JBXL_ISNET_CMD_ERROR, "JBXL_ISNET_CMD_ERROR", "サーバから 'OK', 'ERR' 以外のものを受信した");
    jbxl_add_state(JBXL_ISNET_USER_ERROR, "JBXL_ISNET_USER_ERROR", "ユーザ認証失敗(ユーザが存在しない)");
    jbxl_add_state(JBXL_ISNET_PASSWD_ERROR, "JBXL_ISNET_PASSWD_ERROR", "ユーザ認証失敗(ユーザは存在するが，パスワードが一致しない)");
    jbxl_add_state(JBXL_ISNET_SERVER_ERROR, "JBXL_ISNET_SERVER_ERROR", "認証ホストの検証エラー");
    jbxl_add_state(JBXL_ISNET_PUBKEYALG_ERROR, "JBXL_ISNET_PUBKEYALG_ERROR", "知らない公開鍵暗号アルゴリズム");
    jbxl_add_state(JBXL_ISNET_CMNKEYALG_ERROR, "JBXL_ISNET_CMNKEYALG_ERROR", "知らない共通鍵暗号アルゴリズム");
    jbxl_add_state(JBXL_ISNET_NULLANS_ERROR, "JBXL_ISNET_NULLANS_ERROR", "サーバからの返答が NULL");
    jbxl_add_state(JBXL_ISNET_CONNECT_ERROR, "JBXL_ISNET_CONNECT_ERROR", "認証サーバとの接続エラー");
    jbxl_add_state(JBXL_ISNET_START_ERROR, "JBXL_ISNET_START_ERROR", "認証サーバとの通信開始エラー（相手は認証サーバでない？）");
    jbxl_add_state(JBXL_ISNET_AGREE_ERROR, "JBXL_ISNET_AGREE_ERROR", "暗号合意エラー（サーバ認証を含む）");
    jbxl_add_state(JBXL_ISNET_CHALLENGE_ERROR, "JBXL_ISNET_CHALLENGE_ERROR", "チャレンジキー合意エラー");
    jbxl_add_state(JBXL_ISNET_SPKI_ERROR, "JBXL_ISNET_SPKI_ERROR", "SPKIのエラー（ISNET内）");
    jbxl_add_state(JBXL_ISNET_DHKEY_ERROR, "JBXL_ISNET_DHKEY_ERROR", "DH鍵エラー（ISNET内）");
    jbxl_add_state(JBXL_ASN1_ERROR, "JBXL_ASN1_ERROR", "tASN1 ライブラリのエラー");
    jbxl_add_state(JBXL_GRAPH_ERROR, "JBXL_GRAPH_ERROR", "GRAPH ライブラリーのエラー");
    jbxl_add_state(JBXL_GRAPH_CANCEL, "JBXL_GRAPH_CANCEL", "処理がキャンセルされた  ");
    jbxl_add_state(JBXL_GRAPH_HEADER_ERROR, "JBXL_GRAPH_HEADER_ERROR", "画像ヘッダーのエラー");
    jbxl_add_state(JBXL_GRAPH_MEMORY_ERROR, "JBXL_GRAPH_MEMORY_ERROR", "メモリエラー");
    jbxl_add_state(JBXL_GRAPH_NODATA_ERROR, "JBXL_GRAPH_NODATA_ERROR", "データが無い");
    jbxl_add_state(JBXL_GRAPH_NOFILE_ERROR, "JBXL_GRAPH_NOFILE_ERROR", "ファイルが存在しない");
    jbxl_add_state(JBXL_GRAPH_OPFILE_ERROR, "JBXL_GRAPH_OPFILE_ERROR", "ファイルのオープンエラー");
    jbxl_add_state(JBXL_GRAPH_RDFILE_ERROR, "JBXL_GRAPH_RDFILE_ERROR", "ファイルの読み込みエラー");
    jbxl_add_state(JBXL_GRAPH_WRFILE_ERROR, "JBXL_GRAPH_WRFILE_ERROR", "ファイルの書き込みエラー");
    jbxl_add_state(JBXL_GRAPH_FILESZ_ERROR, "JBXL_GRAPH_FILESZ_ERROR", "ファイルサイズのエラー");
    jbxl_add_state(JBXL_GRAPH_IVDARG_ERROR, "JBXL_GRAPH_IVDARG_ERROR", "無効な引数");
    jbxl_add_state(JBXL_GRAPH_IVDMODE_ERROR, "JBXL_GRAPH_IVDMODE_ERROR", "無効なモード");
    jbxl_add_state(JBXL_GRAPH_IVDPARAM_ERROR, "JBXL_GRAPH_IVDPARAM_ERROR", "無効なパラメータ");
    jbxl_add_state(JBXL_GRAPH_IVDDATA_ERROR, "JBXL_GRAPH_IVDDATA_ERROR", "無効なデータ");
    jbxl_add_state(JBXL_GRAPH_THROUGH_ERROR, "JBXL_GRAPH_THROUGH_ERROR", "エラー処理をスルーする");
}
