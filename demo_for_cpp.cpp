//#include <string>
//#include <stdexcept>
//#include <string.h>
//#include "zlib.h"
//#include <assert.h>
//#include <netdb.h>
//#include <sys/socket.h>
//#include <sys/types.h>
//#include <arpa/inet.h>
//#include <netinet/in.h>
//
//using namespace std;
//
//string gzipcompress(const string& instr)
//{
//    int ret;
//    z_stream strm;
//    memset(&strm, 0, sizeof(strm));
//    const int buffer_size = 18 * 1024;
//    unsigned char buffer[buffer_size];
//    string outstring;
//    int flush;
//
//    strm.zalloc = Z_NULL;
//    strm.zfree = Z_NULL;
//    strm.opaque = Z_NULL;
//
//
//    ret = deflateInit2(&strm, Z_BEST_COMPRESSION,
//        Z_DEFLATED, 15 + 16, 8, Z_DEFAULT_STRATEGY);
//    if (ret != Z_OK)
//    {
//        throw(runtime_error("deflateInit2 failed while compressing."));
//    }
//
//    strm.next_in = reinterpret_cast<Bytef*>(const_cast<char*>(instr.c_str()));
//    strm.avail_in = instr.length();
//
//    do
//    {
//        if (strm.avail_in > 0)
//            flush = Z_NO_FLUSH;
//        else
//            flush = Z_FINISH;
//        strm.next_out = buffer;
//        strm.avail_out = buffer_size;
//        ret = deflate(&strm, flush);
//        assert(ret != Z_STREAM_ERROR);
//
//        if (ret != Z_STREAM_END && ret != Z_OK)
//            break;
//
//        outstring.append(reinterpret_cast<const char*>(buffer), buffer_size - strm.avail_out);
//    } while (ret != Z_STREAM_END);
//
//    deflateEnd(&strm);
//
//    if (ret != Z_STREAM_END && ret != Z_OK)
//    {
//        throw(runtime_error("gzipcompress deflate error" + to_string(ret) + strm.msg));
//    }
//
//    return outstring;
//}
//
//string gzipdecompress(const string& str)
//{
//    int ret;
//    z_stream strm;
//    memset(&strm, 0, sizeof(strm));
//    const int buffer_size = 18 * 1024;
//    unsigned char buffer[buffer_size];
//    string outstring;
//    int flush;
//
//    strm.zalloc = Z_NULL;
//    strm.zfree = Z_NULL;
//    strm.opaque = Z_NULL;
//
//    ret = inflateInit2(&strm, 15 + 16);
//    if (ret != Z_OK)
//        throw(std::runtime_error("inflateInit failed while decompressing."));
//
//    strm.next_in = reinterpret_cast<Bytef*>(const_cast<char*>(str.c_str()));
//    strm.avail_in = str.length();
//
//    do
//    {
//        if (strm.avail_in > 0)
//            flush = Z_NO_FLUSH;
//        else
//            flush = Z_FINISH;
//        strm.next_out = reinterpret_cast<Bytef*>(buffer);
//        strm.avail_out = buffer_size;
//        ret = inflate(&strm, Z_NO_FLUSH);
//        assert(ret != Z_STREAM_ERROR);
//        switch (ret)
//        {
//        case Z_NEED_DICT:
//            ret = Z_DATA_ERROR;
//        case Z_DATA_ERROR:
//        case Z_MEM_ERROR:
//            break;
//        }
//        if (ret != Z_STREAM_END && ret != Z_OK)
//            break;
//
//        outstring.append(reinterpret_cast<const char*>(buffer), buffer_size - strm.avail_out);
//    } while (ret != Z_STREAM_END);
//
//    inflateEnd(&strm);
//
//    if (ret != Z_STREAM_END && ret != Z_OK)
//    {
//        throw(runtime_error("gzipdecompress deflate error" + to_string(ret) + strm.msg));
//    }
//
//    return outstring;
//
//}
//
//string httpPost(string ServerName, string ServerPort, string QuestPath, string message)
//{
//    struct sockaddr_in addr;
//    struct hostent* host;
//    string ServerURL;
//    string res;
//    string header;
//    string body;
//    string last_body;
//    string resCode;
//    string msg;
//    unsigned char receive[1025] = { 0 };
//    size_t pos;
//    const char* data;
//    int sent;
//    int total;
//    int sock;
//    int ret;
//    int chunked = 0;
//
//    addr.sin_family = AF_INET;
//    addr.sin_port = htons(stoi(ServerPort.data()));
//    host = gethostbyname(ServerName.data());
//    if (host == NULL)
//    {
//        throw(runtime_error(string("gethostbyname error:") + hstrerror(h_errno)));
//    }
//
//    memcpy(&addr.sin_addr, host->h_addr, host->h_length);
//    sock = socket(AF_INET, SOCK_STREAM, 0);
//    if (sock < 0)
//    {
//        throw(runtime_error(string("Http create socket error:") + strerror(errno)));
//    }
//
//    ret = connect(sock, (sockaddr*)&addr, sizeof(addr));
//    if (ret != 0)
//    {
//        close(sock);
//        throw(runtime_error(string("Http conect to server error:") + strerror(errno)));
//    }
//
//    msg += "POST " + QuestPath + " HTTP/1.1\r\nHost: " + ServerName + ":" + ServerPort
//        + "\r\n Content-Type: application/msgpack\r\nContent-Length: "
//        + to_string(message.size()) + "\r\n\r\n" + message;
//
//    sent = 0;
//    data = msg.data();
//    total = msg.size();
//
//    while (sent < total)
//    {
//        ret = send(sock, data + sent, total - sent, 0);
//        if (ret == -1)
//        {
//            close(sock);
//            throw(runtime_error(string("Http socket send error:") + strerror(errno)));
//        }
//
//        if (ret == 0)
//            break;
//
//        sent += ret;
//    }
//
//    while (1)
//    {
//        ret = recv(sock, receive, 1024, 0);
//        if (ret == -1)
//        {
//            close(sock);
//            throw(runtime_error(string("Http socket receive error:") + strerror(errno)));
//        }
//        else if (ret == 0)
//            break;
//
//        receive[ret] = '\0';
//        res.append(reinterpret_cast<const char*>(receive), ret);
//    }
//
//    pos = res.find("\r\n\r\n");
//    if (pos == string::npos)
//    {
//        close(sock);
//        throw(runtime_error(string("Http response message is invalid")));
//    }
//
//    header = res.substr(0, pos);
//    resCode = header.substr(9, 3);
//    if (stoi(resCode) < 200 || stoi(resCode) >= 300)
//    {
//        close(sock);
//        throw(runtime_error(string("Http response indicate an error")));
//    }
//
//    if (header.find("chunked") != string::npos)
//        chunked = 1;
//
//    body = res.substr(pos + 4);
//
//    if (chunked)
//    {
//        while (1)
//        {
//
//            pos = body.find("\r\n");
//            if (pos != string::npos)
//            {
//                int len;
//
//                if (body[pos - 1] == 0)
//                    break;
//                len = stoi(body.substr(0, pos), 0, 16);
//                string sub_string = body.substr(pos + 2, len);
//                last_body.append(sub_string);
//                body = body.substr(pos + 4 + len);
//            }
//            else
//                break;
//
//        }
//    }
//    else
//        last_body = body;
//
//
//    close(sock);
//    return last_body;
//}
//
//
//
//#include <iostream>
//
//int main()
//{
//    string serve = "api.talkinggame.com";
//    string port = "80";
//    string QuestPath = "/api/charge/8AE2354AFA1E879EC048408A44FD4C65";
//    string message = "{\"msgID\":\"1001\",\"accountID\":\"whl\",\"gameVersion\":\"1.0\",\"OS\":\"ios\",\"level\":21,\"gameServer\":\"金戈铁马\",\"orderID\":\"e46bd2bb-89b6-4d52-860e- 07d1b7b9ce95\",\"iapID\":\"6000 元宝大宝 箱\",\"currencyAmount\":99.01,\"currencyType\":\"CNY\",\"virtualCurrencyAmount\":990.01,\"paymentType\":\"支付 宝\",\"status\":\"success\",\"chargeTime\":1382687435864,\"mission\":\"新手任务 1\"}";
//    string newmessage;
//    for (int i = 0; i < 1000; i++)
//    {
//        newmessage += message + ",";
//    }
//    newmessage.erase(newmessage.find_last_of(","));
//    newmessage = "[" + newmessage + "]";
//
//    string res = gzipcompress(newmessage);
//    res = httpPost(serve, port, QuestPath, res);
//    res = gzipdecompress(res);
//    cout << res << endl;
//
//}