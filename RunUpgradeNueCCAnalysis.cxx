#include "upgradeNueCCAnalysis.hxx"
#include "AnalysisLoop.hxx"

int main(int argc, char *argv[]){
  upgradeNueCCAnalysis* ana = new upgradeNueCCAnalysis();
  AnalysisLoop loop(ana, argc, argv); 
  loop.Execute();
}