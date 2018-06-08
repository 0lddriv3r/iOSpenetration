//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "PBMessageObserverDelegate.h"
#import "WCFacadeExt.h"

@class NSMutableDictionary, NSString;

@interface TranslateSnsMgr : MMService <MMService, PBMessageObserverDelegate, WCFacadeExt>
{
    NSMutableDictionary *_dicSessionTransInfos;
    NSMutableDictionary *_dicSequenceWaitTask;
    NSMutableDictionary *_dicSequenceRunningTask;
    unsigned long _sequence;
    BOOL _isWorking;
}

+ (id)GetTranslateContent:(id)arg1;
+ (BOOL)showTranslatedTextBtn:(id)arg1;
+ (BOOL)canShowTranslateView:(id)arg1;
+ (BOOL)checkContentOrComment:(id)arg1;
+ (id)getSnsTransDataWrapWithComment:(id)arg1 andScene:(int)arg2 andDataItemTid:(id)arg3;
+ (id)getSnsTransDataWrap:(id)arg1 andScene:(int)arg2;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)responseForTransTextResponse:(id)arg1 Event:(unsigned long)arg2;
- (void)asyncNotifyTranslateSnsChanged:(id)arg1;
- (void)notifyTranslateSnsChanged:(id)arg1;
- (void)onCommentItemDeleteFinished:(int)arg1 commentItemID:(id)arg2 dataItemID:(id)arg3;
- (void)onDataItemDeleteFinished:(int)arg1 dataItemID:(id)arg2;
- (void)saveSessionTransInfos:(id)arg1;
- (void)loadSessionTransInfos:(id)arg1;
- (id)pathForSessionTransInfos:(id)arg1;
- (BOOL)taskInQueue:(id)arg1;
- (void)showAnimationEnd:(id)arg1;
- (BOOL)shouldNeedShowAnimation:(id)arg1;
- (BOOL)showTranslatedTextNow:(id)arg1;
- (id)getTranslateInfo:(id)arg1;
- (void)tryTranslateMsgs;
- (void)translateSns:(id)arg1;
- (void)callExtensionWhenPhotoContentChange:(id)arg1;
- (id)getDataWrapContent:(id)arg1;
- (id)getDisplayContent:(id)arg1;
- (id)getSnsID:(id)arg1;
- (id)getContentSnsID:(id)arg1;
- (id)getCommentSnsID:(id)arg1 withDataItemID:(id)arg2;
- (BOOL)onServiceMemoryWarning;
- (void)changeLanguageAndCleanAllCache;
- (void)clearSnsTranslateCache;
- (void)resetSnsAllTranslatingStatus;
- (void)onServiceReloadData;
- (void)reloadDatabase;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
