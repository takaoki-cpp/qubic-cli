#pragma once
#include "connection.h"
void printTickInfoFromNode(const char* nodeIp, int nodePort);
void printSystemInfoFromNode(const char* nodeIp, int nodePort);
uint32_t getTickNumberFromNode(QCPtr qc);
bool checkTxOnTick(const char* nodeIp, const int nodePort, const char* txHash, uint32_t requestedTick);
bool getTxInfo(const char* nodeIp, const int nodePort, const char* txHash);
void getQuorumTick(const char* nodeIp, const int nodePort, uint32_t requestedTick, const char* compFileName);
void getTickDataToFile(const char* nodeIp, const int nodePort, uint32_t requestedTick, const char* fileName);
void printTickDataFromFile(const char* fileName, const char* compFile);
bool checkTxOnFile(const char* txHash, const char* fileName);
void sendRawPacket(const char* nodeIp, const int nodePort, int rawPacketSize, uint8_t* rawPacket);
void sendSpecialCommand(const char* nodeIp, const int nodePort, const char* seed, int command);
void getComputorListToFile(const char* nodeIp, const int nodePort, const char* fileName);
void getNodeIpList(const char* nodeIp, const int nodePort);
void getLogFromNode(const char* nodeIp, const int nodePort, uint64_t* passcode);
void dumpSpectrumToCSV(const char* input, const char* output);
void dumpUniverseToCSV(const char* input, const char* output);
void sendSpecialCommandGetMiningScoreRanking(const char* nodeIp, const int nodePort, const char* seed, int command);
void getVoteCounterTransaction(const char* nodeIp, const int nodePort, unsigned int requestedTick, const char* compFileName);

// remote tools:
void toogleMainAux(const char* nodeIp, const int nodePort, const char* seed,
                   int command, std::string mode0, std::string mode1);
void setSolutionThreshold(const char* nodeIp, const int nodePort, const char* seed,
                          int command, int epoch, int threshold);
void syncTime(const char* nodeIp, const int nodePort, const char* seed);
