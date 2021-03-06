#ifndef MATCHHELPERS_H
#define MATCHHELPERS_H

#include "match/Match.h"
#include "match/Distance.h"

#define MAX_KICK_DISTANCE 1.0
#define MAX_KICK_HEIGHT   0.7

class MatchHelpers {
	public:
		static double distanceToPitch(const Match& m,
				const Common::Vector3& v);
		static bool allowedToKick(const Player& p);
		static Common::Vector3 ownGoalPosition(const Player& p);
		static Common::Vector3 ownGoalPosition(const Team& t);
		static Common::Vector3 oppositeGoalPosition(const Player& p);
		static Common::Vector3 oppositeGoalPosition(const Team& t);
		static Common::Vector3 oppositePenaltySpotPosition(const Player& p);
		static bool ballInHeadingHeight(const Player& p);
		static bool canKickBall(const Player& p);
		static Player* nearestOwnPlayerToPlayer(const Team& t, const Player& p);
		static Player* nearestOwnPlayerToBall(const Team& t);
		static Player* nearestOwnFieldPlayerToBall(const Team& t);
		static Player* nearestOppositePlayerToBall(const Team& t);
		static Player* nearestOwnPlayerTo(const Team& t, const Common::Vector3& v, bool goalkeepers = true);
		static bool nearestOwnPlayerTo(const Player& p, const Common::Vector3& v);
		static bool myTeamInControl(const Player& p);
		static const std::vector<boost::shared_ptr<Player>>& getOpposingPlayers(const Player& p);
		static const std::vector<boost::shared_ptr<Player>>& getOpposingPlayers(const Team& t);
		static const std::vector<boost::shared_ptr<Player>>& getOwnPlayers(const Player& p);
		static const std::vector<boost::shared_ptr<Player>>& getTeamPlayers(const Match& m, unsigned int idx);
		static const Team* getOpposingTeam(const Player& p);
		static bool attacksUp(const Player& p);
		static bool attacksUp(const Team& t);
		static bool onPitch(const Match& m, const Common::Vector3& v);
		static bool onPitch(const MatchEntity& m);
		static bool playersOnPause(const Match& m);
		static bool playerPositionedForRestart(const Player& restarter, const Player& p);
		static bool playersPositionedForRestart(const Match& m, const Player& restarter);
		static bool onOwnSideAndReady(const Player& p);
		static bool onOwnSide(const Player& p);
		static int inPenaltyArea(const Player& p);
		static int inPenaltyArea(const Match& m, const Common::Vector3& v);
		static bool inOwnPenaltyArea(const Player& p);
		static bool inOpposingPenaltyArea(const Player& p);
		static bool isOpposingPlayer(const Player& p1, const Player& p2);
		static bool grabBallAllowed(const Player& p);
		static bool canGrabBall(const Player& p);
		static bool goodKickingPosition(const Player& p, const Common::Vector3& v);
		static float distanceToOwnGoal(const Player& p);
		static float distanceToOppositeGoal(const Player& p);
		static float distanceToOwnGoal(const Player& p, const Common::Vector3& v);
		static float distanceToOppositeGoal(const Player& p, const Common::Vector3& v);
		static bool playerBlockingRestart(const Player& p);
		static Common::Vector3 playerJumpVelocity(const Player& p, const Common::Vector3& dir);
};

#endif

