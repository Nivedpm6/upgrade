#include "upgradePGUNAnalysis.hxx"
#include "AnalysisLoop.hxx"

int main(int argc, char *argv[]){
  upgradePGUNAnalysis* ana = new upgradePGUNAnalysis();
  AnalysisLoop loop(ana, argc, argv); 
  loop.Execute();
}