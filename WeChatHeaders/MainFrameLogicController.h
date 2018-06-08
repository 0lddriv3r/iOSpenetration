//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "IContactMgrExt.h"
#import "IGroupMgrExt.h"
#import "IMMNewSessionMgrExt.h"
#import "INetworkStatusMgrExt.h"
#import "INewSyncExt.h"
#import "IWXTalkPresentExt.h"

@class MMTimer, MainFrameCellDataManager, NSMutableArray, NSMutableDictionary, NSString, WAContactGetter;

@interface MainFrameLogicController : MMObject <INewSyncExt, IGroupMgrExt, INetworkStatusMgrExt, IMMNewSessionMgrExt, IWXTalkPresentExt, IContactMgrExt>
{
    id <mainFrameLogicControllerDelegate> m_delegate;
    BOOL m_bPlayNewMsgDuringOneSync;
    NSMutableArray *m_voiceSearcharrFilteredSession;
    NSMutableArray *m_arrFilteredSession;
    NSString *m_nsLastSearchText;
    MMTimer *m_updateTimeLabelTimer;
    BOOL m_bReadyToLoadData;
    NSMutableDictionary *m_dicPlayNewMsgNotify;
    NSString *m_nsUsrNameOnStatusBar;
    unsigned long m_shownCellMaxIndex;
    BOOL m_bIsPreCreatingCellData;
    int m_lastPreCreateCellIndex;
    MainFrameCellDataManager *m_cellDataMgr;
    WAContactGetter *m_contactGetter;
}

@property(retain, nonatomic) NSString *m_nsLastSearchText; // @synthesize m_nsLastSearchText;
@property(readonly, nonatomic) BOOL m_bReadyToLoadData; // @synthesize m_bReadyToLoadData;
@property(nonatomic) __weak id <mainFrameLogicControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)pluginsChanged:(id)arg1;
- (void)onNetworkStatusChange:(unsigned long)arg1;
- (void)OnChangeNotifyStatus:(id)arg1 withStatus:(BOOL)arg2;
- (void)OnQuitGroup:(id)arg1;
- (void)popToMainFrameAnimated:(id)arg1;
- (void)OnChangeGroup:(id)arg1;
- (void)onNewSyncBegin;
- (void)onDeleteSession:(unsigned long)arg1 withUser:(id)arg2;
- (void)onActiveUsrNameChange:(id)arg1 curUsrName:(id)arg2;
- (void)onNewMsgArriving:(id)arg1 NotifyFlag:(int)arg2;
- (void)onSessionTotalUnreadCountChange:(unsigned long)arg1;
- (void)onSessionChanged:(id)arg1;
- (void)onNeedRebuild;
- (void)onNeedReload;
- (void)onSessionRebuildEnd;
- (void)onSessionRebuildBegin;
- (void)onSessionTopStatusChanged:(id)arg1 bTop:(BOOL)arg2;
- (void)clearResource;
- (BOOL)canShowStatusBar;
- (id)getSessionInfoOnStatusBar;
- (unsigned long)getCurNetworkStatusType;
- (BOOL)isInitEd;
- (BOOL)isShowSetHead;
- (id)getSessionInfoByContact:(id)arg1;
- (void)cancelSearch;
- (void)doSearch:(id)arg1;
- (void)setVoiceSearchFilteredSessionInfo:(id)arg1;
- (id)getVoiceSearchFilteredSessionInfo:(unsigned long)arg1;
- (int)getLastActionSessionIndex;
- (int)getFirstHasUnreadReadcodMsgSessionIndexFrom:(int)arg1;
- (int)getFirstHasUnreadNotReadcodMsgSessionIndexFrom:(int)arg1;
- (int)getFirstHasUnreadMsgSessionIndexFrom:(int)arg1;
- (id)getFilteredSessionInfo:(unsigned long)arg1;
- (unsigned int)getFilteredSessionCount;
- (unsigned int)getVoiceSearchFilteredSessionCount;
- (BOOL)isHasActiveUsr;
- (BOOL)isActiveUsr:(id)arg1;
- (void)setActiveSession:(id)arg1;
- (void)deleteSession:(unsigned int)arg1;
- (unsigned long)getTotalUnreadCountInRedDot;
- (unsigned long)getTotalUnreadCount;
- (id)getSessionInfo:(unsigned int)arg1;
- (unsigned long)getSessionCount;
- (void)setReadyToLoadData;
- (void)updateTimeForAllCellDatas;
- (void)removeCellData:(id)arg1;
- (id)getCellDataByUsrName:(id)arg1;
- (void)cleanupPreLoadCacheIfNeed:(unsigned long)arg1;
- (void)cleanupCellDataCache;
- (id)updateCellData:(id)arg1;
- (id)getCellDataForFilterSession:(unsigned long)arg1;
- (id)getCellData:(unsigned long)arg1;
- (void)dealloc;
- (id)initWithFromReg:(BOOL)arg1;
- (void)fixSelfHeadImage;
- (void)removeNotificationCenterObservers;
- (void)addNotificationCenterObservers;
- (void)unRegisterExt;
- (void)registerExt;
- (void)callUpdateSessionByName:(id)arg1;
- (void)callUpdateSession:(id)arg1;
- (void)callUpdateWXTalkStatusBar;
- (void)callUpdateStatusBar;
- (id)getUnreadSessionInfoList;
- (void)playNewMsgNotify:(id)arg1 NotifyFlag:(int)arg2;
- (BOOL)isPlayingOrRecording;
- (BOOL)isMsgUnread:(id)arg1 NotifyFlag:(int)arg2;
- (void)handleUIApplicationDidBecomeActiveNotification:(id)arg1;
- (void)onUpdateTimeLabelTimer:(id)arg1;
- (void)stopUpdateTimeLabelTimer;
- (void)startUpdateTimeLabelTimer;
- (void)startupPreCreateForCellData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
