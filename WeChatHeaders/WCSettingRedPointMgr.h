//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IMsgExt.h"
#import "MMService.h"

@class NSArray, NSString, RedPointCtrlInfo;

@interface WCSettingRedPointMgr : MMService <IMsgExt, MMService>
{
    RedPointCtrlInfo *_ctrlInfo;
    NSArray *_validRedPointPathArray;
}

- (void).cxx_destruct;
- (BOOL)canPluginReceiveRedPoint:(id)arg1;
- (void)parseRedPointCtrlMsg:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)delCtrlInfo;
- (BOOL)trySetSeqWhenShowPluginProfileInfo:(id)arg1;
- (BOOL)trySetSeqWhenShowPluginView;
- (BOOL)trySetSeqWhenShowGeneralView;
- (BOOL)trySetSeqWhenShowRecentOptionView;
- (BOOL)trySetSeqWhenShowPrivacyView;
- (BOOL)trySetSeqWhenShowSettingView;
- (BOOL)trySetSeqWhenShowMoreView;
- (BOOL)shouldShowRedPointInPluginItem:(id)arg1;
- (BOOL)shouldShowRedPointInPluginCell;
- (BOOL)shouldShowRedPointInGeneralCell;
- (BOOL)shouldShowRedPointInRecentOption;
- (BOOL)shouldShowRedPointInPrivacy;
- (BOOL)shouldShowRedPointInSetting;
- (BOOL)shouldShowRedPointInMoreTab;
- (void)clearAllData;
- (void)loadData;
- (void)onServiceEnterForeground;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

