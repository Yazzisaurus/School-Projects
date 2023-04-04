#ifndef TEAMH
#define TEAMH

#include <string>

class Team {

  private:

  std::string teamName;
  int teamWins;
  int teamLosses;

  
  public:
  
  void SetTeamName(std::string s);
  
  void SetTeamWins(int n);
  
  void SetTeamLosses(int m);


  std::string GetTeamName();
  
  int GetTeamWins();
  
  int GetTeamLosses();

  float GetWinPercentage();

};

#endif
