#ifndef REFEREEACTIONS_H
#define REFEREEACTIONS_H

#include "match/Match.h"

class Match;
class Referee;

class RefereeAction {
	public:
		virtual ~RefereeAction() { }
		virtual void applyRefereeAction(Match& match, const Referee& p, double time) = 0;
};

class IdleRA : public RefereeAction {
	public:
		void applyRefereeAction(Match& match, const Referee& p, double time);
};

class ChangeMatchHalfRA : public RefereeAction {
	public:
		ChangeMatchHalfRA(MatchHalf h);
		void applyRefereeAction(Match& match, const Referee& p, double time);
	private:
		MatchHalf mMatchHalf;
};

class ChangePlayStateRA : public RefereeAction {
	public:
		ChangePlayStateRA(PlayState h);
		void applyRefereeAction(Match& match, const Referee& p, double time);
	private:
		PlayState mPlayState;
};

#endif

