#include "Team.h"
#include <string>
using namespace std;

  void Team::SetTeamName(string s){
    teamName = s;
  }
  
  void Team::SetTeamWins(int n){
    teamWins = n;
  } 
  
  void Team::SetTeamLosses(int m){
    teamLosses = m;
  }

  

  string Team::GetTeamName(){
    return teamName;
  }
  
  int Team::GetTeamWins(){
    return teamWins;
  }
  
  int Team::GetTeamLosses(){
    return teamLosses;
  }

  float Team::GetWinPercentage(){
    float res = (float(teamWins)/float((teamWins+teamLosses)));
    return res;
  }