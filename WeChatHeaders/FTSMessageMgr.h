//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FTSMsgSearchTaskDelegate.h"
#import "IAsyncTaskProtocol.h"
#import "IMsgExt.h"
#import "WXGImportMessageNotification.h"

@class AsyncTaskQueueEngine, FTSDB, FTSMessageDB, FTSMsgSearchTask, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSRecursiveLock, NSString;

@interface FTSMessageMgr : NSObject <FTSMsgSearchTaskDelegate, IAsyncTaskProtocol, IMsgExt, WXGImportMessageNotification>
{
    FTSMessageDB *_ftsMessageDB;
    AsyncTaskQueueEngine *_asyncTaskQueueEngine;
    FTSDB *_ftsDB;
    NSRecursiveLock *_lock;
    BOOL _hasInitTask;
    BOOL _hasForegroundTask;
    BOOL _hasBackgroundTask;
    NSMutableArray *_arrSessionUser;
    NSMutableDictionary *_dicLatestSession;
    BOOL _hasNewMessage;
    BOOL _needMonitorReport;
    BOOL _enableTimerTask;
    BOOL _isTimerTasking;
    NSRecursiveLock *_indexMemCacheLock;
    BOOL _bStopCacheMsg;
    NSMutableDictionary *_dicUnIndexMsgCache;
    BOOL _bShouldReloadUpdatedSession;
    NSMutableSet *_setUpdatedSession;
    unsigned long _uiMsgIndexTaskControllTimestamp;
    NSObject<OS_dispatch_queue> *_ftsCleanQueue;
    FTSMsgSearchTask *_homePageSearchTask;
    FTSMsgSearchTask *_morePageSearchTask;
    FTSMsgSearchTask *_firstRestrictSearchTask;
    FTSMsgSearchTask *_secondRestrictSearchTask;
    BOOL _isFirstRestrictPageAgainSearch;
    BOOL _isSecondeRestrictPageAgainSearch;
}

@property(nonatomic) BOOL needMonitorReport; // @synthesize needMonitorReport=_needMonitorReport;
@property(retain, nonatomic) NSMutableDictionary *dicLatestSession; // @synthesize dicLatestSession=_dicLatestSession;
@property(retain, nonatomic) NSMutableArray *arrSessionUser; // @synthesize arrSessionUser=_arrSessionUser;
- (void).cxx_destruct;
- (void)onReceiveMemoryWarning;
- (void)onEnterBackground;
- (void)clearIndexMemCache;
- (void)removeUnIndexMsgFromID:(unsigned long)arg1 toID:(unsigned long)arg2 forKey:(id)arg3;
- (void)removeUnIndexMsg:(id)arg1 forKey:(id)arg2;
- (void)cacheUnIndexMsg:(id)arg1 forKey:(id)arg2;
- (unsigned long)calAllMemMsgCount;
- (void)memSearchLog:(id)arg1 searchDone:(BOOL)arg2 isComplete:(BOOL)arg3;
- (BOOL)isFtsIndexTargetMsg:(id)arg1;
- (BOOL)shouldCacheMsg:(id)arg1;
- (void)enableIndexMemCache:(BOOL)arg1;
- (void)enableTimerTask:(BOOL)arg1;
- (BOOL)hasTimerTask;
- (void)onImportMessageSuccess;
- (void)doIndexIfNeeded;
- (void)wakeUpForegroundTask;
- (void)tryWakeUpTimerTask;
- (void)OnDelMsg:(id)arg1 DelAll:(BOOL)arg2;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)checkIndexTimerTask;
- (void)updateIndexTaskState;
- (void)updateLatestSession;
- (void)excuteTimerTask;
- (void)excuteBackgroundTask;
- (BOOL)hasBackgroundTask;
- (void)excuteForegroundTask;
- (BOOL)hasForegroundTask;
- (void)excuteInitTask;
- (BOOL)hasInitTask;
- (void)asyncMonitorReport;
- (unsigned int)getIndexNotReadyCount:(id)arg1;
- (BOOL)hasCreateAllIndex:(id)arg1;
- (id)getTaskForContext:(int)arg1;
- (BOOL)isMsgTaskOnFirstSearch:(id)arg1;
- (void)onMsgSearchTaskResultChanged:(BOOL)arg1 taskObj:(id)arg2;
- (id)getRestrictSectionResult:(id)arg1 isMainPage:(BOOL)arg2;
- (id)getRestrictSearchResult:(id)arg1 isMainPage:(BOOL)arg2;
- (BOOL)isLikelyTalkerSearch:(id)arg1 isMainPage:(BOOL)arg2;
- (BOOL)hasSearchDoneForRestrictSearch:(id)arg1 isMainPage:(BOOL)arg2;
- (void)cancelRestrictSearch:(BOOL)arg1;
- (void)asyncRestrictSearch:(id)arg1 isMainPage:(BOOL)arg2;
- (void)prepareRestrictSearch:(id)arg1 restrictSessionUsr:(id)arg2 restrictTalkerUsr:(id)arg3 restrictTalkerMatchTip:(id)arg4 restrictTalkerQuery:(id)arg5 sessionFirst:(BOOL)arg6 isMainPage:(BOOL)arg7;
- (id)getRestrictPageLastQueryText:(BOOL)arg1;
- (id)getRestrictPageArrLastQuerywords:(BOOL)arg1;
- (id)getRestrictRealQueryPartFromQuery:(id)arg1 isMainPage:(BOOL)arg2;
- (id)getRestrictTalkerPartFromQuery:(id)arg1 isMainPage:(BOOL)arg2;
- (id)getRestrictPageNewestQuery:(BOOL)arg1;
- (void)setRestrictPageAgainSearch:(BOOL)arg1 isMainPage:(BOOL)arg2;
- (void)setRestrictPageNewestQuery:(id)arg1 isMainPage:(BOOL)arg2;
- (void)makeDetailRestrictPageTaskIfNil;
- (void)makeFirstRestrictPageTaskIfNil;
- (BOOL)isDetailPageLikelyTalkerSearch:(id)arg1;
- (id)getSessionMsgItemsForDetailPage:(id)arg1 index:(unsigned int)arg2;
- (unsigned int)getMsgItemsCountForDetailPage:(id)arg1;
- (id)getSessionUsersForDetailPage:(id)arg1;
- (BOOL)hasSearchDoneForDetailPage:(id)arg1;
- (id)getDetailPageLastQueryText;
- (id)getDetailPageArrLastQuerywords;
- (void)setDetailPageNewestQuery:(id)arg1;
- (id)getDetailPageNewestQuery;
- (void)makeDetailPageTaskIfNil;
- (void)cancelSearchForDetailPage;
- (void)asyncSearchTextForDetailPage:(id)arg1;
- (id)getSessionMsgItemsForHomePage:(id)arg1 index:(unsigned int)arg2;
- (unsigned int)getMsgItemsCountForHomePage:(id)arg1;
- (unsigned int)getSessionUserCountForHomePage:(id)arg1;
- (BOOL)hasMemoryMessageResultForHomePage:(id)arg1;
- (BOOL)hasIndexMessageResultForHomePage:(id)arg1;
- (BOOL)hasProtentialTalkerSearchEntry:(id)arg1;
- (BOOL)hasSearchDoneForHomePage:(id)arg1;
- (BOOL)hasSearchResultForHomePage:(id)arg1;
- (id)getHomePageLastQueryText;
- (void)removeAllTask;
- (void)cancelSearchForHomePage;
- (id)safeCopyUnIndexMsgCache;
- (void)asyncSearchTextForHomePage:(id)arg1;
- (id)getHomePageLastQuerText;
- (id)getHomePageArrLastQuerywords;
- (void)setHomepageNewestQuery:(id)arg1;
- (void)makeHomePageTaskIfNil;
- (void)reloadDB;
- (void)initDB:(id)arg1 lock:(id)arg2 asyncTaskQueueEngine:(id)arg3;
- (void)setNeedsInitTask;
- (void)resetCache;
- (void)onRecoverFTSDB;
- (void)onPreRecoverFTSDB;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

