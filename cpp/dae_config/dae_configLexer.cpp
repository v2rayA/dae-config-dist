
// Generated from dae_config.g4 by ANTLR 4.11.1


#include "dae_configLexer.h"


using namespace antlr4;

using namespace dae_config;


using namespace antlr4;

namespace {

struct Dae_configLexerStaticData final {
  Dae_configLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  Dae_configLexerStaticData(const Dae_configLexerStaticData&) = delete;
  Dae_configLexerStaticData(Dae_configLexerStaticData&&) = delete;
  Dae_configLexerStaticData& operator=(const Dae_configLexerStaticData&) = delete;
  Dae_configLexerStaticData& operator=(Dae_configLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag dae_configlexerLexerOnceFlag;
Dae_configLexerStaticData *dae_configlexerLexerStaticData = nullptr;

void dae_configlexerLexerInitialize() {
  assert(dae_configlexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<Dae_configLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "SAFE_ID_HEAD_CHAR", "SAFE_NONID_HEAD_CHAR", "SAFE_INTERMEDIATE_CHAR", 
      "SAFE_CHAR", "DOUBLE_QUOTE_STRING", "SINGLE_QUOTE_STRING", "WHITESPACE", 
      "COMMENT_BLOCK", "COMMENT_LINE_SHARP", "ID", "NON_ID", "QUOTE_STRING"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "','", "'{'", "'}'", "':'", "'['", "']'", "'!'", "'('", "')'", 
      "'->'", "'&&'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "WHITESPACE", "COMMENT_BLOCK", 
      "COMMENT_LINE_SHARP", "ID", "NON_ID", "QUOTE_STRING"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,17,160,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,
  	6,1,7,1,7,1,8,1,8,1,9,1,9,1,9,1,10,1,10,1,10,1,11,1,11,1,12,1,12,1,13,
  	1,13,1,14,1,14,1,14,3,14,81,8,14,1,15,1,15,1,15,1,15,5,15,87,8,15,10,
  	15,12,15,90,9,15,1,15,1,15,1,16,1,16,1,16,1,16,5,16,98,8,16,10,16,12,
  	16,101,9,16,1,16,1,16,1,17,4,17,106,8,17,11,17,12,17,107,1,17,1,17,1,
  	18,1,18,1,18,1,18,5,18,116,8,18,10,18,12,18,119,9,18,1,18,1,18,1,18,1,
  	18,1,18,1,19,1,19,5,19,128,8,19,10,19,12,19,131,9,19,1,19,4,19,134,8,
  	19,11,19,12,19,135,1,19,3,19,139,8,19,1,19,1,19,1,20,1,20,5,20,145,8,
  	20,10,20,12,20,148,9,20,1,21,1,21,5,21,152,8,21,10,21,12,21,155,9,21,
  	1,22,1,22,3,22,159,8,22,4,88,99,117,129,0,23,1,1,3,2,5,3,7,4,9,5,11,6,
  	13,7,15,8,17,9,19,10,21,11,23,0,25,0,27,0,29,0,31,0,33,0,35,12,37,13,
  	39,14,41,15,43,16,45,17,1,0,5,3,0,65,90,95,95,97,122,4,0,42,43,45,57,
  	92,92,94,94,4,0,33,33,35,37,61,61,64,64,3,0,9,10,13,13,32,32,2,0,10,10,
  	13,13,167,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,
  	0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,
  	1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,
  	0,0,0,45,1,0,0,0,1,47,1,0,0,0,3,49,1,0,0,0,5,51,1,0,0,0,7,53,1,0,0,0,
  	9,55,1,0,0,0,11,57,1,0,0,0,13,59,1,0,0,0,15,61,1,0,0,0,17,63,1,0,0,0,
  	19,65,1,0,0,0,21,68,1,0,0,0,23,71,1,0,0,0,25,73,1,0,0,0,27,75,1,0,0,0,
  	29,80,1,0,0,0,31,82,1,0,0,0,33,93,1,0,0,0,35,105,1,0,0,0,37,111,1,0,0,
  	0,39,125,1,0,0,0,41,142,1,0,0,0,43,149,1,0,0,0,45,158,1,0,0,0,47,48,5,
  	44,0,0,48,2,1,0,0,0,49,50,5,123,0,0,50,4,1,0,0,0,51,52,5,125,0,0,52,6,
  	1,0,0,0,53,54,5,58,0,0,54,8,1,0,0,0,55,56,5,91,0,0,56,10,1,0,0,0,57,58,
  	5,93,0,0,58,12,1,0,0,0,59,60,5,33,0,0,60,14,1,0,0,0,61,62,5,40,0,0,62,
  	16,1,0,0,0,63,64,5,41,0,0,64,18,1,0,0,0,65,66,5,45,0,0,66,67,5,62,0,0,
  	67,20,1,0,0,0,68,69,5,38,0,0,69,70,5,38,0,0,70,22,1,0,0,0,71,72,7,0,0,
  	0,72,24,1,0,0,0,73,74,7,1,0,0,74,26,1,0,0,0,75,76,7,2,0,0,76,28,1,0,0,
  	0,77,81,3,23,11,0,78,81,3,25,12,0,79,81,3,27,13,0,80,77,1,0,0,0,80,78,
  	1,0,0,0,80,79,1,0,0,0,81,30,1,0,0,0,82,88,5,34,0,0,83,84,5,92,0,0,84,
  	87,5,34,0,0,85,87,9,0,0,0,86,83,1,0,0,0,86,85,1,0,0,0,87,90,1,0,0,0,88,
  	89,1,0,0,0,88,86,1,0,0,0,89,91,1,0,0,0,90,88,1,0,0,0,91,92,5,34,0,0,92,
  	32,1,0,0,0,93,99,5,39,0,0,94,95,5,92,0,0,95,98,5,39,0,0,96,98,9,0,0,0,
  	97,94,1,0,0,0,97,96,1,0,0,0,98,101,1,0,0,0,99,100,1,0,0,0,99,97,1,0,0,
  	0,100,102,1,0,0,0,101,99,1,0,0,0,102,103,5,39,0,0,103,34,1,0,0,0,104,
  	106,7,3,0,0,105,104,1,0,0,0,106,107,1,0,0,0,107,105,1,0,0,0,107,108,1,
  	0,0,0,108,109,1,0,0,0,109,110,6,17,0,0,110,36,1,0,0,0,111,112,5,47,0,
  	0,112,113,5,42,0,0,113,117,1,0,0,0,114,116,9,0,0,0,115,114,1,0,0,0,116,
  	119,1,0,0,0,117,118,1,0,0,0,117,115,1,0,0,0,118,120,1,0,0,0,119,117,1,
  	0,0,0,120,121,5,42,0,0,121,122,5,47,0,0,122,123,1,0,0,0,123,124,6,18,
  	0,0,124,38,1,0,0,0,125,129,5,35,0,0,126,128,9,0,0,0,127,126,1,0,0,0,128,
  	131,1,0,0,0,129,130,1,0,0,0,129,127,1,0,0,0,130,138,1,0,0,0,131,129,1,
  	0,0,0,132,134,7,4,0,0,133,132,1,0,0,0,134,135,1,0,0,0,135,133,1,0,0,0,
  	135,136,1,0,0,0,136,139,1,0,0,0,137,139,5,0,0,1,138,133,1,0,0,0,138,137,
  	1,0,0,0,139,140,1,0,0,0,140,141,6,19,0,0,141,40,1,0,0,0,142,146,3,23,
  	11,0,143,145,3,29,14,0,144,143,1,0,0,0,145,148,1,0,0,0,146,144,1,0,0,
  	0,146,147,1,0,0,0,147,42,1,0,0,0,148,146,1,0,0,0,149,153,3,25,12,0,150,
  	152,3,29,14,0,151,150,1,0,0,0,152,155,1,0,0,0,153,151,1,0,0,0,153,154,
  	1,0,0,0,154,44,1,0,0,0,155,153,1,0,0,0,156,159,3,31,15,0,157,159,3,33,
  	16,0,158,156,1,0,0,0,158,157,1,0,0,0,159,46,1,0,0,0,14,0,80,86,88,97,
  	99,107,117,129,135,138,146,153,158,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  dae_configlexerLexerStaticData = staticData.release();
}

}

dae_configLexer::dae_configLexer(CharStream *input) : Lexer(input) {
  dae_configLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *dae_configlexerLexerStaticData->atn, dae_configlexerLexerStaticData->decisionToDFA, dae_configlexerLexerStaticData->sharedContextCache);
}

dae_configLexer::~dae_configLexer() {
  delete _interpreter;
}

std::string dae_configLexer::getGrammarFileName() const {
  return "dae_config.g4";
}

const std::vector<std::string>& dae_configLexer::getRuleNames() const {
  return dae_configlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& dae_configLexer::getChannelNames() const {
  return dae_configlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& dae_configLexer::getModeNames() const {
  return dae_configlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& dae_configLexer::getVocabulary() const {
  return dae_configlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView dae_configLexer::getSerializedATN() const {
  return dae_configlexerLexerStaticData->serializedATN;
}

const atn::ATN& dae_configLexer::getATN() const {
  return *dae_configlexerLexerStaticData->atn;
}




void dae_configLexer::initialize() {
  ::antlr4::internal::call_once(dae_configlexerLexerOnceFlag, dae_configlexerLexerInitialize);
}
