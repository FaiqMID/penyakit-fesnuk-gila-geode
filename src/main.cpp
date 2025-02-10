#include <Geode/Geode.hpp>
#include <Geode/utils/web.hpp>
#include <Geode/modify/EditLevelLayer.hpp>
#include <Geode/modify/LevelSelectLayer.hpp>
#include <Geode/modify/LevelInfoLayer.hpp>

using namespace geode::prelude;

class $modify(EditLevelLayer) {
	bool init(GJGameLevel* level) {
		if (!EditLevelLayer::init(level)) {
			return false;
		}
		return true;
	}

	void onPlay(CCObject* sender){
		web::openLinkInBrowser("https://facebook.com");
	}
};

// class $modify(LevelSelectLayer) {
// 	bool init() {
// 		if (!LevelSelectLayer::init()) {
// 			return false;
// 		}
// 		return true;
// 	}

// 	void onPlay(CCObject* sender){
// 		web::openLinkInBrowser("https://facebook.com");
// 	}
// };

class $modify(LevelInfoLayer){
	bool init(GJGameLevel* level, bool challenge) {
		if (!LevelInfoLayer::init(level, challenge)) {
			return false;
		}
		return true;
	}

	void onPlay(CCObject* sender){
		web::openLinkInBrowser("https://facebook.com");
	}
};