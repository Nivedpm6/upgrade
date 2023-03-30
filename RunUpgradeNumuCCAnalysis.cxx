#include "upgradeNumuCCAnalysis.hxx"
#include "AnalysisLoop.hxx"

int main(int argc, char *argv[]){
  upgradeNumuCCAnalysis* ana = new upgradeNumuCCAnalysis();
  AnalysisLoop loop(ana, argc, argv); 
  loop.Execute();
}