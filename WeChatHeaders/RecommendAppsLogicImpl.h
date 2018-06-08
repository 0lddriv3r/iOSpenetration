//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface RecommendAppsLogicImpl : MMObject <PBMessageObserverDelegate>
{
    NSArray *_recommendAppsList;
    NSMutableArray *_tempList;
    BOOL _isUpdating;
    BOOL _isGettingIcon;
    NSMutableDictionary *_updateIconDic;
    unsigned long _lastUpdateTime;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (BOOL)handleGetAppIconRsp:(id)arg1;
- (void)handleNotShowNewLogic;
- (void)handleUpdateRecommendAppsListWithOffsetResp:(id)arg1;
- (void)addNewItemToUpdateIconDicAndStartUpdate;
- (BOOL)makeUrlRequest:(id)arg1 userData:(id)arg2;
- (void)getAppIcon:(id)arg1 appID:(id)arg2;
- (void)checkAndUpdateAppIcon;
- (void)clearRcmApps;
- (void)setRecommendAppNotShowNew:(id)arg1;
- (id)GetPathOfRecommendAppIcon:(id)arg1 IconUrl:(id)arg2;
- (void)saveRecommendAppsList;
- (void)loadRecommendAppsListFromFile;
- (id)getAppInfoDataRootDir;
- (BOOL)updateRecommendAppsListWithOffset:(unsigned long)arg1;
- (BOOL)updateRecommendAppsList;
- (id)getRecommendAppsList;
- (void)dealloc;
- (id)init;

@end

